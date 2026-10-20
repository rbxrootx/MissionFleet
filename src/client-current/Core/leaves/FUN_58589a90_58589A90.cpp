// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58589A90 .. +0x3D5 bytes.
extern "C" __declspec(naked) void FUN_58589a90_58589A90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push esi
        push edi
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
        ; Exact mapped bytes 0F 84 AC 03 00 00: je 0x58589e5d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x58589ad2
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x58589ad2
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 51: je 0x58589b32
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x58589af5
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x58589adb
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 13 BC F0 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xbc
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 7C 02: jl 0x58589b06
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 2C: jmp 0x58589b32
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
        ; Exact mapped bytes E8 45 BD F0 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xbd
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB A9: jmp 0x58589adb
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0f8h], 0
        ; Exact mapped bytes 0F 84 B5 02 00 00: je 0x58589df7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0fch], 0
        ; Exact mapped bytes 0F 84 A5 02 00 00: je 0x58589df7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 5ch], 0
        ; Exact mapped bytes 75 22: jne 0x58589b7d
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f8h]
        ; Exact mapped bytes E8 77 2A F7 FF: call 0x584fc5e0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x2a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        imul eax, dword ptr [ecx + 0e8h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x58589b84
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 0ch]
        mov edx, dword ptr [ebp + 10h]
        add eax, dword ptr [edx]
        sub eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 10h]
        mov eax, dword ptr [ebp + 10h]
        add ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58589bc2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + 0e8h]
        ; Exact mapped bytes 0F 8D 9C 00 00 00: jge 0x58589c70
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 68h], 0ah
        ; Exact mapped bytes 0F 8D 86 00 00 00: jge 0x58589c6b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        sub ecx, 1
        cmp dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 7D 78: jge 0x58589c6b
        __asm _emit 0x7d
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        sub eax, dword ptr [ebp - 10h]
        sub eax, 1
        cdq
        mov ecx, 3
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 75 60: jne 0x58589c6b
        __asm _emit 0x75
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0fch]
        ; Exact mapped bytes E8 57 FE FF FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0fch]
        ; Exact mapped bytes E8 A7 BB F0 FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xbb
        __asm _emit 0xf0
        __asm _emit 0xff
        sub esi, eax
        mov eax, esi
        cdq
        mov ecx, 6
        idiv ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0fch]
        ; Exact mapped bytes E8 2B FE FF FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0fch]
        ; Exact mapped bytes E8 7B BB F0 FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xbb
        __asm _emit 0xf0
        __asm _emit 0xff
        sub edi, eax
        mov eax, edi
        cdq
        mov ecx, 0ch
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 2ch]
        sub edx, esi
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes E9 49 FF FF FF: jmp 0x58589bb9
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58589c82
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ecx + 0e8h]
        ; Exact mapped bytes 0F 8D 63 01 00 00: jge 0x58589df7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 68h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A3 2A F1 FF: call 0x5849c770
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x2a
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 68h], 0ah
        ; Exact mapped bytes 0F 8D FF 00 00 00: jge 0x58589dde
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        sub eax, 1
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 0F 8D ED 00 00 00: jge 0x58589dde
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 5ch]
        sub eax, dword ptr [ebp - 0ch]
        sub eax, 1
        cdq
        mov ecx, 3
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 D1 00 00 00: jne 0x58589dde
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0fch]
        ; Exact mapped bytes E8 55 FD FF FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0fch]
        ; Exact mapped bytes E8 A5 BA F0 FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xba
        __asm _emit 0xf0
        __asm _emit 0xff
        sub esi, eax
        mov eax, esi
        cdq
        mov ecx, 6
        idiv ecx
        add eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 34h], edx
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0f8h]
        ; Exact mapped bytes E8 69 28 F7 FF: call 0x584fc5c0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x28
        __asm _emit 0xf7
        __asm _emit 0xff
        cdq
        sub eax, edx
        sar eax, 1
        add eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 28h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        sub esp, 10h
        mov eax, esp
        mov ecx, dword ptr [edx]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 82 0A 23 00: call 0x587ba830
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x0a
        __asm _emit 0x23
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0fch]
        ; Exact mapped bytes E8 B4 FC FF FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0fch]
        ; Exact mapped bytes E8 04 BA F0 FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xba
        __asm _emit 0xf0
        __asm _emit 0xff
        sub esi, eax
        mov eax, esi
        cdq
        mov ecx, 0ch
        idiv ecx
        add eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0f8h]
        ; Exact mapped bytes E8 F4 27 F7 FF: call 0x584fc5e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x27
        __asm _emit 0xf7
        __asm _emit 0xff
        add eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes E9 82 FE FF FF: jmp 0x58589c79
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x58589e0f
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 07: ja 0x58589e0f
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 48: je 0x58589e5d
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 40: je 0x58589e5b
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x58589e2f
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x58589e15
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1C BA F0 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB BA: jmp 0x58589e15
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes EB B2: jmp 0x58589e0f
        __asm _emit 0xeb
        __asm _emit 0xb2
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
