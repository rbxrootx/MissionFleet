// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585955A0 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_585955a0_585955A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, 15h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 06 0A 00 00: mov word ptr [ecx + 0xa06], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 04 0A 00 00: mov word ptr [eax + 0xa04], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a06h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0e8h], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
