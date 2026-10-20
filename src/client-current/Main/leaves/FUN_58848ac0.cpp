// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58848AC0 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_58848ac0() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        ; Exact mapped bytes 66 8B B7 AC 00 00 00: mov si, word ptr [edi + 0xac]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb7
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        xor edx, edx
        ; Exact mapped bytes 66 89 B1 F6 00 00 00: mov word ptr [ecx + 0xf6], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xb1
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BF AC 00 00 00 01: cmp word ptr [edi + 0xac], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 0B: jne 0x58848aed
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ecx + 64h]
        lea edx, [ecx + 0f8h]
        ; Exact mapped bytes EB 12: jmp 0x58848aff
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 66 39 87 AC 00 00 00: cmp word ptr [edi + 0xac], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x87
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x58848aff
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ecx + 6ch]
        lea edx, [ecx + 0fah]
        xor esi, esi
        ; Exact mapped bytes 66 83 BF AC 00 00 00 01: cmp word ptr [edi + 0xac], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 09: jne 0x58848b14
        __asm _emit 0x75
        __asm _emit 0x09
        movzx ecx, word ptr [ecx + 0f0h]
        ; Exact mapped bytes EB 07: jmp 0x58848b1b
        __asm _emit 0xeb
        __asm _emit 0x07
        movzx ecx, word ptr [ecx + 0f2h]
        cmp eax, edi
        ; Exact mapped bytes 74 15: je 0x58848b34
        __asm _emit 0x74
        __asm _emit 0x15
        nop
        mov eax, dword ptr [eax + 54h]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x58848b34
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 66 FF 02: inc word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x02
        inc esi
        ; Exact mapped bytes 66 3B F1: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 7D 04: jge 0x58848b34
        __asm _emit 0x7d
        __asm _emit 0x04
        cmp eax, edi
        ; Exact mapped bytes 75 EC: jne 0x58848b20
        __asm _emit 0x75
        __asm _emit 0xec
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
