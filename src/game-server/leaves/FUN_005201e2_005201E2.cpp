// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005201E2 .. +0x85D bytes.
extern "C" __declspec(naked) void FUN_005201e2_005201E2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0fch
        mov dword ptr [ebp - 0d8h], ecx
        push 173h
        push 5cc9cch
        mov eax, dword ptr [ebp - 0d8h]
        push eax
        ; Exact mapped bytes E8 59 AF FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xaf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 0ach]
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 7A 56 FF FF: call 0x51589b
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], edx
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 FE 53 01 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0d8h]
        add ecx, 94h
        ; Exact mapped bytes E8 41 5D 01 00: call 0x535f86
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x52026e
        __asm _emit 0x75
        __asm _emit 0x25
        lea eax, [ebp - 0b4h]
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        add ecx, 94h
        ; Exact mapped bytes E8 06 5C 01 00: call 0x535e67
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 3C: jmp 0x5202aa
        __asm _emit 0xeb
        __asm _emit 0x3c
        lea ecx, [ebp - 64h]
        ; Exact mapped bytes E8 DB 5A 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 C1 48 FD FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x48
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        lea eax, [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 6B BE 01 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 0bch]
        push ecx
        lea ecx, [ebp - 64h]
        ; Exact mapped bytes E8 C8 5B 01 00: call 0x535e67
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 0d8h]
        cmp dword ptr [ecx + 90h], 0
        ; Exact mapped bytes 74 0C: je 0x5202c5
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes EB 1B: jmp 0x5202e0
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 0d8h]
        add ecx, 7ch
        ; Exact mapped bytes E8 0E 23 01 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 94 25 5E 00: call dword ptr [0x5e2594]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0dch], eax
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 54h], edx
        ; Exact mapped bytes A1 AC E8 5D 00: mov eax, dword ptr [0x5de8ac]
        __asm _emit 0xa1
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg eax
        push eax
        ; Exact mapped bytes 8B 0D A8 E8 5D 00: mov ecx, dword ptr [0x5de8a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg ecx
        push ecx
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 67 56 01 00: call 0x535969
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x520322
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        mov ecx, dword ptr [ebp - 0d8h]
        add ecx, 7ch
        ; Exact mapped bytes E8 B1 22 01 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 0F 8D 53 06 00 00: jge 0x52098c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x53
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 B2 09 00 00: call 0x520cfa
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 0d8h]
        add ecx, 7ch
        ; Exact mapped bytes E8 07 24 01 00: call 0x532764
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 70h], edx
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 0F 84 23 05 00 00: je 0x52088f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 F5 04 00 00: je 0x520877
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 94h], 0
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x5203b7
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 6ch]
        mov eax, dword ptr [edx + 64h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5203b7
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 94h]
        or ecx, 6
        mov dword ptr [ebp - 94h], ecx
        ; Exact mapped bytes EB 2F: jmp 0x5203e6
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 6ch]
        mov eax, dword ptr [edx + 64h]
        and eax, 0a000h
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5203d7
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 94h]
        or ecx, 0ah
        mov dword ptr [ebp - 94h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x5203e6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 94h]
        or edx, 10h
        mov dword ptr [ebp - 94h], edx
        mov eax, dword ptr [ebp - 94h]
        push eax
        push -1
        lea ecx, [ebp - 0c4h]
        push ecx
        mov edx, dword ptr [ebp - 6ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 9ch], ecx
        mov dword ptr [ebp - 98h], edx
        mov eax, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 0cch], eax
        mov ecx, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 0c8h], ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        mov eax, dword ptr [ebp - 0cch]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0d4h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0d0h], edx
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        push ecx
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 68 59 01 00: call 0x535dce
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 E3 58 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        lea edx, [ebp - 80h]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 35 BC 01 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 E4 24 FE FF: call 0x50296d
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 84 F5 01 00 00: je 0x520688
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 80h]
        cmp ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes 7E 23: jle 0x5204c1
        __asm _emit 0x7e
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 0d8h]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 75 17: jne 0x5204c1
        __asm _emit 0x75
        __asm _emit 0x17
        push 0
        mov eax, dword ptr [ebp - 80h]
        sub eax, dword ptr [ebp - 90h]
        push eax
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 59 5C 01 00: call 0x53611a
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        cmp ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7E 71: jle 0x52053d
        __asm _emit 0x7e
        __asm _emit 0x71
        mov edx, dword ptr [ebp - 0d8h]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 75 65: jne 0x52053d
        __asm _emit 0x75
        __asm _emit 0x65
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 57 59 01 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 2B 05 A8 E8 5D 00: sub eax, dword ptr [0x5de8a8]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 0a0h], eax
        mov eax, dword ptr [ebp - 24h]
        sub eax, dword ptr [ebp - 0a0h]
        cmp eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes 7E 11: jle 0x52050e
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 24h]
        sub ecx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 0e0h], ecx
        ; Exact mapped bytes EB 09: jmp 0x520517
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0e0h], edx
        mov eax, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 0a0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0a0h]
        sub ecx, dword ptr [ebp - 90h]
        push ecx
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 DD 5B 01 00: call 0x53611a
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 25: je 0x520568
        __asm _emit 0x74
        __asm _emit 0x25
        mov dword ptr [ebp - 2ch], 0
        push 0
        mov edx, dword ptr [ebp - 90h]
        ; Exact mapped bytes 03 15 A8 E8 5D 00: add edx, dword ptr [0x5de8a8]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg edx
        push edx
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 B4 5B 01 00: call 0x53611a
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 5C: jmp 0x5205c4
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 2B 05 A8 E8 5D 00: sub eax, dword ptr [0x5de8a8]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp dword ptr [ebp - 90h], eax
        ; Exact mapped bytes 7C 4B: jl 0x5205c4
        __asm _emit 0x7c
        __asm _emit 0x4b
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 7E 45: jle 0x5205c4
        __asm _emit 0x7e
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 0d8h]
        add ecx, 7ch
        ; Exact mapped bytes E8 D0 21 01 00: call 0x532764
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 2B: je 0x5205c4
        __asm _emit 0x74
        __asm _emit 0x2b
        push 1
        push 0
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        add ecx, 7ch
        ; Exact mapped bytes E8 E4 49 FC FF: call 0x4e4f93
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x49
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], 0
        mov dword ptr [ebp - 70h], 0
        mov dword ptr [ebp - 2ch], 1
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 0F 85 B5 00 00 00: jne 0x520683
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 80h]
        push eax
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 0E 5C 01 00: call 0x5361eb
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 62: je 0x520643
        __asm _emit 0x74
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 0d8h]
        cmp dword ptr [ecx + 90h], 0
        ; Exact mapped bytes 75 3C: jne 0x52062c
        __asm _emit 0x75
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 6ch]
        mov eax, dword ptr [edx + 64h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 2F: jne 0x52062c
        __asm _emit 0x75
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx + 74h]
        add edx, 94h
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [edx + 0ch], ecx
        lea edx, [ebp - 90h]
        push edx
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        lea edx, [ebp - 54h]
        push edx
        ; Exact mapped bytes E8 BF 50 FD FF: call 0x4f5702
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 90h]
        add eax, dword ptr [ebp - 9ch]
        ; Exact mapped bytes 2B 05 A8 E8 5D 00: sub eax, dword ptr [0x5de8a8]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes 7E 0B: jle 0x52066e
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0e4h], edx
        ; Exact mapped bytes EB 0C: jmp 0x52067a
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 0e4h], eax
        mov ecx, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes E9 EF 01 00 00: jmp 0x520877
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 7ch]
        cmp edx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes 7E 23: jle 0x5206b6
        __asm _emit 0x7e
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 0d8h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 75 17: jne 0x5206b6
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 7ch]
        sub ecx, dword ptr [ebp - 8ch]
        push ecx
        push 0
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 64 5A 01 00: call 0x53611a
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 84h]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 7E 71: jle 0x520732
        __asm _emit 0x7e
        __asm _emit 0x71
        mov eax, dword ptr [ebp - 0d8h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 75 65: jne 0x520732
        __asm _emit 0x75
        __asm _emit 0x65
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 78 57 01 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 2B 05 AC E8 5D 00: sub eax, dword ptr [0x5de8ac]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, dword ptr [ebp - 0a4h]
        cmp ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 7E 11: jle 0x520703
        __asm _emit 0x7e
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 20h]
        sub edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 0e8h], edx
        ; Exact mapped bytes EB 09: jmp 0x52070c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0e8h], eax
        mov ecx, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 0a4h], ecx
        mov edx, dword ptr [ebp - 0a4h]
        sub edx, dword ptr [ebp - 8ch]
        push edx
        push 0
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 E8 59 01 00: call 0x53611a
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 25: je 0x52075d
        __asm _emit 0x74
        __asm _emit 0x25
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 8ch]
        ; Exact mapped bytes 03 05 AC E8 5D 00: add eax, dword ptr [0x5de8ac]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg eax
        push eax
        push 0
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 BF 59 01 00: call 0x53611a
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 5C: jmp 0x5207b9
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 2B 0D AC E8 5D 00: sub ecx, dword ptr [0x5de8ac]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp dword ptr [ebp - 8ch], ecx
        ; Exact mapped bytes 7C 4B: jl 0x5207b9
        __asm _emit 0x7c
        __asm _emit 0x4b
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 7E 45: jle 0x5207b9
        __asm _emit 0x7e
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 28h]
        sub edx, 1
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        add ecx, 7ch
        ; Exact mapped bytes E8 DB 1F 01 00: call 0x532764
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 2B: je 0x5207b9
        __asm _emit 0x74
        __asm _emit 0x2b
        push 1
        push 0
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        add ecx, 7ch
        ; Exact mapped bytes E8 EF 47 FC FF: call 0x4e4f93
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x47
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], 0
        mov dword ptr [ebp - 70h], 0
        mov dword ptr [ebp - 2ch], 1
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 0F 85 B4 00 00 00: jne 0x520877
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 80h]
        push ecx
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 19 5A 01 00: call 0x5361eb
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 61: je 0x520837
        __asm _emit 0x74
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 0d8h]
        cmp dword ptr [edx + 90h], 0
        ; Exact mapped bytes 75 3B: jne 0x520820
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 75 2E: jne 0x520820
        __asm _emit 0x75
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 6ch]
        mov eax, dword ptr [edx + 74h]
        add eax, 94h
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [eax + 0ch], edx
        lea eax, [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        lea eax, [ebp - 54h]
        push eax
        ; Exact mapped bytes E8 CB 4E FD FF: call 0x4f5702
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x4e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8ch]
        add ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes 2B 0D AC E8 5D 00: sub ecx, dword ptr [0x5de8ac]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes 7E 0B: jle 0x520862
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0C: jmp 0x52086e
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 0ech], ecx
        mov edx, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 12: jne 0x52088f
        __asm _emit 0x75
        __asm _emit 0x12
        lea eax, [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 92 D4 00 00 00: call dword ptr [edx + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 0F 85 EE 00 00 00: jne 0x520987
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 0F 85 E4 00 00 00: jne 0x520987
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x520987
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 68: je 0x52091b
        __asm _emit 0x74
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 2B 05 AC E8 5D 00: sub eax, dword ptr [0x5de8ac]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        add ecx, eax
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 7E 0B: jle 0x5208d7
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 09: jmp 0x5208e0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0f0h], ecx
        mov edx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 7E 0B: jle 0x5208fc
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0f4h], ecx
        ; Exact mapped bytes EB 09: jmp 0x520905
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0f4h], edx
        mov eax, dword ptr [ebp - 0f4h]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 8B 0D A8 E8 5D 00: mov ecx, dword ptr [0x5de8a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg ecx
        mov dword ptr [ebp - 34h], ecx
        ; Exact mapped bytes EB 65: jmp 0x520980
        __asm _emit 0xeb
        __asm _emit 0x65
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 2B 15 A8 E8 5D 00: sub edx, dword ptr [0x5de8a8]
        __asm _emit 0x2b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        add eax, edx
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 7E 0B: jle 0x52093f
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0f8h], edx
        ; Exact mapped bytes EB 09: jmp 0x520948
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0f8h], eax
        mov ecx, dword ptr [ebp - 0f8h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 7E 0B: jle 0x520964
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 09: jmp 0x52096d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0fch], ecx
        mov edx, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes A1 AC E8 5D 00: mov eax, dword ptr [0x5de8ac]
        __asm _emit 0xa1
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg eax
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes E9 8D F9 FF FF: jmp 0x520319
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0d8h]
        cmp dword ptr [ecx + 90h], 0
        ; Exact mapped bytes 75 26: jne 0x5209c1
        __asm _emit 0x75
        __asm _emit 0x26
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 0E: je 0x5209af
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 54h]
        push edx
        ; Exact mapped bytes FF 15 98 25 5E 00: call dword ptr [0x5e2598]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x5209c1
        __asm _emit 0x75
        __asm _emit 0x12
        push 5cc9f8h
        push 5cca30h
        ; Exact mapped bytes E8 57 F2 FA FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf2
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 88 53 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7A 56 01 00: call 0x53604b
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 71 67 FF FF: call 0x517155
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 06: je 0x5209f0
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 16: jne 0x520a06
        __asm _emit 0x75
        __asm _emit 0x16
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 10: je 0x520a06
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 8]
        neg edx
        add edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 18h]
        add eax, edx
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 06: je 0x520a12
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 16: je 0x520a28
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 10: je 0x520a28
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        neg ecx
        add ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 14h]
        add edx, ecx
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
