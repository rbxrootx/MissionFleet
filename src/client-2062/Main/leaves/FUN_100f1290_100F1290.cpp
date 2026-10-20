// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F1290 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_100f1290_100F1290() {
    __asm {
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 80 94 05 01 00: mov ax, word ptr [eax + 0x10594]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x100f12a8
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 75 12: jne 0x100f12ba
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 0ee8h]
        add eax, edx
        mov dword ptr [ecx + 0ee8h], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
