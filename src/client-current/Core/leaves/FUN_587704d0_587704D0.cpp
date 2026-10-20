// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587704D0 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_587704d0_587704D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 4]
        test ecx, ecx
        ; Exact mapped bytes 7E 12: jle 0x587704f4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 04: mov word ptr [ecx + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        mov esp, ebp
        pop ebp
        ret
    }
}
