// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B8DF0 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_585b8df0_585B8DF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 58 0D 00 00: mov ax, word ptr [edx + 0xd58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        push ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 58 0D 00 00: mov ax, word ptr [edx + 0xd58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CB B9 F2 FF: call 0x584e4800
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb9
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
