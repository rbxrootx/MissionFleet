// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10095B20 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_10095b20_10095B20() {
    __asm {
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 66 25 00 1F: and ax, 0x1f00
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x1f
        ; Exact mapped bytes 66 3D 00 05: cmp ax, 0x500
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 74 16: je 0x10095b44
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 74 10: je 0x10095b44
        __asm _emit 0x74
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 39 81 E0 00 00 00: cmp word ptr [ecx + 0xe0], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        setne al
        inc eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 33 C0: xor ax, ax
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
