// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B3A0 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_5887b3a0() {
    __asm {
        mov eax, dword ptr [ecx + 60h]
        ; Exact mapped bytes 66 8B 40 7C: mov ax, word ptr [eax + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x7c
        mov edx, dword ptr [esp + 8]
        ; Exact mapped bytes 66 40: inc ax
        __asm _emit 0x66
        __asm _emit 0x40
        ; Exact mapped bytes 66 89 02: mov word ptr [edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x02
        mov eax, dword ptr [esp + 4]
        movzx eax, word ptr [eax + 2]
        cmp eax, 0ddh
        ; Exact mapped bytes 74 1A: je 0x5887b3d9
        __asm _emit 0x74
        __asm _emit 0x1a
        add eax, 0ffffff22h
        cmp eax, 1
        ; Exact mapped bytes 77 16: ja 0x5887b3df
        __asm _emit 0x77
        __asm _emit 0x16
        mov ecx, dword ptr [ecx + 64h]
        ; Exact mapped bytes 66 8B 41 7C: mov ax, word ptr [ecx + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x7c
        ; Exact mapped bytes 66 40: inc ax
        __asm _emit 0x66
        __asm _emit 0x40
        ; Exact mapped bytes 66 89 42 02: mov word ptr [edx + 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x02
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4A 02: mov word ptr [edx + 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x02
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
