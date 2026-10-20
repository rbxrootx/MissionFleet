// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876BC10 .. +0x1F0 bytes.
extern "C" __declspec(naked) void FUN_5876bc10() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 BC 01 00 00: je 0x5876bddb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5ch]
        push edi
        test eax, eax
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x5876bcc1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add dword ptr [esi + 6ch], -0dh
        mov eax, dword ptr [esi + 6ch]
        add dword ptr [esi + 60h], eax
        mov edx, dword ptr [esi + 70h]
        add dword ptr [esi + 64h], edx
        mov eax, dword ptr [esi + 60h]
        mov edi, dword ptr [esi + 64h]
        cdq
        mov ecx, dword ptr [esi + 74h]
        add dword ptr [esi + 68h], ecx
        and edx, 7
        add eax, edx
        mov ecx, dword ptr [esi + 68h]
        push ebp
        mov ebp, eax
        mov eax, 51eb851fh
        imul edi
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sar ebp, 3
        sub eax, ebp
        add eax, dword ptr [esi + 78h]
        inc dword ptr [esi + 50h]
        push eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        add ecx, dword ptr [esi + 7ch]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 04 76 19 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x76
        __asm _emit 0x19
        __asm _emit 0x00
        cmp dword ptr [esi + 60h], 0
        pop ebp
        ; Exact mapped bytes 7D 07: jge 0x5876bc9a
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [esi + 5ch], 1
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 35 01 00 00: je 0x5876bdda
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5876bcbd
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x5876bca5
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
        cmp eax, 1
        ; Exact mapped bytes 0F 85 EA 00 00 00: jne 0x5876bdb4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 0ch]
        test edi, edi
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x5876bd65
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x5876bce0
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 F9 A9 16 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xa9
        __asm _emit 0x16
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x5876bd2e
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        push 0
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 64 AC 16 00: call 0x588d6960
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xac
        __asm _emit 0x16
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 37: jne 0x5876bd37
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0fh
        ; Exact mapped bytes 7E 16: jle 0x5876bd24
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x5876bd24
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 3c0h
        ; Exact mapped bytes EB 02: jmp 0x5876bd26
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F2 8B FC FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x8b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        ; Exact mapped bytes 75 AB: jne 0x5876bce0
        __asm _emit 0x75
        __asm _emit 0xab
        ; Exact mapped bytes EB 2E: jmp 0x5876bd65
        __asm _emit 0xeb
        __asm _emit 0x2e
        ; Exact mapped bytes A1 F4 46 A2 58: mov eax, dword ptr [0x58a246f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 14h
        ; Exact mapped bytes 7E 16: jle 0x5876bd5b
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x5876bd5b
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 500h
        ; Exact mapped bytes EB 02: jmp 0x5876bd5d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 BB 8B FC FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x8b
        __asm _emit 0xfc
        __asm _emit 0xff
        push 101h
        mov ecx, esi
        ; Exact mapped bytes E8 AF 6F 19 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x6f
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [esi + 50h], 0
        mov dword ptr [esi + 5ch], 2
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x5876bd8c
        __asm _emit 0x74
        __asm _emit 0x06
        movzx eax, word ptr [eax + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x5876bd8e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3ch]
        mov dword ptr [esi + 58h], eax
        test ecx, ecx
        ; Exact mapped bytes 74 42: je 0x5876bdda
        __asm _emit 0x74
        __asm _emit 0x42
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5876bdb0
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x5876bd98
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
        cmp eax, 2
        ; Exact mapped bytes 75 0B: jne 0x5876bdc4
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes E8 62 3C FE FF: call 0x5874fa20
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x5876bddd
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, esi
        ; Exact mapped bytes E8 57 6E 19 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x6e
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 A0 6E 19 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x6e
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        ret
        mov ecx, dword ptr [esi + 3ch]
        inc dword ptr [esi + 50h]
        test ecx, ecx
        ; Exact mapped bytes 74 F3: je 0x5876bdda
        __asm _emit 0x74
        __asm _emit 0xf3
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5876bdff
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x5876bde7
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
    }
}
