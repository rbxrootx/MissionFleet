// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D8A20 .. +0x2D1 bytes.
extern "C" __declspec(naked) void FUN_585d8a20_585D8A20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push esi
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FE B0 F8 FF: call 0x58563b30
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xb0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 DF EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xdf
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 67: je 0x585d8aab
        __asm _emit 0x74
        __asm _emit 0x67
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 DF EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xdf
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EA 39 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x39
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 93 CD EB FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xcd
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 20h]
        cmp eax, 2
        ; Exact mapped bytes 75 3C: jne 0x585d8aab
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 DF EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xdf
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BF 39 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x39
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 68 CD EB FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xcd
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, 2
        shl ecx, 0
        movzx edx, word ptr [eax + ecx + 20h]
        cmp edx, 0dh
        ; Exact mapped bytes 75 11: jne 0x585d8aab
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4E A2 FF FF: call 0x585d2cf0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 220c8h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A DF EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xdf
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 83 39 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1C BF EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xbf
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [eax + edx*4 + 168h]
        mov ecx, 2
        imul edx, ecx, 0
        ; Exact mapped bytes 0F BF 04 10: movsx eax, word ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x10
        imul esi, eax, 0ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B 39 EB FF: call 0x5848c460
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x39
        __asm _emit 0xeb
        __asm _emit 0xff
        lea ecx, [esi + eax + 384h]
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 DE EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xde
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3E 39 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x39
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D7 BE EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xbe
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [eax + edx*4 + 168h]
        mov ecx, 2
        shl ecx, 0
        ; Exact mapped bytes 0F BF 14 08: movsx edx, word ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x08
        imul esi, edx, 0ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 36 39 EB FF: call 0x5848c460
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x39
        __asm _emit 0xeb
        __asm _emit 0xff
        lea eax, [esi + eax + 384h]
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 0F BF 45 FC: movsx eax, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xfc
        cdq
        mov ecx, 0e10h
        idiv ecx
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BF 45 F8: movsx eax, word ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xf8
        cdq
        mov ecx, 0e10h
        idiv ecx
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 220c8h]
        sub eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 20e74h]
        ; Exact mapped bytes E8 D7 9E FF FF: call 0x585d2a50
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 75 09: jne 0x585d8b89
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 12h
        ; Exact mapped bytes EB 07: jmp 0x585d8b90
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 3
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 77 87 EB FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x87
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8E 07 01 00 00: jle 0x585d8cac
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 85 AC 00 00 00: jne 0x585d8c5b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 45 FC: movsx eax, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BF 4D F8: movsx ecx, word ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xf8
        add eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 220c8h]
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BF 55 F8: movsx edx, word ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xf8
        sub ecx, edx
        push ecx
        ; Exact mapped bytes E8 30 84 27 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        cmp eax, 708h
        ; Exact mapped bytes 7E 19: jle 0x585d8c00
        __asm _emit 0x7e
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 0ch]
        add eax, 708h
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 20h]
        add eax, 0e10h
        sub eax, dword ptr [ebp - 0ch]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 24h]
        add eax, 0e10h
        sub eax, dword ptr [ebp - 0ch]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 28h], edx
        mov edx, dword ptr [ebp - 28h]
        sub edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7E 0D: jle 0x585d8c48
        __asm _emit 0x7e
        __asm _emit 0x0d
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B 76 EC FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x76
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 11: jmp 0x585d8c59
        __asm _emit 0xeb
        __asm _emit 0x11
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 0B: jge 0x585d8c59
        __asm _emit 0x7d
        __asm _emit 0x0b
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 76 EC FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x76
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4F: jmp 0x585d8caa
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, 0e10h
        sub ecx, dword ptr [eax + 220c8h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 708h
        ; Exact mapped bytes 7D 0D: jge 0x585d8c9f
        __asm _emit 0x7d
        __asm _emit 0x0d
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 24 76 EC FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x76
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0B: jmp 0x585d8caa
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 17 76 EC FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x76
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3E: jmp 0x585d8cea
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DC 33 EB FF: call 0x5848c090
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x33
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x585d8cc6
        __asm _emit 0x74
        __asm _emit 0x0e
        push 40000000h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0B 38 F4 FF: call 0x5851c4d0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x38
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 41 86 EB FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x86
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        cmp eax, 3
        ; Exact mapped bytes 7D 13: jge 0x585d8cea
        __asm _emit 0x7d
        __asm _emit 0x13
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EF 37 F4 FF: call 0x5851c4d0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x37
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 07 86 EB FF: call 0x584912f0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x86
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
