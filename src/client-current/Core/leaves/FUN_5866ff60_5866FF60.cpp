// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5866FF60 .. +0x2CA bytes.
extern "C" __declspec(naked) void FUN_5866ff60_5866FF60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 A5 02 00 00: je 0x58670228
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0d4h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 E9 00 00 00: jne 0x5867007e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 64h]
        ; Exact mapped bytes E8 20 6A E1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x6a
        __asm _emit 0xe1
        __asm _emit 0xff
        cmp eax, 336h
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x5867004b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        ; Exact mapped bytes E8 0A 6A E1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x6a
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, 336h
        sub ecx, eax
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], -8
        ; Exact mapped bytes 7E 58: jle 0x5867001e
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 52: jge 0x5867001e
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 8], -4
        ; Exact mapped bytes 7E 39: jle 0x5867000b
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 33: jge 0x5867000b
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 09: jge 0x5866ffe7
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x58670003
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 09: jle 0x5866fff6
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 07: jmp 0x5866fffd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x58670016
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x5867002d
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 F8 51 14 00: call 0x587b5240
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x51
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2E: jmp 0x58670079
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 0d4h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 38h], edx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 78 5D E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C0 01 00 00: call 0x58670230
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 98 05 00 00: call 0x58670610
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 20 01 00 00: jmp 0x5867019e
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0d4h]
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 0D 01 00 00: jne 0x5867019e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 64h]
        ; Exact mapped bytes E8 24 69 E1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x69
        __asm _emit 0xe1
        __asm _emit 0xff
        cmp eax, 406h
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x58670147
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        ; Exact mapped bytes E8 0E 69 E1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x69
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, 406h
        sub ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], -8
        ; Exact mapped bytes 7E 58: jle 0x5867011a
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 52: jge 0x5867011a
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 0ch], -4
        ; Exact mapped bytes 7E 39: jle 0x58670107
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 33: jge 0x58670107
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 09: jge 0x586700e3
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x586700ff
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 09: jle 0x586700f2
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes EB 07: jmp 0x586700f9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x58670112
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x58670129
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 FC 50 14 00: call 0x587b5240
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x50
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 57: jmp 0x5867019e
        __asm _emit 0xeb
        __asm _emit 0x57
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 0d4h], 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 40h], edx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 7C 5C E1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x5c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0dch], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 44h], edx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 B9 F6 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf6
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 48h], ecx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 A3 F6 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf6
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x586701bf
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x586701bf
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 5A: je 0x58670228
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x586701e2
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB E6: jmp 0x586701c8
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 26 54 E2 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x54
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x58670206
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x58670228
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x58670226
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 02 54 E2 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x54
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB A0: jmp 0x586701c8
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
