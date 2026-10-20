// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E3930 .. +0x2E8 bytes.
extern "C" __declspec(naked) void FUN_585e3930_585E3930() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 C1 02 00 00: je 0x585e3c11
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x585e3971
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x585e3971
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 51: je 0x585e39d1
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x585e3994
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x585e397a
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 74 1D EB FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x1d
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 7C 02: jl 0x585e39a5
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 2C: jmp 0x585e39d1
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A6 1E EB FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x1e
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB A9: jmp 0x585e397a
        __asm _emit 0xeb
        __asm _emit 0xa9
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x585e39e9
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 07: ja 0x585e39e9
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 48: je 0x585e3a37
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 40: je 0x585e3a35
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x585e3a09
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x585e39ef
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 42 1E EB FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x1e
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB BA: jmp 0x585e39ef
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes EB B2: jmp 0x585e39e9
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2c0h], 0
        ; Exact mapped bytes 0F 84 CA 01 00 00: je 0x585e3c11
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B1 74 F8 FF: call 0x5856af00
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 44h]
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        test eax, eax
        ; Exact mapped bytes 0F 85 48 01 00 00: jne 0x585e3bb8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 1C 22 96 58: mov eax, dword ptr [0x5896221c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 84 40 89 58: call dword ptr [0x58894084]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 298h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 84 40 89 58: call dword ptr [0x58894084]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 8E 1C EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 2d8h]
        sub esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 55 1F EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x1f
        __asm _emit 0xeb
        __asm _emit 0xff
        imul eax, esi
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 E9 0E EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 2d4h]
        sub esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 20 1F EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x1f
        __asm _emit 0xeb
        __asm _emit 0xff
        imul eax, esi
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 04 1F EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 14 1C EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x1c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2d0h]
        sub edx, eax
        imul edx, esi
        mov eax, edx
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 CB 1E EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x1e
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 6B 0E EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x0e
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2cch]
        sub edx, eax
        imul edx, esi
        mov eax, edx
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        ; Exact mapped bytes FF 15 CC 40 89 58: call dword ptr [0x588940cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 73 F8 FF: call 0x5856af00
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x73
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes FF 55 C4: call dword ptr [ebp - 0x3c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc4
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 278h]
        cmp eax, 1
        ; Exact mapped bytes 75 4A: jne 0x585e3c11
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 2d4h]
        sub eax, dword ptr [edx + 2cch]
        cmp eax, 5
        ; Exact mapped bytes 7F 26: jg 0x585e3c04
        __asm _emit 0x7f
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 2d8h]
        sub eax, dword ptr [edx + 2d0h]
        cmp eax, 5
        ; Exact mapped bytes 7F 0F: jg 0x585e3c04
        __asm _emit 0x7f
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 21e44h], 0
        ; Exact mapped bytes EB 0D: jmp 0x585e3c11
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 21e44h], 1
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
