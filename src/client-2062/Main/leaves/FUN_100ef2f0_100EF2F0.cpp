// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EF2F0 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_100ef2f0_100EF2F0() {
    __asm {
        ; Exact mapped bytes 66 8B 44 24 08: mov ax, word ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        mov edx, dword ptr [esp + 4]
        ; Exact mapped bytes 66 3D 0B 00: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 75 10: jne 0x100ef30f
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, edx
        and eax, 0ffffh
        mov eax, dword ptr [ecx + eax*8 + 100ch]
        ; Exact mapped bytes EB 1B: jmp 0x100ef32a
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 66 3D 0C 00: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 75 10: jne 0x100ef325
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, edx
        and eax, 0ffffh
        mov eax, dword ptr [ecx + eax*8 + 1010h]
        ; Exact mapped bytes EB 05: jmp 0x100ef32a
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 09: je 0x100ef338
        __asm _emit 0x74
        __asm _emit 0x09
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x100ef338
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 1
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
