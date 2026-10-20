// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E5D60 .. +0x7FB bytes.
extern "C" __declspec(naked) void FUN_586e5d60_586E5D60() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888c8d5h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0f8h
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
        ; Exact mapped bytes E8 C4 C4 D9 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xc4
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b3064h
        mov dword ptr [ebp - 1ch], 1eh
        mov dword ptr [ebp - 18h], 3ah
        mov dword ptr [ebp - 1ch], 28h
        mov dword ptr [ebp - 18h], 44h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 20h]
        mov dword ptr [ecx + 1a4h], edx
        push 54h
        ; Exact mapped bytes E8 19 B2 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xb2
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 35: je 0x586e5e30
        __asm _emit 0x74
        __asm _emit 0x35
        push 63h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 ED D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 5
        push ecx
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F5 C4 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc4
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e5e37
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 74h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [ecx + eax + 60h], edx
        push 54h
        ; Exact mapped bytes E8 AA B1 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xb1
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 35: je 0x586e5e9f
        __asm _emit 0x74
        __asm _emit 0x35
        push 62h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A9 EC D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xec
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 5
        push ecx
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 86 C4 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586e5ea6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 7ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [eax + edx + 60h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 60h]
        mov dword ptr [ebp - 80h], edx
        push 1
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 02 00 DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 84h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 AD F6 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf6
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 88h], eax
        push 1
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 BB FF D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 8ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 66 F6 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xf6
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586e5f5d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [edx + 1a4h]
        ; Exact mapped bytes 0F 8D 93 05 00 00: jge 0x586e6502
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 8B B0 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb0
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 3F: je 0x586e5fc8
        __asm _emit 0x74
        __asm _emit 0x3f
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A EB D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xeb
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        imul ecx, dword ptr [ebp - 14h], 18h
        add ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 53h
        push edx
        push 3
        mov eax, dword ptr [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 AD 49 0D 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x49
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e5fcf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 94h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [ecx + eax*4 + 0d8h], edx
        push 0fch
        ; Exact mapped bytes E8 0B B0 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xb0
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 42: je 0x586e604b
        __asm _emit 0x74
        __asm _emit 0x42
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA EA D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xea
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        imul eax, dword ptr [ebp - 14h], 18h
        add eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 94h
        push ecx
        push 3
        mov edx, dword ptr [ebp - 98h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 2A 49 0D 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x49
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586e6052
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 9ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 9ch]
        mov dword ptr [eax + edx*4 + 0f4h], ecx
        push 54h
        ; Exact mapped bytes E8 8B AF 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xaf
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 43: je 0x586e60cc
        __asm _emit 0x74
        __asm _emit 0x43
        push 61h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A EA D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xea
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        push 40h
        imul edx, dword ptr [ebp - 14h], 18h
        add edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 18h]
        lea ecx, [edx + eax - 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4ch
        push edx
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 59 C2 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc2
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e60d3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0a4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ecx + eax*4 + 110h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 110h]
        mov dword ptr [ebp - 0a8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 CD FD D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 E9 AE 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 45: je 0x586e6170
        __asm _emit 0x74
        __asm _emit 0x45
        push 61h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 E9 D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        push 40h
        imul eax, dword ptr [ebp - 14h], 18h
        add eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 18h]
        lea edx, [eax + ecx - 4]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 8dh
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 B5 C1 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xc1
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586e6177
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0b0h]
        mov dword ptr [edx + ecx*4 + 12ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 12ch]
        mov dword ptr [ebp - 0b4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 29 FD D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 42 AE 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xae
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 69: je 0x586e623b
        __asm _emit 0x74
        __asm _emit 0x69
        push 0
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 E8 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0bch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0c0h], edx
        push 40h
        imul eax, dword ptr [ebp - 14h], 18h
        add eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 18h]
        lea edx, [eax + ecx - 2]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 6eh
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 AA 5A DE FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x5a
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e6242
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0c4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0c4h]
        mov dword ptr [ecx + eax*4 + 68h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 68h]
        mov dword ptr [ebp - 0c8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 31 F3 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xf3
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 7A AD 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xad
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 68: je 0x586e6302
        __asm _emit 0x74
        __asm _emit 0x68
        push 1
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 E8 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d4h], ecx
        push 40h
        imul edx, dword ptr [ebp - 14h], 18h
        add edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 18h]
        lea ecx, [edx + eax + 5]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 6eh
        push edx
        mov eax, dword ptr [ebp - 0cch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0d0h]
        push edx
        mov eax, dword ptr [ebp - 0d4h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 E3 59 DE FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x59
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586e6309
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 0d8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0d8h]
        mov dword ptr [eax + edx*4 + 0a0h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0a0h]
        mov dword ptr [ebp - 0dch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 64 F2 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf2
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 AD AC 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xac
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 6B: je 0x586e63d2
        __asm _emit 0x74
        __asm _emit 0x6b
        push 0
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C E7 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xe7
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e4h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e8h], eax
        push 40h
        imul ecx, dword ptr [ebp - 14h], 18h
        add ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 18h]
        lea eax, [ecx + edx - 2]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0afh
        push ecx
        mov edx, dword ptr [ebp - 0e0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        push ecx
        mov edx, dword ptr [ebp - 0e8h]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 13 59 DE FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x59
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x586e63d9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 0ech], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ech]
        mov dword ptr [edx + ecx*4 + 84h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 84h]
        mov dword ptr [ebp - 0f0h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 94 F1 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf1
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 DD AB 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xab
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 6B: je 0x586e64a2
        __asm _emit 0x74
        __asm _emit 0x6b
        push 1
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C E6 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe6
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0f8h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0fch], edx
        push 40h
        imul eax, dword ptr [ebp - 14h], 18h
        add eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 18h]
        lea edx, [eax + ecx + 5]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0afh
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0f8h]
        push eax
        mov ecx, dword ptr [ebp - 0fch]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 43 58 DE FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x58
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586e64a9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 100h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [ecx + eax*4 + 0bch], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0bch]
        mov dword ptr [ebp - 104h], edx
        push 101h
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 C4 F0 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 188h], 80h
        ; Exact mapped bytes E9 52 FA FF FF: jmp 0x586e5f54
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 148h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 184h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 1a8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1ach], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1b0h], 0
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
