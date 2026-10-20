// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58854160 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_58854160() {
    __asm {
        push esi
        ; Exact mapped bytes 8B 35 F8 47 A2 58: mov esi, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [esi + 4]
        push edi
        mov edi, dword ptr [esp + 0ch]
        add eax, 34ch
        mov eax, dword ptr [eax + edi*4 + 0b40h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x58854184
        __asm _emit 0x74
        __asm _emit 0x05
        movzx eax, byte ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x58854186
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        movzx edx, ax
        mov eax, dword ptr [esi + 4]
        movzx esi, byte ptr [eax + edi + 1fch]
        add eax, edi
        movzx eax, byte ptr [eax + 21ch]
        pop edi
        lea eax, [eax + esi*2]
        pop esi
        cmp edx, 5
        ; Exact mapped bytes 75 0E: jne 0x588541b5
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + eax*8 + 7ch]
        ; Exact mapped bytes 66 8B 81 A4 00 00 00: mov ax, word ptr [ecx + 0xa4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp edx, 6
        ; Exact mapped bytes 75 11: jne 0x588541cb
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ecx + eax*8 + 80h]
        ; Exact mapped bytes 66 8B 82 A4 00 00 00: mov ax, word ptr [edx + 0xa4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
