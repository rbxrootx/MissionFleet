// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58485F90 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_58485f90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 66 0F B6 45 08: movzx ax, byte ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        mov ecx, 0fff0h
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 4A 24: and cx, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x4a
        __asm _emit 0x24
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        mov esp, ebp
        pop ebp
        ret 4
    }
}
