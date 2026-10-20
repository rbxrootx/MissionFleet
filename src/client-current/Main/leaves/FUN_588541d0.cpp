// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588541D0 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_588541d0() {
    __asm {
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        push esi
        mov esi, dword ptr [esp + 8]
        add eax, 34ch
        mov eax, dword ptr [eax + esi*4 + 0b40h]
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x58854227
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 66 0F B6 00: movzx ax, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x00
        movzx eax, ax
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 74 2C: je 0x58854227
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 75 26: jne 0x58854227
        __asm _emit 0x75
        __asm _emit 0x26
        mov edx, dword ptr [edx + 4]
        lea eax, [esi + edx]
        movzx edx, byte ptr [eax + 1fch]
        movzx eax, byte ptr [eax + 21ch]
        lea edx, [eax + edx*2 + 10h]
        mov eax, dword ptr [ecx + edx*8]
        ; Exact mapped bytes 66 8B 80 A6 00 00 00: mov ax, word ptr [eax + 0xa6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
