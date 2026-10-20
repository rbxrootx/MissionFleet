// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58665820 .. +0xEF2 bytes.
extern "C" __declspec(naked) void FUN_58665820_58665820() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58889426h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1e8h
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
        ; Exact mapped bytes E8 04 CA E1 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xca
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588afc5ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 74h
        ; Exact mapped bytes E8 49 1C E2 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x1c
        __asm _emit 0xe2
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 80h
        ; Exact mapped bytes E8 37 1C E2 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x1c
        __asm _emit 0xe2
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 8B 15 D4 07 96 58: mov edx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ecx + 60h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 64h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 68h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 6ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 70h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0f0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0f4h], 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 74h
        mov dword ptr [ebp - 0b4h], eax
        push 8
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 DC 47 E5 FF: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x47
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 80h
        mov dword ptr [ebp - 0b8h], ecx
        push 8
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 C0 47 E5 FF: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x47
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 DC B6 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xb6
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 41: je 0x58665979
        __asm _emit 0x74
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0bch], eax
        push 0ah
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 CF F1 E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xf1
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0c0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AC C9 E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc9
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58665980
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 0c4h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0c4h]
        mov dword ptr [eax + 8ch], ecx
        push 54h
        ; Exact mapped bytes E8 61 B6 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xb6
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 41: je 0x586659f4
        __asm _emit 0x74
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0c8h], eax
        push 9
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 54 F1 E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf1
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0cch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 31 C9 E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xc9
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x586659fb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 0d0h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0d0h]
        mov dword ptr [eax + 90h], ecx
        push 5ch
        ; Exact mapped bytes E8 E6 B5 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xb5
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 1B: je 0x58665a49
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2C DF E5 FF: call 0x584c3970
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xdf
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x58665a50
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0d4h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0d4h]
        mov dword ptr [ecx + 94h], edx
        push 5ch
        ; Exact mapped bytes E8 91 B5 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xb5
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 1B: je 0x58665a9e
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 D7 DE E5 FF: call 0x584c3970
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xde
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x58665aa5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0d8h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0d8h]
        mov dword ptr [edx + 98h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 0dch], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 91 DF E5 FF: call 0x584c3a70
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xdf
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 0e0h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 73 DF E5 FF: call 0x584c3a70
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xdf
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58665b10
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 9D 00 00 00: jge 0x58665bb7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 E3 B4 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xb4
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 5A: je 0x58665b8b
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0e4h], eax
        mov ecx, 8
        sub ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 CF EF E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xef
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 0ech], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0e8h]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 9A C7 E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc7
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x58665b92
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0f0h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0f0h]
        mov dword ptr [ecx + eax*4 + 9ch], edx
        ; Exact mapped bytes E9 50 FF FF FF: jmp 0x58665b07
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58665bc9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x58665c6e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 2A B4 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xb4
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 58: je 0x58665c42
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 0f4h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 5bh
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 18 EF E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xef
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 0fch], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0f8h]
        push edx
        mov eax, dword ptr [ebp - 0fch]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 E3 C6 E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xc6
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x58665c49
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 100h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [eax + edx*4 + 0a4h], ecx
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x58665bc0
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0a4h]
        mov dword ptr [ebp - 104h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 1A F9 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf9
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0a4h]
        mov dword ptr [ebp - 108h], edx
        push 101h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 F2 F8 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf8
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 3B B3 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xb3
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 6F: je 0x58665d48
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 10ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 DE ED E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xed
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 114h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 118h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0c8h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 3ch
        push edx
        mov eax, dword ptr [ebp - 110h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 114h]
        push edx
        mov eax, dword ptr [ebp - 118h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 9D 5F E6 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x5f
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x58665d4f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 11ch], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 11ch]
        mov dword ptr [edx + 0b4h], eax
        push 0ach
        ; Exact mapped bytes E8 8F B2 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xb2
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 6F: je 0x58665df4
        __asm _emit 0x74
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 120h], edx
        push 2
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 32 ED E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xed
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 12ch], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0c8h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 62h
        push eax
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 128h]
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 F1 5E E6 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x5e
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x58665dfb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 130h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 130h]
        mov dword ptr [eax + 0b8h], ecx
        push 0ach
        ; Exact mapped bytes E8 E3 B1 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xb1
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 72: je 0x58665ea3
        __asm _emit 0x74
        __asm _emit 0x72
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 134h], eax
        push 3
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 86 EC E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 13ch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 140h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 88h
        push ecx
        mov edx, dword ptr [ebp - 138h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov edx, dword ptr [ebp - 140h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 42 5E E6 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x5e
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x58665eaa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 144h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 144h]
        mov dword ptr [ecx + 0bch], edx
        push 0ach
        ; Exact mapped bytes E8 34 B1 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb1
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 75: je 0x58665f55
        __asm _emit 0x74
        __asm _emit 0x75
        push 0
        ; Exact mapped bytes 8B 0D D8 07 96 58: mov ecx, dword ptr [0x589607d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 EB E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xeb
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 14ch], ecx
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 150h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 154h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 8fh
        push edx
        mov eax, dword ptr [ebp - 148h]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        push ecx
        mov edx, dword ptr [ebp - 150h]
        push edx
        mov eax, dword ptr [ebp - 154h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 90 5D E6 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x5d
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x58665f5c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 158h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 158h]
        mov dword ptr [edx + 0c0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 15ch], edx
        push 0
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 AC 98 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x98
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 65 B0 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xb0
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 75: je 0x58666024
        __asm _emit 0x74
        __asm _emit 0x75
        push 4
        ; Exact mapped bytes 8B 0D D8 07 96 58: mov ecx, dword ptr [0x589607d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 EB E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xeb
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 164h], ecx
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 168h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 16ch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 8fh
        push edx
        mov eax, dword ptr [ebp - 160h]
        push eax
        mov ecx, dword ptr [ebp - 164h]
        push ecx
        mov edx, dword ptr [ebp - 168h]
        push edx
        mov eax, dword ptr [ebp - 16ch]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 C1 5C E6 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x5c
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866602b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov ecx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 170h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 170h]
        mov dword ptr [edx + 0c4h], eax
        push 0ach
        ; Exact mapped bytes E8 B3 AF 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xaf
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 67: je 0x586660c8
        __asm _emit 0x74
        __asm _emit 0x67
        push 1eh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 EA E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xea
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 178h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 17ch], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 24h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0a7h
        push edx
        mov eax, dword ptr [ebp - 174h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 178h]
        push edx
        mov eax, dword ptr [ebp - 17ch]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 1D 5C E6 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x586660cf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 180h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 180h]
        mov dword ptr [edx + 100h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 100h]
        mov dword ptr [ebp - 184h], edx
        push 101h
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 A6 F4 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf4
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 EF AE 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xae
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 68: je 0x5866618d
        __asm _emit 0x74
        __asm _emit 0x68
        push 1fh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E E9 E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 18ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 190h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0b3h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0a7h
        push ecx
        mov edx, dword ptr [ebp - 188h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18ch]
        push ecx
        mov edx, dword ptr [ebp - 190h]
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 58 5B E6 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x5b
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x58666194
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 194h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 194h]
        mov dword ptr [ecx + 104h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 104h]
        mov dword ptr [ebp - 198h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 E1 F3 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf3
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 2D AE 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xae
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 2F: je 0x5866621c
        __asm _emit 0x74
        __asm _emit 0x2f
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 10h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 15h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 98h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 0C C1 E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58666226
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 19ch], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 19ch]
        mov dword ptr [ecx + 0c8h], edx
        push 54h
        ; Exact mapped bytes E8 B8 AD 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xad
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 2F: je 0x58666291
        __asm _emit 0x74
        __asm _emit 0x2f
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 10h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 3dh
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 98h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 97 C0 E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xc0
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5866629b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 1a0h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1a0h]
        mov dword ptr [edx + 0cch], eax
        push 0ach
        ; Exact mapped bytes E8 40 AD 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xad
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x58666362
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 1a4h], edx
        push 30h
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 D9 E7 E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe7
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 1ach], ecx
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b0h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b4h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 47h
        push edx
        mov eax, dword ptr [ebp - 1a8h]
        push eax
        mov ecx, dword ptr [ebp - 1ach]
        push ecx
        mov edx, dword ptr [ebp - 1b0h]
        push edx
        mov eax, dword ptr [ebp - 1b4h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 86 59 E6 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x59
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5866636c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov ecx, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 1b8h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1b8h]
        mov dword ptr [edx + 0d0h], eax
        push 0ach
        ; Exact mapped bytes E8 6F AC 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x58666433
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 1bch], edx
        push 31h
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 08 E7 E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xe7
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 1c0h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 1c4h], ecx
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1c8h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1cch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 6bh
        push edx
        mov eax, dword ptr [ebp - 1c0h]
        push eax
        mov ecx, dword ptr [ebp - 1c4h]
        push ecx
        mov edx, dword ptr [ebp - 1c8h]
        push edx
        mov eax, dword ptr [ebp - 1cch]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 B5 58 E6 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x58
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5866643d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov ecx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 1d0h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1d0h]
        mov dword ptr [edx + 0d4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 1d4h], edx
        push 0
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 C8 93 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x93
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d4h]
        mov dword ptr [ebp - 1d8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 AC 93 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x93
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 1dch], eax
        push 101h
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 FD F0 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf0
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 1e0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 DE F0 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xf0
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 1e4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 BF F0 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf0
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        push 0a8h
        ; Exact mapped bytes E8 08 AB 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xab
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 27: je 0x58666539
        __asm _emit 0x74
        __asm _emit 0x27
        push 40h
        push 0
        push 0
        push 0c8h
        push 0c8h
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 AF 59 00 00: call 0x5866bee0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58666543
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 1e8h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1e8h]
        mov dword ptr [ecx + 0f8h], edx
        push 0a4h
        ; Exact mapped bytes E8 98 AA 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xaa
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 27: je 0x586665a9
        __asm _emit 0x74
        __asm _emit 0x27
        push 40h
        push 0
        push 0
        push 14ah
        push 130h
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 5F C3 FB FF: call 0x58622900
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xc3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586665b3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov ecx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 1ech], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ech]
        mov dword ptr [edx + 0fch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 1f0h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 BF EF 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xef
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 AC 00 00 00: mov word ptr [ecx + 0xac], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 D8 00 00 00: mov word ptr [eax + 0xd8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A DA 00 00 00: mov word ptr [edx + 0xda], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 DC 00 00 00: mov word ptr [ecx + 0xdc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 DE 00 00 00: mov word ptr [eax + 0xde], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A E0 00 00 00: mov word ptr [edx + 0xe0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 E2 00 00 00: mov word ptr [ecx + 0xe2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0e4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0e8h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C6 DE F1 FF: call 0x58584530
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xde
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1f4h], edx
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x586666b6
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ecx + 90h]
        ; Exact mapped bytes 74 0B: je 0x5866669a
        __asm _emit 0x74
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 07 F7 E1 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf7
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6E EF E2 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xef
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes 75 02: jne 0x586666b4
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x586666b6
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C2: jmp 0x58666678
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0b0h], 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C3 F8 E1 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf8
        __asm _emit 0xe1
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 DE 00 00 00: mov word ptr [ecx + 0xde], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
