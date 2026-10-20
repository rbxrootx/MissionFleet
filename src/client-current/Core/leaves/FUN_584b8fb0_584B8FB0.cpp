// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B8FB0 .. +0x2AC bytes.
extern "C" __declspec(naked) void FUN_584b8fb0_584B8FB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 90h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 A5 B9 FE FF: call 0x584a4970
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 6ch
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9F F0 FC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584b8ff3
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 6ch]
        push edx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 8E EA FC FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xea
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 6ch
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 70h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 88 F1 FC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 BF E9 FC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 2A: je 0x584b9042
        __asm _emit 0x74
        __asm _emit 0x2a
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 20 EA FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xea
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 59 B9 FC FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xb9
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x584b9040
        __asm _emit 0x74
        __asm _emit 0x15
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 0D EA FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xea
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 02: jmp 0x584b9042
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB A2: jmp 0x584b8fe4
        __asm _emit 0xeb
        __asm _emit 0xa2
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 D5 00 00 00: jne 0x584b9123
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x584b9123
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x584b9123
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F4 96 16 00: call 0x58622760
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x96
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 6ch
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        lea eax, [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 24 0F 00 00: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 6ch
        mov dword ptr [ebp - 30h], ecx
        lea edx, [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 7E F1 FC FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 6ch
        mov dword ptr [ebp - 34h], eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 C8 EF FC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xef
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584b90ca
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 78h]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B7 E9 FC FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 6ch
        mov dword ptr [ebp - 38h], eax
        lea ecx, [ebp - 7ch]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 B1 F0 FC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E8 E8 FC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 2F: je 0x584b911e
        __asm _emit 0x74
        __asm _emit 0x2f
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 49 E9 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 82 B8 FC FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x584b911c
        __asm _emit 0x74
        __asm _emit 0x1a
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 36 E9 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 3ch], eax
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 47 96 16 00: call 0x58622760
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x96
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 02: jmp 0x584b911e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 9D: jmp 0x584b90bb
        __asm _emit 0xeb
        __asm _emit 0x9d
        ; Exact mapped bytes E9 33 01 00 00: jmp 0x584b9256
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 6ch
        mov dword ptr [ebp - 40h], ecx
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 41 EF FC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xef
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 6ch
        mov dword ptr [ebp - 44h], eax
        lea ecx, [ebp - 80h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 3B F0 FC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 72 E8 FC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 ED 00 00 00: je 0x584b9256
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 CF E8 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 D5 00 00 00: jne 0x584b9251
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BC E8 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 44: je 0x584b91d3
        __asm _emit 0x74
        __asm _emit 0x44
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C7 95 16 00: call 0x58622760
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x95
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        add edx, 6ch
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        lea edx, [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 F4 0D 00 00: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 6ch
        mov dword ptr [ebp - 50h], eax
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 4E F0 FC FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        add edx, 6ch
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        lea edx, [ebp - 88h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 BB 0D 00 00: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 6ch
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 6ch
        mov dword ptr [ebp - 5ch], ecx
        lea edx, [ebp - 8ch]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 69 EE FC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 60h], eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 60h]
        push edx
        lea eax, [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 7D 0E 00 00: call 0x584ba0b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 6ch
        ; Exact mapped bytes E8 51 0E 00 00: call 0x584ba090
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 68h], ecx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 12 95 16 00: call 0x58622760
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x95
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 05: jmp 0x584b9256
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 EA FE FF FF: jmp 0x584b9140
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
