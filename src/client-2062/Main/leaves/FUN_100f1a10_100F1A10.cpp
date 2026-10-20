// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F1A10 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_100f1a10_100F1A10() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0ch]
        mov eax, ecx
        and eax, 0fh
        sub eax, 5
        ; Exact mapped bytes 74 35: je 0x100f1a56
        __asm _emit 0x74
        __asm _emit 0x35
        dec eax
        ; Exact mapped bytes 74 24: je 0x100f1a48
        __asm _emit 0x74
        __asm _emit 0x24
        sub eax, 7
        ; Exact mapped bytes 74 11: je 0x100f1a3a
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [esi + ecx*4 + 9cch], 0
        ; Exact mapped bytes EB 33: jmp 0x100f1a6d
        __asm _emit 0xeb
        __asm _emit 0x33
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 7A 37 F3 FF: call 0x100251c0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x37
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 1A: jmp 0x100f1a62
        __asm _emit 0xeb
        __asm _emit 0x1a
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 4C 36 F3 FF: call 0x100250a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x36
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 0C: jmp 0x100f1a62
        __asm _emit 0xeb
        __asm _emit 0x0c
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 DE 35 F3 FF: call 0x10025040
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x35
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [esi + ecx*4 + 9cch], eax
        mov dword ptr [esi + ecx*8 + 0a4ch], 0
        mov eax, 0aah
        mov dword ptr [esi + ecx*8 + 0a50h], 0
        ; Exact mapped bytes 66 89 84 8E 4C 09 00 00: mov word ptr [esi + ecx*4 + 0x94c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 84 8E 4E 09 00 00: mov word ptr [esi + ecx*4 + 0x94e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100f1aa7
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 C9 09 00 00: call 0x100f2470
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
