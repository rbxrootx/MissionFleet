// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B50D0 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_588b50d0() {
    __asm {
        mov eax, dword ptr [ecx + 0c0h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 0bch]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        movzx eax, word ptr [ecx + 19ch]
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 75 0D: jne 0x588b5104
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, 4
        ; Exact mapped bytes 66 89 81 9C 01 00 00: mov word ptr [ecx + 0x19c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ret
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 75 F9: jne 0x588b5103
        __asm _emit 0x75
        __asm _emit 0xf9
        mov edx, 4
        ; Exact mapped bytes 66 89 91 9C 01 00 00: mov word ptr [ecx + 0x19c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E9 0F 58 F0 FF: jmp 0x587ba930
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xf0
        __asm _emit 0xff
    }
}
