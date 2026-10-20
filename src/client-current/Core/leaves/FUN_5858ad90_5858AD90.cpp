// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858AD90 .. +0x2F5 bytes.
extern "C" __declspec(naked) void FUN_5858ad90_5858AD90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
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
        ; Exact mapped bytes 0F 84 D0 02 00 00: je 0x5858b07f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x5858add0
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5858add0
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 51: je 0x5858ae30
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x5858adf3
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB E6: jmp 0x5858add9
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 15 A9 F0 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa9
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 7C 02: jl 0x5858ae04
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 2C: jmp 0x5858ae30
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 47 AA F0 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xaa
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB A9: jmp 0x5858add9
        __asm _emit 0xeb
        __asm _emit 0xa9
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 12: je 0x5858ae48
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 07: ja 0x5858ae48
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 48: je 0x5858ae96
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 40: je 0x5858ae94
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x5858ae68
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB E6: jmp 0x5858ae4e
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E3 A9 F0 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xa9
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB BA: jmp 0x5858ae4e
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes EB B2: jmp 0x5858ae48
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 2b8h]
        ; Exact mapped bytes E8 EC A9 F0 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xa9
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 CF 01 00 00: jne 0x5858b07f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ch
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 9C EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x9c
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0C A9 F0 FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xa9
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        push 0ch
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 9B EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x9b
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 15 A9 F0 FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa9
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 28h], 8
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1ech]
        sub eax, 20h
        ; Exact mapped bytes 79 09: jns 0x5858af03
        __asm _emit 0x79
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5858af12
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ech]
        sub edx, 20h
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ech]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 09: jmp 0x5858af32
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8C 41 01 00 00: jl 0x5858b07f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        imul eax, dword ptr [ebp - 28h]
        mov ecx, 100h
        sub ecx, eax
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        and edx, 8000001fh
        ; Exact mapped bytes 79 05: jns 0x5858af68
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0ffffffe0h
        inc edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*8 + 0d4h]
        add ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ebp + 10h]
        add ecx, dword ptr [edx]
        mov dword ptr [ebp - 40h], ecx
        mov eax, dword ptr [ebp - 0ch]
        and eax, 8000001fh
        ; Exact mapped bytes 79 05: jns 0x5858af8c
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0ffffffe0h
        inc eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*8 + 0d8h]
        add edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp + 10h]
        add edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 3ch], edx
        push 0ch
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 9B EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x9b
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push 102h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 9F 17 F1 FF: call 0x5849c770
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x17
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 3ch]
        sub edx, 1
        mov dword ptr [ebp - 3ch], edx
        push 0ch
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 9A EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 102h
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 67 17 F1 FF: call 0x5849c770
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x17
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3ch]
        sub ecx, 1
        mov dword ptr [ebp - 3ch], ecx
        push 0ch
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 9A EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x9a
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 102h
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 2F 17 F1 FF: call 0x5849c770
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x17
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 3ch]
        sub eax, 1
        mov dword ptr [ebp - 3ch], eax
        push 0ch
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 9A EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x9a
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        push 102h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 F7 16 F1 FF: call 0x5849c770
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x16
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 AA FE FF FF: jmp 0x5858af29
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
