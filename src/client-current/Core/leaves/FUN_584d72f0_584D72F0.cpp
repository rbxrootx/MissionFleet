// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D72F0 .. +0x479 bytes.
extern "C" __declspec(naked) void FUN_584d72f0_584D72F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 7ch], 1
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x584d7389
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 6
        ; Exact mapped bytes 74 1B: je 0x584d732f
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 0ah
        ; Exact mapped bytes 74 0F: je 0x584d732f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 4a3h
        ; Exact mapped bytes 75 0C: jne 0x584d733b
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 CC 20 96 58 00 00 00 00: mov dword ptr [0x589620cc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4E: jmp 0x584d7389
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 4a4h
        ; Exact mapped bytes 75 24: jne 0x584d736e
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B FE FF FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1E 17 00 00: call 0x584d8a80
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 CC 20 96 58 00 00 00 00: mov dword ptr [0x589620cc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x584d7389
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 1b58h
        ; Exact mapped bytes 75 0C: jne 0x584d7389
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 04 06 96 58: mov ecx, dword ptr [0x58960604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 0E 05 00: call 0x585281c0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x0e
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 0F 84 13 03 00 00: je 0x584d76a9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 2
        ; Exact mapped bytes 75 11: jne 0x584d73b3
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 11 11 00: call 0x585e8510
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x11
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F1 02 00 00: jmp 0x584d76a4
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 4
        ; Exact mapped bytes 75 05: jne 0x584d73c4
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 E0 02 00 00: jmp 0x584d76a4
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 5
        ; Exact mapped bytes 75 05: jne 0x584d73d5
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 CF 02 00 00: jmp 0x584d76a4
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 8
        ; Exact mapped bytes 75 05: jne 0x584d73e6
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 BE 02 00 00: jmp 0x584d76a4
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 12h
        ; Exact mapped bytes 75 1F: jne 0x584d7411
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 9ch]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 93 02 00 00: jmp 0x584d76a4
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 64h
        ; Exact mapped bytes 75 13: jne 0x584d7430
        __asm _emit 0x75
        __asm _emit 0x13
        push 0
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 78 0A 00: call 0x5857ed00
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x78
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 74 02 00 00: jmp 0x584d76a4
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 12eh
        ; Exact mapped bytes 75 11: jne 0x584d7450
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 15 00 00: call 0x584d8970
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 54 02 00 00: jmp 0x584d76a4
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 131h
        ; Exact mapped bytes 75 1F: jne 0x584d747e
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 FB FF FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DF FB FF FF: call 0x584d7050
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 08 99 15 00: call 0x58630d80
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x99
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 26 02 00 00: jmp 0x584d76a4
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 133h
        ; Exact mapped bytes 75 20: jne 0x584d74ad
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 FC FF FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F1 FB FF FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ach], eax
        ; Exact mapped bytes E9 F7 01 00 00: jmp 0x584d76a4
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 15eh
        ; Exact mapped bytes 75 39: jne 0x584d74f5
        __asm _emit 0x75
        __asm _emit 0x39
        push 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        push ecx
        push 0
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB 6E 0A 00: call 0x5857e3d0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x6e
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 14h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 47 9B 35 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x9b
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 AF 01 00 00: jmp 0x584d76a4
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 190h
        ; Exact mapped bytes 75 38: jne 0x584d753c
        __asm _emit 0x75
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 9ch], 0
        ; Exact mapped bytes 74 27: je 0x584d7537
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 0D 9B 35 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x9b
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 9ch], 0
        ; Exact mapped bytes E9 68 01 00 00: jmp 0x584d76a4
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 19bh
        ; Exact mapped bytes 75 1F: jne 0x584d756a
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA FB FF FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F3 FB FF FF: call 0x584d7150
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BC 5E 1C 00: call 0x5869d420
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x5e
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 3A 01 00 00: jmp 0x584d76a4
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 1f4h
        ; Exact mapped bytes 75 76: jne 0x584d75ef
        __asm _emit 0x75
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 9ch], 0
        ; Exact mapped bytes 74 32: je 0x584d75b7
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 20h], 15eh
        ; Exact mapped bytes 75 1A: jne 0x584d75b7
        __asm _emit 0x75
        __asm _emit 0x1a
        push 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        push eax
        push 0
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 6E 0A 00: call 0x5857e3d0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x6e
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 9ch], 0
        ; Exact mapped bytes 74 27: je 0x584d75ea
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 5A 9A 35 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x9a
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 9ch], 0
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x584d76a4
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 258h
        ; Exact mapped bytes 75 1E: jne 0x584d761c
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 FB FF FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 CA E7 FA FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xe7
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x584d76a4
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 4a7h
        ; Exact mapped bytes 75 23: jne 0x584d764e
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes 8B 15 58 06 96 58: mov edx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 28h], ecx
        push 0
        push 0f233h
        push 0
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        nop
        ; Exact mapped bytes EB 56: jmp 0x584d76a4
        __asm _emit 0xeb
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 4b0h
        ; Exact mapped bytes 75 47: jne 0x584d76a4
        __asm _emit 0x75
        __asm _emit 0x47
        push 1ch
        push 0
        lea eax, [ebp - 5ch]
        push eax
        ; Exact mapped bytes E8 A6 57 37 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x57
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 58h], 20h
        ; Exact mapped bytes 8B 0D 04 06 96 58: mov ecx, dword ptr [0x58960604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        add ecx, 60h
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes 8B 15 04 06 96 58: mov edx, dword ptr [0x58960604]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 30h], ecx
        sub esp, 1ch
        mov ecx, 7
        lea esi, [ebp - 5ch]
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 55 D0: call dword ptr [ebp - 0x30]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x584d7763
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 12h
        ; Exact mapped bytes 75 38: jne 0x584d76ed
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 D3 FA FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xd3
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 34h], edx
        push 0
        push 64h
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 C8: call dword ptr [ebp - 0x38]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc8
        nop
        ; Exact mapped bytes EB 76: jmp 0x584d7763
        __asm _emit 0xeb
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 14h
        ; Exact mapped bytes 74 0C: je 0x584d7705
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 28h
        ; Exact mapped bytes 75 5E: jne 0x584d7763
        __asm _emit 0x75
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 1D FE FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 49 1B FE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 44: jne 0x584d7763
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 D3 FA FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd3
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 40h], ecx
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 1D FE FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 0
        push 64h
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 C0: call dword ptr [ebp - 0x40]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a8h], 1
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
