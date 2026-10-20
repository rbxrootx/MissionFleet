// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586EBD40 .. +0xA81 bytes.
extern "C" __declspec(naked) void FUN_586ebd40_586EBD40() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888cc51h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 13ch
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
        ; Exact mapped bytes E8 E4 64 D9 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x64
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b31d8h
        mov dword ptr [ebp - 20h], 0
        push 198h
        ; Exact mapped bytes E8 57 52 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x52
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 16: je 0x586ebdd3
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588b31bch
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 E2 45 09 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x586ebdda
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 88h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [edx + 60h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586ebe05
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 88 00 00 00: jge 0x586ebe97
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 EE 51 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x51
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 48: je 0x586ebe6e
        __asm _emit 0x74
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2
        push ecx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 DC 8C D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x8c
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        push 40h
        push 99h
        push 0adh
        mov edx, dword ptr [ebp - 90h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 B7 64 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x64
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586ebe75
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 94h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [eax + edx*4 + 64h], ecx
        ; Exact mapped bytes E9 65 FF FF FF: jmp 0x586ebdfc
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586ebea9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 85 00 00 00: jge 0x586ebf38
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 4A 51 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x51
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 45: je 0x586ebf0f
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 98h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 3B 8C D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x8c
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        push 40h
        push 99h
        push 0adh
        mov eax, dword ptr [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 16 64 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x64
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x586ebf16
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0a0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ecx + eax*4 + 6ch], edx
        ; Exact mapped bytes E9 68 FF FF FF: jmp 0x586ebea0
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 6ch]
        mov dword ptr [ebp - 0a4h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 53 96 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 6ch]
        mov dword ptr [ebp - 0a8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 2E 96 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 64h]
        mov dword ptr [ebp - 0ach], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 09 96 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 64h]
        mov dword ptr [ebp - 0b0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 E4 95 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x586ebfdf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 9
        ; Exact mapped bytes 0F 8D E6 02 00 00: jge 0x586ec2cf
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax*4 + 58902f9ch]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 18h], 6
        ; Exact mapped bytes 74 10: je 0x586ec00c
        __asm _emit 0x74
        __asm _emit 0x10
        mov dword ptr [ebp - 2ch], 0adh
        mov dword ptr [ebp - 28h], 99h
        ; Exact mapped bytes EB 0E: jmp 0x586ec01a
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov dword ptr [ebp - 2ch], 11ch
        mov dword ptr [ebp - 28h], 0edh
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586ec02c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 20h
        ; Exact mapped bytes 0F 8D 94 02 00 00: jge 0x586ec2ca
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 1ch]
        movzx edx, byte ptr [eax + ecx + 58902fc0h]
        test edx, edx
        ; Exact mapped bytes 75 3C: jne 0x586ec087
        __asm _emit 0x75
        __asm _emit 0x3c
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586ec05d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 1F: jge 0x586ec082
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 18h]
        shl ecx, 8
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 74h]
        mov ecx, dword ptr [ebp - 1ch]
        lea edx, [eax + ecx*8]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + eax*4], 0
        ; Exact mapped bytes EB D2: jmp 0x586ec054
        __asm _emit 0xeb
        __asm _emit 0xd2
        ; Exact mapped bytes E9 3E 02 00 00: jmp 0x586ec2c5
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 76 4F 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x4f
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 43: je 0x586ec0e1
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 0b4h], edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 67 8A D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x8a
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        push 40h
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 0b8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 44 62 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x62
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586ec0e8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0bch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 18h]
        shl eax, 8
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 74h]
        mov eax, dword ptr [ebp - 1ch]
        lea ecx, [edx + eax*8]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 0bch]
        mov dword ptr [ecx + eax], edx
        mov eax, dword ptr [ebp - 18h]
        shl eax, 8
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 74h]
        mov eax, dword ptr [ebp - 1ch]
        lea ecx, [edx + eax*8]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 0c0h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 63 94 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x94
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        shl edx, 8
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 74h]
        mov edx, dword ptr [ebp - 1ch]
        lea eax, [ecx + edx*8]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 0c4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 62 9D D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x9d
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 18h]
        shl edx, 5
        mov eax, dword ptr [ebp - 1ch]
        movzx ecx, byte ptr [edx + eax + 58902fc0h]
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 02 01 00 00: jne 0x586ec2a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 5C 4E 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x4e
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 43: je 0x586ec1fb
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0c8h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 4D 89 D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        push 40h
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 2A 61 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x61
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x586ec202
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        shl ecx, 8
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 74h]
        mov ecx, dword ptr [ebp - 1ch]
        lea edx, [eax + ecx*8]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 0d0h]
        mov dword ptr [edx + eax], ecx
        mov edx, dword ptr [ebp - 18h]
        shl edx, 8
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 74h]
        mov edx, dword ptr [ebp - 1ch]
        lea eax, [ecx + edx*8]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 0d4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 49 93 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x93
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        shl eax, 8
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 74h]
        mov eax, dword ptr [ebp - 1ch]
        lea ecx, [edx + eax*8]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 0d8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 48 9C D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x9c
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB 22: jmp 0x586ec2c5
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 18h]
        shl edx, 8
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 74h]
        mov edx, dword ptr [ebp - 1ch]
        lea eax, [ecx + edx*8]
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [eax + ecx], 0
        ; Exact mapped bytes E9 59 FD FF FF: jmp 0x586ec023
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 07 FD FF FF: jmp 0x586ebfd6
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586ec2e1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 0F 8D E6 01 00 00: jge 0x586ec4d1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x586ec2fd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 0F 8D 0C 01 00 00: jge 0x586ec413
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 F6 4C 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x4c
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 19: je 0x586ec337
        __asm _emit 0x74
        __asm _emit 0x19
        push 40h
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 DE A4 D9 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xa4
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586ec33e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 0dch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 974h]
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 0dch]
        mov dword ptr [edx + eax*4], ecx
        push 58h
        ; Exact mapped bytes E8 99 4C 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x4c
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 19: je 0x586ec394
        __asm _emit 0x74
        __asm _emit 0x19
        push 40h
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 81 A4 D9 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xa4
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x586ec39b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 0a74h]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 0e0h]
        mov dword ptr [eax + ecx*4], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 974h]
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0e4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 F9 9A D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x9a
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 0a74h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0e8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 D3 9A D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x9a
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E1 FE FF FF: jmp 0x586ec2f4
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 974h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 0ech], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 6F 91 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x91
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 974h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 0f0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 41 91 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x91
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 0a74h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 0f4h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 13 91 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x91
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 0a74h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 0f8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 E5 90 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x90
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 07 FE FF FF: jmp 0x586ec2d8
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 29 4B 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x4b
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 69: je 0x586ec554
        __asm _emit 0x74
        __asm _emit 0x69
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0fch], eax
        push 17h
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 CC 85 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 104h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 108h], edx
        push 40h
        push 19fh
        push 0c0h
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 104h]
        push edx
        mov eax, dword ptr [ebp - 108h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 91 F7 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xf7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586ec55b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 10ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10ch]
        mov dword ptr [edx + 0b7ch], eax
        push 0ach
        ; Exact mapped bytes E8 83 4A 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x4a
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 68: je 0x586ec5f9
        __asm _emit 0x74
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 110h], edx
        push 0
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 26 85 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 11ch], ecx
        push 40h
        push 19fh
        push 1d2h
        mov edx, dword ptr [ebp - 114h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        mov edx, dword ptr [ebp - 11ch]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 EC F6 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x586ec600
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 120h]
        mov dword ptr [ecx + 0b88h], edx
        push 0ach
        ; Exact mapped bytes E8 DE 49 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x49
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 68: je 0x586ec69e
        __asm _emit 0x74
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 124h], ecx
        push 1
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 81 84 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 12ch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 130h], eax
        push 40h
        push 19fh
        push 201h
        mov ecx, dword ptr [ebp - 128h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 47 F6 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586ec6a5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov edx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 134h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [eax + 0b80h], ecx
        push 0ach
        ; Exact mapped bytes E8 39 49 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x49
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 6C: je 0x586ec747
        __asm _emit 0x74
        __asm _emit 0x6c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 138h], eax
        push 2
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 DC 83 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x83
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 140h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 144h], edx
        push 40h
        push 19fh
        push 232h
        mov eax, dword ptr [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 140h]
        push edx
        mov eax, dword ptr [ebp - 144h]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 A1 F5 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf5
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ec751
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 148h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 148h]
        mov dword ptr [edx + 0b84h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 0b74h], 0
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 0b75h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b78h], 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F5 97 D9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x97
        __asm _emit 0xd9
        __asm _emit 0xff
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BB 95 D9 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x95
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
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
