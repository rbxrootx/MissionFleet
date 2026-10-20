// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5872C8D0 .. +0x836 bytes.
extern "C" __declspec(naked) void FUN_5872c8d0_5872C8D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 88h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes 75 05: jne 0x5872c8ec
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 14 08 00 00: jmp 0x5872d100
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [edx + 58h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 54h], eax
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 83 3D 10 06 96 58 00: cmp dword ptr [0x58960610], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x5872c91a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 44: jmp 0x5872c95e
        __asm _emit 0xeb
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 10 06 96 58: cmp ecx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 09: je 0x5872c931
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 2D: jmp 0x5872c95e
        __asm _emit 0xeb
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 42 E2 FF: call 0x58550c30
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x42
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 74 1A: je 0x5872c95e
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 61 EA FF: call 0x585d2a70
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x61
        __asm _emit 0xea
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 74 07: je 0x5872c95e
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 AE 04 00 00: je 0x5872ce16
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], 2
        push 1
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 95 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x95
        __asm _emit 0xd5
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 95 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x95
        __asm _emit 0xd5
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 84 06 96 58: mov ecx, dword ptr [0x58960684]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 47 95 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x95
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 3e8h
        ; Exact mapped bytes 77 40: ja 0x5872c9ec
        __asm _emit 0x77
        __asm _emit 0x40
        cmp dword ptr [ebp - 8], 3e8h
        ; Exact mapped bytes 0F 84 04 01 00 00: je 0x5872cabd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 77 1F: ja 0x5872c9de
        __asm _emit 0x77
        __asm _emit 0x1f
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x5872ca73
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x5872ca98
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 74 75: je 0x5872ca4e
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes E9 53 03 00 00: jmp 0x5872cd31
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 12ch
        ; Exact mapped bytes 74 25: je 0x5872ca0c
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes E9 45 03 00 00: jmp 0x5872cd31
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 3e9h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 0F 87 2F 03 00 00: ja 0x5872cd31
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 95 08 D1 72 58: jmp dword ptr [edx*4 + 0x5872d108]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0xd1
        __asm _emit 0x72
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 94 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x94
        __asm _emit 0xd5
        __asm _emit 0xff
        push 4
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA 80 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x80
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 A2 D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa2
        __asm _emit 0xd5
        __asm _emit 0xff
        push 100h
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 8A 08 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x8a
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E3 02 00 00: jmp 0x5872cd31
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 80 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x80
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 A1 D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xa1
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 BE 02 00 00: jmp 0x5872cd31
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 80 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x80
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE A1 D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xa1
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 99 02 00 00: jmp 0x5872cd31
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B 80 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x80
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A9 A1 D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xa1
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 74 02 00 00: jmp 0x5872cd31
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 80 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x80
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 A1 D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0xd5
        __asm _emit 0xff
        push 100h
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 8A 08 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8a
        __asm _emit 0x08
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D 84 06 96 58: mov ecx, dword ptr [0x58960684]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 93 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x93
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 32 02 00 00: jmp 0x5872cd31
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes 8B 0D C0 06 96 58: mov ecx, dword ptr [0x589606c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 7F D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x7f
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 A1 D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xa1
        __asm _emit 0xd5
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D C0 06 96 58: mov ecx, dword ptr [0x589606c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 7F D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x7f
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 A1 D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa1
        __asm _emit 0xd5
        __asm _emit 0xff
        push 0fffffeffh
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 8A 08 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x8a
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 DE 01 00 00: jmp 0x5872cd31
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes 8B 0D C0 06 96 58: mov ecx, dword ptr [0x589606c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 7F D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x7f
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE A0 D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xa0
        __asm _emit 0xd5
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D C0 06 96 58: mov ecx, dword ptr [0x589606c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 7F D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x7f
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF A0 D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xa0
        __asm _emit 0xd5
        __asm _emit 0xff
        push 0fffffeffh
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F 8A 08 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x8a
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8A 01 00 00: jmp 0x5872cd31
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        ; Exact mapped bytes 8B 0D C0 06 96 58: mov ecx, dword ptr [0x589606c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 7F D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x7f
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        push eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A A0 D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xa0
        __asm _emit 0xd5
        __asm _emit 0xff
        push 3
        ; Exact mapped bytes 8B 0D C0 06 96 58: mov ecx, dword ptr [0x589606c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD 7E D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x7e
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B A0 D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xa0
        __asm _emit 0xd5
        __asm _emit 0xff
        push 0fffffeffh
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 89 08 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x89
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 36 01 00 00: jmp 0x5872cd31
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5
        ; Exact mapped bytes 8B 0D C0 06 96 58: mov ecx, dword ptr [0x589606c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 7E D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x7e
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 A0 D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xa0
        __asm _emit 0xd5
        __asm _emit 0xff
        push 3
        ; Exact mapped bytes 8B 0D C0 06 96 58: mov ecx, dword ptr [0x589606c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A9 7E D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x7e
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        push eax
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 A0 D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xa0
        __asm _emit 0xd5
        __asm _emit 0xff
        push 0fffffeffh
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 89 08 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x89
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E2 00 00 00: jmp 0x5872cd31
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 7
        ; Exact mapped bytes 8B 0D C0 06 96 58: mov ecx, dword ptr [0x589606c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 7E D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x7e
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 9F D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x9f
        __asm _emit 0xd5
        __asm _emit 0xff
        push 6
        ; Exact mapped bytes 8B 0D C0 06 96 58: mov ecx, dword ptr [0x589606c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 7E D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x7e
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 4ch]
        push edx
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 9F D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x9f
        __asm _emit 0xd5
        __asm _emit 0xff
        push 0fffffeffh
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 89 08 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x89
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x5872cd31
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 8
        ; Exact mapped bytes 8B 0D C0 06 96 58: mov ecx, dword ptr [0x589606c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 7E D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x7e
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 50h]
        push eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E 9F D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x9f
        __asm _emit 0xd5
        __asm _emit 0xff
        push 6
        ; Exact mapped bytes 8B 0D C0 06 96 58: mov ecx, dword ptr [0x589606c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 7E D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x7e
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 9F D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x9f
        __asm _emit 0xd5
        __asm _emit 0xff
        push 0fffffeffh
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF 88 08 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3D: jmp 0x5872cd31
        __asm _emit 0xeb
        __asm _emit 0x3d
        push 0
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF 91 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x91
        __asm _emit 0xd5
        __asm _emit 0xff
        push 0ch
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 7D D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x7d
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov edx, dword ptr [ebp - 58h]
        push edx
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 9F D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x9f
        __asm _emit 0xd5
        __asm _emit 0xff
        push 100h
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 88 08 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 54h], 12ch
        ; Exact mapped bytes 74 37: je 0x5872cd83
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 54h], 3f1h
        ; Exact mapped bytes 74 2B: je 0x5872cd83
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 54h], 1
        ; Exact mapped bytes 74 22: je 0x5872cd83
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 54h], 2
        ; Exact mapped bytes 74 19: je 0x5872cd83
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 54h], 0
        ; Exact mapped bytes 74 10: je 0x5872cd83
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 54h], 3e8h
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x5872ce11
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 91 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x91
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 54h], 3e8h
        ; Exact mapped bytes 74 0E: je 0x5872cdab
        __asm _emit 0x74
        __asm _emit 0x0e
        push 1
        ; Exact mapped bytes 8B 0D 84 06 96 58: mov ecx, dword ptr [0x58960684]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 91 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x91
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        push edx
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 7D D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x7d
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 5ch]
        push eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 9E D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x9e
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        push edx
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF 7C D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x7c
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 60h]
        push eax
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D 9E D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x9e
        __asm _emit 0xd5
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 87 08 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x87
        __asm _emit 0x08
        __asm _emit 0x00
        push 0ffh
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 87 08 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x87
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 EA 02 00 00: jmp 0x5872d100
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], 2
        push 1
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 27 D7 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x27
        __asm _emit 0xd7
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 90 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x90
        __asm _emit 0xd5
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes 8B 0D 84 06 96 58: mov ecx, dword ptr [0x58960684]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 99 90 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 12ch
        ; Exact mapped bytes 77 2C: ja 0x5872ce86
        __asm _emit 0x77
        __asm _emit 0x2c
        cmp dword ptr [ebp - 0ch], 12ch
        ; Exact mapped bytes 74 3E: je 0x5872cea1
        __asm _emit 0x74
        __asm _emit 0x3e
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 FF 00 00 00: je 0x5872cf6c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x5872cf25
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 0F 84 C9 00 00 00: je 0x5872cf4a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 45 01 00 00: jmp 0x5872cfcb
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 3e8h
        ; Exact mapped bytes 0F 84 FB 00 00 00: je 0x5872cf8e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 3f1h
        ; Exact mapped bytes 74 47: je 0x5872cee3
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes E9 2A 01 00 00: jmp 0x5872cfcb
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 90 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x90
        __asm _emit 0xd5
        __asm _emit 0xff
        push 4
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 7C D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 9D D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x9d
        __asm _emit 0xd5
        __asm _emit 0xff
        push 100h
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 86 08 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E8 00 00 00: jmp 0x5872cfcb
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 8F D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x8f
        __asm _emit 0xd5
        __asm _emit 0xff
        push 0ch
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 7B D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x7b
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov edx, dword ptr [ebp - 68h]
        push edx
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 9D D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x9d
        __asm _emit 0xd5
        __asm _emit 0xff
        push 100h
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 86 08 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x5872cfcb
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E 7B D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x7b
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 6ch]
        push eax
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 9D D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x9d
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x5872cfcb
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 7B D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x7b
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 9C D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x9c
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5F: jmp 0x5872cfcb
        __asm _emit 0xeb
        __asm _emit 0x5f
        push 4
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 7B D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x7b
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        mov edx, dword ptr [ebp - 74h]
        push edx
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 9C D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x9c
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3D: jmp 0x5872cfcb
        __asm _emit 0xeb
        __asm _emit 0x3d
        push 0
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 7B D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x7b
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov eax, dword ptr [ebp - 78h]
        push eax
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 9C D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x9c
        __asm _emit 0xd5
        __asm _emit 0xff
        push 100h
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 85 08 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D 84 06 96 58: mov ecx, dword ptr [0x58960684]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 8F D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x8f
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 60h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        push edx
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 7A D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x7a
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        mov eax, dword ptr [ebp - 7ch]
        push eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 9C D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x9c
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        push edx
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 7A D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x7a
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        mov eax, dword ptr [ebp - 80h]
        push eax
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 9C D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x9c
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 54h], 12ch
        ; Exact mapped bytes 74 37: je 0x5872d066
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 54h], 3f1h
        ; Exact mapped bytes 74 2B: je 0x5872d066
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 54h], 1
        ; Exact mapped bytes 74 22: je 0x5872d066
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 54h], 2
        ; Exact mapped bytes 74 19: je 0x5872d066
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 74 10: je 0x5872d066
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 54h], 3e8h
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x5872d100
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D 8E D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x8e
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 54h], 3e8h
        ; Exact mapped bytes 74 0E: je 0x5872d08e
        __asm _emit 0x74
        __asm _emit 0x0e
        push 1
        ; Exact mapped bytes 8B 0D 84 06 96 58: mov ecx, dword ptr [0x58960684]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 8E D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x8e
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        push eax
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 7A D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x7a
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 9B D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x9b
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        push eax
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 7A D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x7a
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E 9B D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x9b
        __asm _emit 0xd5
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 84 08 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x00
        push 0ffh
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 84 08 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
