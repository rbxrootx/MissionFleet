// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586D26F0 .. +0x24EC bytes.
extern "C" __declspec(naked) void FUN_586d26f0_586D26F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888c5f7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 400h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 34 FB DA FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xfb
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b2fd8h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 54h], ecx
        push 54h
        ; Exact mapped bytes E8 9F E8 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 38: je 0x586d27ad
        __asm _emit 0x74
        __asm _emit 0x38
        push 0
        ; Exact mapped bytes 8B 0D 94 06 96 58: mov ecx, dword ptr [0x58960694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E 23 DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x23
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        push 5dch
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 164h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 78 FB DA FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xfb
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d27b4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 168h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 168h]
        mov dword ptr [ecx + 160h], edx
        push 6ch
        ; Exact mapped bytes E8 2D E8 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 38: je 0x586d281f
        __asm _emit 0x74
        __asm _emit 0x38
        push 0
        ; Exact mapped bytes 8B 0D 94 06 96 58: mov ecx, dword ptr [0x58960694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC 22 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x22
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        push 5ddh
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 16ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E6 20 E6 FF: call 0x58534900
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x20
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d2826
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 170h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 170h]
        mov dword ptr [edx + 164h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 164h]
        ; Exact mapped bytes E8 E0 24 E6 FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x24
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 6ch
        ; Exact mapped bytes E8 AC E7 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe7
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 40: je 0x586d28a8
        __asm _emit 0x74
        __asm _emit 0x40
        push 2
        ; Exact mapped bytes 8B 0D 94 06 96 58: mov ecx, dword ptr [0x58960694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B 22 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x22
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        push 5ddh
        mov edx, dword ptr [ebp + 10h]
        sub edx, 0ah
        push edx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 96h
        push eax
        mov ecx, dword ptr [ebp - 174h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 5D 20 E6 FF: call 0x58534900
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x20
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d28af
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 178h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 178h]
        mov dword ptr [ecx + 168h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 168h]
        ; Exact mapped bytes E8 57 24 E6 FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x24
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 6ch
        ; Exact mapped bytes E8 23 E7 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xe7
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 38: je 0x586d2929
        __asm _emit 0x74
        __asm _emit 0x38
        push 0eh
        ; Exact mapped bytes 8B 0D 94 06 96 58: mov ecx, dword ptr [0x58960694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 21 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x21
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        push 640h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 17ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 DC 1F E6 FF: call 0x58534900
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x1f
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d2930
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 180h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 180h]
        mov dword ptr [eax + 16ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 16ch]
        ; Exact mapped bytes E8 D6 23 E6 FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x23
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 9F E6 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xe6
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 60: je 0x586d29d5
        __asm _emit 0x74
        __asm _emit 0x60
        push 8
        ; Exact mapped bytes 8B 0D 94 06 96 58: mov ecx, dword ptr [0x58960694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E 21 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x21
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 188h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 18ch], ecx
        push 640h
        mov edx, dword ptr [ebp + 10h]
        sub edx, 0ah
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 184h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 188h]
        push eax
        mov ecx, dword ptr [ebp - 18ch]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 10 93 DF FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d29dc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 190h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 190h]
        mov dword ptr [eax + 180h], ecx
        push 0ach
        ; Exact mapped bytes E8 02 E6 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe6
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 60: je 0x586d2a72
        __asm _emit 0x74
        __asm _emit 0x60
        push 6
        ; Exact mapped bytes 8B 0D 94 06 96 58: mov ecx, dword ptr [0x58960694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 20 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x20
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 198h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 19ch], eax
        push 640h
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 194h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 198h]
        push edx
        mov eax, dword ptr [ebp - 19ch]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 73 92 DF FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x92
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d2a79
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 1a0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1a0h]
        mov dword ptr [edx + 184h], eax
        push 0ach
        ; Exact mapped bytes E8 65 E5 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xe5
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 67: je 0x586d2b16
        __asm _emit 0x74
        __asm _emit 0x67
        push 0ah
        ; Exact mapped bytes 8B 0D 94 06 96 58: mov ecx, dword ptr [0x58960694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 20 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x20
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a8h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1ach], edx
        push 640h
        mov eax, dword ptr [ebp + 10h]
        add eax, 19h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 12ch
        push ecx
        mov edx, dword ptr [ebp - 1a4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1a8h]
        push ecx
        mov edx, dword ptr [ebp - 1ach]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 CF 91 DF FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x91
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d2b1d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 1b0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1b0h]
        mov dword ptr [ecx + 17ch], edx
        push 0bh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A 1F DB FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x1f
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], eax
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0b8h], 2
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0bch], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0f0h], 0
        push 18h
        push 0
        mov edx, dword ptr [ebp - 10h]
        add edx, 0c0h
        push edx
        ; Exact mapped bytes E8 8A A2 17 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xa2
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 0d8h
        push eax
        ; Exact mapped bytes E8 75 A2 17 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xa2
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0b4h], 100000h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 74h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 10ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4ach], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 108h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 15ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ach], 0ffffffffh
        push 10h
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 0f8h
        push eax
        ; Exact mapped bytes E8 FB A1 17 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xa1
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d2c2a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 5
        ; Exact mapped bytes 7D 1D: jge 0x586d2c4d
        __asm _emit 0x7d
        __asm _emit 0x1d
        push 18h
        push 0
        imul edx, dword ptr [ebp - 18h], 18h
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 504h]
        push ecx
        ; Exact mapped bytes E8 C8 A1 17 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xa1
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB D4: jmp 0x586d2c21
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d2c5f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 5
        ; Exact mapped bytes 7D 1D: jge 0x586d2c82
        __asm _emit 0x7d
        __asm _emit 0x1d
        push 18h
        push 0
        imul eax, dword ptr [ebp - 18h], 18h
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 57ch]
        push edx
        ; Exact mapped bytes E8 93 A1 17 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa1
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB D4: jmp 0x586d2c56
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5f4h], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 5f8h], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 5fch], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8F E0 00 00: call 0x586e0d40
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 10ch
        ; Exact mapped bytes E8 48 E3 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xe3
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 47: je 0x586d2d13
        __asm _emit 0x74
        __asm _emit 0x47
        push 646464h
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 2dh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 136h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 19h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0a6h
        push eax
        ; Exact mapped bytes 8B 0D 34 20 96 58: mov ecx, dword ptr [0x58962034]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 82 D0 DF FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd0
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d2d1a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 1b4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1b4h]
        mov dword ptr [ecx + 154h], edx
        push 10ch
        ; Exact mapped bytes E8 C4 E2 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xe2
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 47: je 0x586d2d97
        __asm _emit 0x74
        __asm _emit 0x47
        push 646464h
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 2dh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 294h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 19h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 155h
        push eax
        ; Exact mapped bytes 8B 0D 30 20 96 58: mov ecx, dword ptr [0x58962030]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 FE CF DF FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xcf
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d2d9e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 1b8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1b8h]
        mov dword ptr [ecx + 150h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 154h]
        mov dword ptr [ebp - 1bch], ecx
        push 672h
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 A7 30 DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x30
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 150h]
        mov dword ptr [ebp - 1c0h], eax
        push 672h
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 88 30 DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x30
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 154h]
        mov dword ptr [ebp - 1c4h], edx
        push 14h
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 DC 92 DD FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x92
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 150h]
        mov dword ptr [ebp - 1c8h], ecx
        push 41h
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 C0 92 DD FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x92
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 154h]
        mov dword ptr [ebp - 1cch], eax
        push 0
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 94 2F DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x2f
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 150h]
        mov dword ptr [ebp - 1d0h], edx
        push 0
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 78 2F DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x2f
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 154h]
        mov dword ptr [ebp - 1d4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 5C 30 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x30
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 150h]
        mov dword ptr [ebp - 1d8h], eax
        push 0
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 40 30 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x30
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 90h
        ; Exact mapped bytes E8 59 E1 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xe1
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 57: je 0x586d2f12
        __asm _emit 0x74
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 160h]
        ; Exact mapped bytes E8 47 28 DC FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x28
        __asm _emit 0xdc
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        add edx, 0c8h
        ; Exact mapped bytes 66 89 55 E2: mov word ptr [ebp - 0x1e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe2
        push 71h
        ; Exact mapped bytes 8B 0D 94 06 96 58: mov ecx, dword ptr [0x58960694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D 1C DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 1dch], eax
        movzx eax, word ptr [ebp - 1eh]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 32h
        push ecx
        push 320h
        mov edx, dword ptr [ebp - 1dch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 93 F5 00 00: call 0x586e24a0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d2f19
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov ecx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 1e0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1e0h]
        mov dword ptr [edx + 64h], eax
        push 6ch
        ; Exact mapped bytes E8 CB E0 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe0
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 3E: je 0x586d2f87
        __asm _emit 0x74
        __asm _emit 0x3e
        push 4
        ; Exact mapped bytes 8B 0D 94 06 96 58: mov ecx, dword ptr [0x58960694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7A 1B DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x1b
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 1e4h], eax
        push 578h
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 0fah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 1e4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 7E 19 E6 FF: call 0x58534900
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x19
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d2f8e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 1e8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1e8h]
        mov dword ptr [eax + 188h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 188h]
        ; Exact mapped bytes E8 78 1D E6 FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x1d
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 188h]
        mov dword ptr [ebp - 1ech], ecx
        push 5ah
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 6C 25 0E 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x25
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        push 6ch
        ; Exact mapped bytes E8 28 E0 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xe0
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 3B: je 0x586d3027
        __asm _emit 0x74
        __asm _emit 0x3b
        push 5
        ; Exact mapped bytes 8B 0D 94 06 96 58: mov ecx, dword ptr [0x58960694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 1A DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x1a
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        push 579h
        mov edx, dword ptr [ebp + 10h]
        sub edx, 0ah
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 1f0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 DE 18 E6 FF: call 0x58534900
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x18
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d302e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 1f4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1f4h]
        mov dword ptr [ecx + 18ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 18ch]
        ; Exact mapped bytes E8 D8 1C E6 FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x1c
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 6ch
        ; Exact mapped bytes E8 A4 DF 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xdf
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 41: je 0x586d30b7
        __asm _emit 0x74
        __asm _emit 0x41
        push 0dh
        ; Exact mapped bytes 8B 0D 94 06 96 58: mov ecx, dword ptr [0x58960694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D 1A DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x1a
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 1f8h], eax
        push 577h
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 1f8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 51 18 E6 FF: call 0x58534900
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x18
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d30c1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 1fch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1fch]
        mov dword ptr [eax + 190h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 190h]
        mov dword ptr [ebp - 200h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 B1 24 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x24
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes E8 23 1C E6 FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x1c
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 94h
        ; Exact mapped bytes E8 EC DE 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xde
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 49: je 0x586d3177
        __asm _emit 0x74
        __asm _emit 0x49
        push 0
        push 0
        push 10101h
        mov edx, dword ptr [ebp + 10h]
        sub edx, 64h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 253h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 7fh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 13bh
        push edx
        ; Exact mapped bytes A1 24 20 96 58: mov eax, dword ptr [0x58962024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 E1 5A 07 00: call 0x58748c50
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x5a
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d3181
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov edx, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 204h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 204h]
        mov dword ptr [eax + 194h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 194h]
        mov dword ptr [ebp - 208h], eax
        push 0ffffffh
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 21 2F DB FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x2f
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 194h]
        mov dword ptr [ebp - 20ch], edx
        push 640h
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 A2 2C DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x2c
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 194h]
        mov dword ptr [ebp - 210h], ecx
        push 588b2780h
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 A3 2E DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x2e
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 FC DD 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xdd
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 43: je 0x586d3261
        __asm _emit 0x74
        __asm _emit 0x43
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 18 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x18
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        mov edx, dword ptr [ebp + 10h]
        sub edx, 7fh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 2b2h
        push eax
        push 3
        mov ecx, dword ptr [ebp - 214h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 17 77 0E 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x77
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d326b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov eax, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 218h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 218h]
        mov dword ptr [eax + edx + 498h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 498h]
        mov dword ptr [ebp - 21ch], edx
        push 640h
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 C5 2B DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x2b
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 3E DD 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xdd
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 44: je 0x586d3320
        __asm _emit 0x74
        __asm _emit 0x44
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 17 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x17
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        mov eax, dword ptr [ebp + 10h]
        sub eax, 7fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2e4h
        push ecx
        push 3
        mov edx, dword ptr [ebp - 220h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 58 76 0E 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x76
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d332a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov ecx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 224h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 224h]
        mov dword ptr [eax + edx + 498h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 498h]
        mov dword ptr [ebp - 228h], ecx
        push 640h
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 06 2B DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x2b
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 498h]
        mov dword ptr [ebp - 22ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 F1 7D 0E 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x7d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 498h]
        mov dword ptr [ebp - 230h], edx
        push 101h
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 E9 21 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 498h]
        mov dword ptr [ebp - 234h], edx
        push 101h
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 C1 21 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x21
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 194h]
        mov dword ptr [ebp - 238h], ecx
        push 0
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 D5 2A DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x2a
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 498h]
        mov dword ptr [ebp - 23ch], edx
        push 0
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 B0 2A DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x2a
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 498h]
        mov dword ptr [ebp - 240h], edx
        push 0
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 8B 2A DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x2a
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 A4 DB 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 44: je 0x586d34ba
        __asm _emit 0x74
        __asm _emit 0x44
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D 16 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x16
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 244h], eax
        mov eax, dword ptr [ebp + 10h]
        sub eax, 7fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2dah
        push ecx
        push 4
        mov edx, dword ptr [ebp - 244h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 BE 74 0E 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x74
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d34c4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 248h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 248h]
        mov dword ptr [edx + 4a0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4a0h]
        mov dword ptr [ebp - 24ch], edx
        push 640h
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 7E 29 DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x29
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4a0h]
        mov dword ptr [ebp - 250h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 8F 20 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x20
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4a0h]
        mov dword ptr [ebp - 254h], eax
        push 0
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 A3 29 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x29
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 94h
        ; Exact mapped bytes E8 BC DA 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xda
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 4C: je 0x586d35aa
        __asm _emit 0x74
        __asm _emit 0x4c
        push 10101h
        push 0
        push 0d0d0dfh
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 2
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 2f8h
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 6bh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 155h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 2E CD 0E 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xcd
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d35b4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov ecx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 258h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 258h]
        mov dword ptr [edx + 4c4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4c4h]
        mov dword ptr [ebp - 25ch], edx
        push 0dh
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 01 BE DC FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xbe
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4c4h]
        mov dword ptr [ebp - 260h], ecx
        push 1a3h
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 92 38 DE FF: call 0x584b6ea0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x38
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4c4h]
        mov dword ptr [ebp - 268h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 4c4h]
        ; Exact mapped bytes E8 85 14 E6 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0xe6
        __asm _emit 0xff
        imul edx, eax, 9
        add edx, 5
        mov dword ptr [ebp - 264h], edx
        mov eax, dword ptr [ebp - 264h]
        push eax
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 07 38 DE FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x38
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4c4h]
        mov dword ptr [ebp - 26ch], edx
        push 0
        push 0fefefeh
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 56 02 E6 FF: call 0x585338c0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4c4h]
        mov dword ptr [ebp - 270h], ecx
        push 640h
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 F7 27 DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x27
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 94h
        ; Exact mapped bytes E8 70 D9 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xd9
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 47: je 0x586d36f1
        __asm _emit 0x74
        __asm _emit 0x47
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        sub edx, 2
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 12ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 6bh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0d2h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 B7 09 E5 FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x09
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d36fb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov edx, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 274h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 274h]
        mov dword ptr [eax + 4c8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4c8h]
        mov dword ptr [ebp - 278h], eax
        push 14h
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 BA BC DC FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xbc
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4c8h]
        mov dword ptr [ebp - 27ch], edx
        push 5fh
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 4E 37 DE FF: call 0x584b6ea0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x37
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4c8h]
        mov dword ptr [ebp - 284h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 4c8h]
        ; Exact mapped bytes E8 41 13 E6 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x13
        __asm _emit 0xe6
        __asm _emit 0xff
        imul eax, eax, 6
        mov dword ptr [ebp - 280h], eax
        mov ecx, dword ptr [ebp - 280h]
        push ecx
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 C6 36 DE FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x36
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4c8h]
        mov dword ptr [ebp - 288h], eax
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 15 01 E6 FF: call 0x585338c0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4c8h]
        mov dword ptr [ebp - 28ch], edx
        push 640h
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 B6 26 DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x26
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 94h
        ; Exact mapped bytes E8 2F D8 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xd8
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 48: je 0x586d3833
        __asm _emit 0x74
        __asm _emit 0x48
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        sub eax, 2
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0b4h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 6bh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 80h
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 A5 CA 0E 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xca
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d383d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov eax, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 290h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 290h]
        mov dword ptr [ecx + 4cch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4cch]
        mov dword ptr [ebp - 294h], ecx
        push 14h
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 78 BB DC FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xbb
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4cch]
        mov dword ptr [ebp - 298h], eax
        push 5fh
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 0C 36 DE FF: call 0x584b6ea0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x36
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4cch]
        mov dword ptr [ebp - 2a0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4c8h]
        ; Exact mapped bytes E8 FF 11 E6 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x11
        __asm _emit 0xe6
        __asm _emit 0xff
        imul ecx, eax, 6
        mov dword ptr [ebp - 29ch], ecx
        mov edx, dword ptr [ebp - 29ch]
        push edx
        mov ecx, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes E8 84 35 DE FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4cch]
        mov dword ptr [ebp - 2a4h], ecx
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 D3 FF E5 FF: call 0x585338c0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4cch]
        mov dword ptr [ebp - 2a8h], eax
        push 640h
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 74 25 DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x25
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586d391f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 6
        ; Exact mapped bytes 0F 8D 80 00 00 00: jge 0x586d39a9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 D4 D6 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd6
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 31: je 0x586d3977
        __asm _emit 0x74
        __asm _emit 0x31
        push 640h
        imul edx, dword ptr [ebp - 1ch], 14h
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx - 70h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 69h
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 B1 E9 DA FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d3981
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov ecx, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 2ach], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2ach]
        mov dword ptr [eax + edx*4 + 4d0h], ecx
        ; Exact mapped bytes E9 6D FF FF FF: jmp 0x586d3916
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0a0h
        ; Exact mapped bytes E8 51 D6 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd6
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 45: je 0x586d3a0e
        __asm _emit 0x74
        __asm _emit 0x45
        push 0
        push 0efefefh
        mov edx, dword ptr [ebp + 10h]
        sub edx, 32h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 302h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 32h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 155h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 FA 19 0F 00: call 0x587c5400
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x19
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d3a18
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        mov edx, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 2b0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2b0h]
        mov dword ptr [eax + 4c0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4c0h]
        mov dword ptr [ebp - 2b4h], eax
        push 10101h
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 BA 24 DB FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x24
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4c0h]
        mov dword ptr [ebp - 2b8h], edx
        push 0
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 DE C1 E2 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4c0h]
        mov dword ptr [ebp - 2bch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 52 23 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x23
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4c0h]
        mov dword ptr [ebp - 2c0h], eax
        push 0ah
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 16 3A F1 FF: call 0x585e74c0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x3a
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4c0h]
        mov dword ptr [ebp - 2c4h], edx
        push 0bb8h
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 47 1C F1 FF: call 0x585e5710
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x1c
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4c0h]
        mov dword ptr [ebp - 2c8h], ecx
        push 640h
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 98 23 DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x23
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 11 D5 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xd5
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 6C: je 0x586d3b75
        __asm _emit 0x74
        __asm _emit 0x6c
        push 0ch
        ; Exact mapped bytes 8B 0D 94 06 96 58: mov ecx, dword ptr [0x58960694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA 0F DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 2cch], eax
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2d0h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2d4h], eax
        push 640h
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 6eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 2f8h
        push edx
        mov eax, dword ptr [ebp - 2cch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 2d0h]
        push edx
        mov eax, dword ptr [ebp - 2d4h]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 73 81 DF FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x81
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d3b7f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        mov ecx, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 2d8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2d8h]
        mov dword ptr [edx + 4b0h], eax
        push 0ach
        ; Exact mapped bytes E8 5C D4 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xd4
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 6D: je 0x586d3c2b
        __asm _emit 0x74
        __asm _emit 0x6d
        push 0bh
        ; Exact mapped bytes 8B 0D 94 06 96 58: mov ecx, dword ptr [0x58960694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 0F DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 2dch], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2e0h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2e4h], edx
        push 640h
        mov eax, dword ptr [ebp + 10h]
        sub eax, 4
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2f8h
        push ecx
        mov edx, dword ptr [ebp - 2dch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2e0h]
        push ecx
        mov edx, dword ptr [ebp - 2e4h]
        push edx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 BD 80 DF FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x80
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d3c35
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov eax, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 2e8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2e8h]
        mov dword ptr [ecx + 4b4h], edx
        push 0ach
        ; Exact mapped bytes E8 A6 D3 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd3
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 6B: je 0x586d3cdf
        __asm _emit 0x74
        __asm _emit 0x6b
        push 0ch
        ; Exact mapped bytes 8B 0D 94 06 96 58: mov ecx, dword ptr [0x58960694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 0E DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x0e
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 2ech], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2f0h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2f4h], ecx
        push 640h
        mov edx, dword ptr [ebp + 10h]
        sub edx, 6eh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 114h
        push eax
        mov ecx, dword ptr [ebp - 2ech]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 2f0h]
        push eax
        mov ecx, dword ptr [ebp - 2f4h]
        push ecx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 09 80 DF FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x80
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d3ce9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        mov edx, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 2f8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2f8h]
        mov dword ptr [eax + 4b8h], ecx
        push 0ach
        ; Exact mapped bytes E8 F2 D2 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xd2
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 6C: je 0x586d3d94
        __asm _emit 0x74
        __asm _emit 0x6c
        push 0bh
        ; Exact mapped bytes 8B 0D 94 06 96 58: mov ecx, dword ptr [0x58960694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B 0D DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x0d
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 2fch], eax
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 300h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 304h], eax
        push 640h
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 4
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 114h
        push edx
        mov eax, dword ptr [ebp - 2fch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 300h]
        push edx
        mov eax, dword ptr [ebp - 304h]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 54 7F DF FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x7f
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d3d9e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 308h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 308h]
        mov dword ptr [edx + 4bch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4b4h]
        mov dword ptr [ebp - 30ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 30ch]
        ; Exact mapped bytes E8 D4 17 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x17
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4b0h]
        mov dword ptr [ebp - 310h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 B5 17 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x17
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4b8h]
        mov dword ptr [ebp - 314h], eax
        push 101h
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 96 17 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x17
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4bch]
        mov dword ptr [ebp - 318h], edx
        push 101h
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 77 17 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x17
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        push 58h
        ; Exact mapped bytes E8 C3 D1 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xd1
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f4h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 47: je 0x586d3e9e
        __asm _emit 0x74
        __asm _emit 0x47
        push 20h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C 0C DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x0c
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 31ch], eax
        push 583h
        mov eax, dword ptr [ebp + 10h]
        sub eax, 0eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2f8h
        push ecx
        mov edx, dword ptr [ebp - 31ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 7A 29 DB FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x29
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d3ea8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        mov ecx, dword ptr [ebp - 0f8h]
        mov dword ptr [ebp - 320h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 320h]
        mov dword ptr [edx + 4a4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4a4h]
        mov dword ptr [ebp - 324h], edx
        push 0
        mov ecx, dword ptr [ebp - 324h]
        ; Exact mapped bytes E8 6D B6 DC FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb6
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4a4h]
        mov dword ptr [ebp - 328h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 AE 16 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x16
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4a4h]
        mov dword ptr [ebp - 32ch], eax
        push 0
        mov ecx, dword ptr [ebp - 32ch]
        ; Exact mapped bytes E8 22 1F DB FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x1f
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 DE D0 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xd0
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 47: je 0x586d3f83
        __asm _emit 0x74
        __asm _emit 0x47
        push 20h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 0B DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x0b
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 330h], eax
        push 583h
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 0eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 114h
        push edx
        mov eax, dword ptr [ebp - 330h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 95 28 DB FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d3f8d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 334h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 334h]
        mov dword ptr [eax + 4a8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4a8h]
        mov dword ptr [ebp - 338h], eax
        push 0
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 88 B5 DC FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xb5
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4a8h]
        mov dword ptr [ebp - 33ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 33ch]
        ; Exact mapped bytes E8 C9 15 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x15
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4a8h]
        mov dword ptr [ebp - 340h], ecx
        push 0
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 3D 1E DB FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x1e
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4a8h]
        mov dword ptr [ebp - 344h], eax
        push 2
        mov ecx, dword ptr [ebp - 344h]
        ; Exact mapped bytes E8 21 B8 DC FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb8
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4a4h]
        mov dword ptr [ebp - 348h], edx
        push 2
        mov ecx, dword ptr [ebp - 348h]
        ; Exact mapped bytes E8 05 B8 DC FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        push 1dch
        ; Exact mapped bytes E8 BE CF 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xcf
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 104h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 74 24: je 0x586d4080
        __asm _emit 0x74
        __asm _emit 0x24
        push 40h
        push 0
        push 7ffdh
        push 0
        push 70h
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 58 2D 04 00: call 0x58716dd0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d408a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 108h], 0
        mov ecx, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 34ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 34ch]
        mov dword ptr [edx + 4f4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4f4h]
        mov dword ptr [ebp - 350h], edx
        push 5
        mov ecx, dword ptr [ebp - 350h]
        ; Exact mapped bytes E8 9B 1C DB FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x1c
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4f4h]
        mov dword ptr [ebp - 354h], ecx
        push 0
        mov ecx, dword ptr [ebp - 354h]
        ; Exact mapped bytes E8 FF 1D DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x1d
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 94h
        ; Exact mapped bytes E8 18 CF 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xcf
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10ch], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 49: je 0x586d414b
        __asm _emit 0x74
        __asm _emit 0x49
        push 0
        push 0
        push 10101h
        mov edx, dword ptr [ebp + 10h]
        sub edx, 64h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 253h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 7fh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 13bh
        push edx
        ; Exact mapped bytes A1 24 20 96 58: mov eax, dword ptr [0x58962024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 0D 4B 07 00: call 0x58748c50
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x4b
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d4155
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 110h], 0
        mov edx, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 358h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 358h]
        mov dword ptr [eax + 4f8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4f8h]
        mov dword ptr [ebp - 35ch], eax
        push 0ffffffh
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes E8 4D 1F DB FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x1f
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4f8h]
        mov dword ptr [ebp - 360h], edx
        push 640h
        mov ecx, dword ptr [ebp - 360h]
        ; Exact mapped bytes E8 CE 1C DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x1c
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4f8h]
        mov dword ptr [ebp - 364h], ecx
        push 0
        mov ecx, dword ptr [ebp - 364h]
        ; Exact mapped bytes E8 12 1D DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x1d
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 94h
        ; Exact mapped bytes E8 2B CE 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xce
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 49: je 0x586d4238
        __asm _emit 0x74
        __asm _emit 0x49
        push 0
        push 0
        push 0a53737h
        mov edx, dword ptr [ebp + 10h]
        add edx, 2bh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 2f8h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 17h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1b6h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 20 4A 07 00: call 0x58748c50
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x4a
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d4242
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 0
        mov edx, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 368h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 368h]
        mov dword ptr [eax + 4fch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4fch]
        mov dword ptr [ebp - 36ch], eax
        push 672h
        mov ecx, dword ptr [ebp - 36ch]
        ; Exact mapped bytes E8 00 1C DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x1c
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 0f4h
        ; Exact mapped bytes E8 79 CD 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xcd
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 11ch], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 24: je 0x586d42c5
        __asm _emit 0x74
        __asm _emit 0x24
        push 1004h
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 B3 69 02 00: call 0x586fac70
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 120h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d42cf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 120h], 0
        mov edx, dword ptr [ebp - 120h]
        mov dword ptr [ebp - 370h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 370h]
        mov dword ptr [eax + 500h], ecx
        push 198h
        ; Exact mapped bytes E8 0C CD 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xcd
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 1C: je 0x586d432a
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588b2784h
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 8E C0 0A 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d4334
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 128h], 0
        mov edx, dword ptr [ebp - 128h]
        mov dword ptr [ebp - 374h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 374h]
        mov dword ptr [eax + 648h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 64ch], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C8 97 00 00: call 0x586ddb30
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d437b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D A1 00 00 00: jge 0x586d4426
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 78 CC 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xcc
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 12ch], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 74 52: je 0x586d43f4
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 648h]
        mov dword ptr [ebp - 378h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 32h
        push eax
        mov ecx, dword ptr [ebp - 378h]
        ; Exact mapped bytes E8 5D 07 DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x07
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 37ch], eax
        push 640h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 37ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 34 DF DA FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xdf
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d43fe
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 130h], 0
        mov edx, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 380h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 380h]
        mov dword ptr [ecx + eax*4 + 600h], edx
        ; Exact mapped bytes E9 4C FF FF FF: jmp 0x586d4372
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d4438
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D A1 00 00 00: jge 0x586d44e3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 BB CB 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xcb
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 134h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 134h], 0
        ; Exact mapped bytes 74 52: je 0x586d44b1
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 648h]
        mov dword ptr [ebp - 384h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 34h
        push eax
        mov ecx, dword ptr [ebp - 384h]
        ; Exact mapped bytes E8 A0 06 DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 388h], eax
        push 640h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 388h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 77 DE DA FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xde
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d44bb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 138h], 0
        mov edx, dword ptr [ebp - 138h]
        mov dword ptr [ebp - 38ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 38ch]
        mov dword ptr [ecx + eax*4 + 608h], edx
        ; Exact mapped bytes E9 4C FF FF FF: jmp 0x586d442f
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d44f5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D A1 00 00 00: jge 0x586d45a0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 FE CA 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xca
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 13ch], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 74 52: je 0x586d456e
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 648h]
        mov dword ptr [ebp - 390h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 36h
        push eax
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 E3 05 DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x05
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 394h], eax
        push 640h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 394h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 BA DD DA FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xdd
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d4578
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 140h], 0
        mov edx, dword ptr [ebp - 140h]
        mov dword ptr [ebp - 398h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 398h]
        mov dword ptr [ecx + eax*4 + 610h], edx
        ; Exact mapped bytes E9 4C FF FF FF: jmp 0x586d44ec
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d45b2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D A1 00 00 00: jge 0x586d465d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 41 CA 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xca
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 144h], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 74 52: je 0x586d462b
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 648h]
        mov dword ptr [ebp - 39ch], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 38h
        push eax
        mov ecx, dword ptr [ebp - 39ch]
        ; Exact mapped bytes E8 26 05 DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 3a0h], eax
        push 640h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 3a0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 FD DC DA FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d4635
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 148h], 0
        mov edx, dword ptr [ebp - 148h]
        mov dword ptr [ebp - 3a4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3a4h]
        mov dword ptr [ecx + eax*4 + 618h], edx
        ; Exact mapped bytes E9 4C FF FF FF: jmp 0x586d45a9
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 600h]
        mov dword ptr [ebp - 3a8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 3a8h]
        ; Exact mapped bytes E8 2B 0F 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x0f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 600h]
        mov dword ptr [ebp - 3ach], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 3ach]
        ; Exact mapped bytes E8 03 0F 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x0f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 608h]
        mov dword ptr [ebp - 3b0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 DB 0E 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x0e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 608h]
        mov dword ptr [ebp - 3b4h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 3b4h]
        ; Exact mapped bytes E8 B3 0E 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x0e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 610h]
        mov dword ptr [ebp - 3b8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 3b8h]
        ; Exact mapped bytes E8 8B 0E 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x0e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 610h]
        mov dword ptr [ebp - 3bch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 3bch]
        ; Exact mapped bytes E8 63 0E 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x0e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 618h]
        mov dword ptr [ebp - 3c0h], eax
        push 101h
        mov ecx, dword ptr [ebp - 3c0h]
        ; Exact mapped bytes E8 3B 0E 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x0e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 618h]
        mov dword ptr [ebp - 3c4h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 13 0E 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x0e
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        push 134h
        ; Exact mapped bytes E8 5C C8 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xc8
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14ch], eax
        mov byte ptr [ebp - 4], 26h
        cmp dword ptr [ebp - 14ch], 0
        ; Exact mapped bytes 74 28: je 0x586d47e6
        __asm _emit 0x74
        __asm _emit 0x28
        push 672h
        push 0
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 C2 11 03 00: call 0x587059a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 150h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d47f0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 150h], 0
        mov ecx, dword ptr [ebp - 150h]
        mov dword ptr [ebp - 3c8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3c8h]
        mov dword ptr [edx + 620h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 620h]
        mov dword ptr [ebp - 3cch], edx
        push 0
        mov ecx, dword ptr [ebp - 3cch]
        ; Exact mapped bytes E8 65 17 DB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x17
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d483e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 0F 8D C0 00 00 00: jge 0x586d4908
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 B2 C7 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xc7
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 154h], eax
        mov byte ptr [ebp - 4], 27h
        cmp dword ptr [ebp - 154h], 0
        ; Exact mapped bytes 74 6E: je 0x586d48d6
        __asm _emit 0x74
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 648h]
        mov dword ptr [ebp - 3d0h], edx
        push 3
        mov ecx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes E8 4C 02 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 3d4h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3d8h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3dch], ecx
        push 640h
        push 0
        push 0
        mov edx, dword ptr [ebp - 3d4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 3d8h]
        push ecx
        mov edx, dword ptr [ebp - 3dch]
        push edx
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 12 74 DF FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x74
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d48e0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 158h], 0
        mov eax, dword ptr [ebp - 158h]
        mov dword ptr [ebp - 3e0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3e0h]
        mov dword ptr [edx + ecx*4 + 624h], eax
        ; Exact mapped bytes E9 2D FF FF FF: jmp 0x586d4835
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d491a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 7D 26: jge 0x586d4946
        __asm _emit 0x7d
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 624h]
        mov dword ptr [ebp - 3e4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes E8 6D 0C 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CB: jmp 0x586d4911
        __asm _emit 0xeb
        __asm _emit 0xcb
        push 0ach
        ; Exact mapped bytes E8 B4 C6 15 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xc6
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 15ch], eax
        mov byte ptr [ebp - 4], 28h
        cmp dword ptr [ebp - 15ch], 0
        ; Exact mapped bytes 74 7C: je 0x586d49e2
        __asm _emit 0x74
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 648h]
        mov dword ptr [ebp - 3e8h], eax
        push 4
        mov ecx, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes E8 4E 01 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 3ech], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3f0h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3f4h], edx
        push 640h
        mov eax, dword ptr [ebp + 10h]
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 301h
        push ecx
        mov edx, dword ptr [ebp - 3ech]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 3f0h]
        push ecx
        mov edx, dword ptr [ebp - 3f4h]
        push edx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 06 73 DF FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x73
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586d49ec
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 160h], 0
        mov eax, dword ptr [ebp - 160h]
        mov dword ptr [ebp - 3f8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3f8h]
        mov dword ptr [ecx + 634h], edx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d4a1d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 7D 13: jge 0x586d4a36
        __asm _emit 0x7d
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4 + 638h], 0
        ; Exact mapped bytes EB DE: jmp 0x586d4a14
        __asm _emit 0xeb
        __asm _emit 0xde
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x586d4ac8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 34 05 96 58 00: cmp dword ptr [0x58960534], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 7C: je 0x586d4ac8
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 638h], 1
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 638h], 1
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 624h]
        mov dword ptr [ebp - 3fch], ecx
        push 5
        mov ecx, dword ptr [ebp - 3fch]
        ; Exact mapped bytes E8 A3 AD DC FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xad
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 624h]
        mov dword ptr [ebp - 400h], edx
        push 5
        mov ecx, dword ptr [ebp - 400h]
        ; Exact mapped bytes E8 7E AD DC FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xad
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DB 00 00 00: jmp 0x586d4ba3
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x586d4b55
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 34 05 96 58 00: cmp dword ptr [0x58960534], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 77: jne 0x586d4b55
        __asm _emit 0x75
        __asm _emit 0x77
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 638h], 1
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 638h], 1
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 624h]
        mov dword ptr [ebp - 404h], eax
        push 5
        mov ecx, dword ptr [ebp - 404h]
        ; Exact mapped bytes E8 12 AD DC FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xad
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 624h]
        mov dword ptr [ebp - 408h], eax
        push 5
        mov ecx, dword ptr [ebp - 408h]
        ; Exact mapped bytes E8 EE AC DC FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xac
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4E: jmp 0x586d4ba3
        __asm _emit 0xeb
        __asm _emit 0x4e
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 45: jne 0x586d4ba3
        __asm _emit 0x75
        __asm _emit 0x45
        ; Exact mapped bytes 83 3D 34 05 96 58 00: cmp dword ptr [0x58960534], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 3C: je 0x586d4ba3
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 638h], 1
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 624h]
        mov dword ptr [ebp - 40ch], ecx
        push 5
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes E8 9E AC DC FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xac
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
