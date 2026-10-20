// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58642540 .. +0x2BCF bytes.
extern "C" __declspec(naked) void FUN_58642540_58642540() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888858eh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 4f0h
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
        movzx eax, byte ptr [ebp + 28h]
        push eax
        mov ecx, dword ptr [ebp + 24h]
        push ecx
        mov edx, dword ptr [ebp + 20h]
        push edx
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
        ; Exact mapped bytes E8 17 A5 F2 FF: call 0x5856cab0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xa5
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588af3e8h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 190h
        ; Exact mapped bytes E8 19 4F E4 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x4f
        __asm _emit 0xe4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 24ch
        ; Exact mapped bytes E8 07 4F E4 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x4f
        __asm _emit 0xe4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 23 E4 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 90h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 64h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 52h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 68h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 1c4h], ecx
        push 77h
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 0E 25 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x25
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A7 43 E4 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x43
        __asm _emit 0xe4
        __asm _emit 0xff
        add eax, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 6ch], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 172h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 70h], eax
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 78h], 140h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 7ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 1c8h], eax
        push 77h
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 C1 24 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4A 9A E4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x9a
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 74h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5864267e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 8D 00 00 00: jge 0x58642715
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 75 E9 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 4A: je 0x586426e9
        __asm _emit 0x74
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 1cch], ecx
        imul edx, dword ptr [ebp - 14h], 9
        add edx, 6eh
        push edx
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 5F 24 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 1d0h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 1d0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 3C FC E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x586426f0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1d4h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1d4h]
        mov dword ptr [eax + edx*4 + 94h], ecx
        ; Exact mapped bytes E9 60 FF FF FF: jmp 0x58642675
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 94h]
        mov dword ptr [ebp - 1d8h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 73 2E 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x2e
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 94h]
        mov dword ptr [ebp - 1dch], edx
        push 101h
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 4B 2E 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x2e
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58642778
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 97 00 00 00: jge 0x58642819
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 7B E8 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 54: je 0x586427ed
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 1e0h], edx
        mov eax, 7eh
        sub eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 64 23 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x23
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 1e4h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 4fh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1bfh
        push edx
        mov eax, dword ptr [ebp - 1e4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 38 FB E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x586427f4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 1e8h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1e8h]
        mov dword ptr [ecx + eax*4 + 9ch], edx
        ; Exact mapped bytes E9 56 FF FF FF: jmp 0x5864276f
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 9ch]
        mov dword ptr [ebp - 1ech], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 6F 2D 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 9ch]
        mov dword ptr [ebp - 1f0h], eax
        push 101h
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 47 2D 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x2d
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5864287c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 8C 00 00 00: jge 0x58642912
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 74 E7 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xe7
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 46: je 0x586428e6
        __asm _emit 0x74
        __asm _emit 0x46
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 22 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x22
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 1f4h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 50h
        push edx
        imul eax, dword ptr [ebp - 14h], 11h
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 1dfh]
        push edx
        push 1
        mov eax, dword ptr [ebp - 1f4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 8F 80 17 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x80
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x586428ed
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 1f8h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1f8h]
        mov dword ptr [ecx + eax*4 + 0a4h], edx
        ; Exact mapped bytes E9 61 FF FF FF: jmp 0x58642873
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0a4h]
        mov dword ptr [ebp - 1fch], eax
        push 1
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 59 88 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x88
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0a4h]
        mov dword ptr [ebp - 200h], eax
        push 2
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 34 88 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x88
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 A0 E6 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xe6
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 50: je 0x586429c4
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 204h], edx
        push 0a6h
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 8D 21 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x21
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 208h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 4fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1f8h
        push ecx
        mov edx, dword ptr [ebp - 208h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 61 F9 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf9
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x586429cb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 20ch], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 20ch]
        mov dword ptr [edx + 0ach], eax
        push 54h
        ; Exact mapped bytes E8 16 E6 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xe6
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 50: je 0x58642a4e
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 210h], edx
        push 0abh
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 03 21 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x21
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 4fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 211h
        push ecx
        mov edx, dword ptr [ebp - 214h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 D7 F8 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xf8
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x58642a55
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 218h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 218h]
        mov dword ptr [edx + 0b0h], eax
        push 0ach
        ; Exact mapped bytes E8 89 E5 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe5
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 71: je 0x58642afc
        __asm _emit 0x74
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 21ch], edx
        push 19h
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 29 20 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x20
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 224h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 228h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 4fh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1f8h
        push eax
        mov ecx, dword ptr [ebp - 220h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 224h]
        push eax
        mov ecx, dword ptr [ebp - 228h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 E9 91 E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x58642b03
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 22ch], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 22ch]
        mov dword ptr [eax + 0b4h], ecx
        push 0ach
        ; Exact mapped bytes E8 DB E4 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xe4
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 73: je 0x58642bac
        __asm _emit 0x74
        __asm _emit 0x73
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 230h], eax
        push 1ah
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 7B 1F E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x1f
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 238h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 23ch], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 4fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 211h
        push ecx
        mov edx, dword ptr [ebp - 234h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 238h]
        push ecx
        mov edx, dword ptr [ebp - 23ch]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 39 91 E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x58642bb3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 240h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 240h]
        mov dword ptr [ecx + 0b8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 244h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 C2 29 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x29
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 248h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 A3 29 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x29
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 24ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 84 29 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 250h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 65 29 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x29
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 254h], eax
        push 0
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 D9 CB E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xcb
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 95 E3 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xe3
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 26: je 0x58642ca5
        __asm _emit 0x74
        __asm _emit 0x26
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 7ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 92h
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 80 F6 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xf6
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x58642cac
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 258h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 258h]
        mov dword ptr [edx + 0bch], eax
        push 54h
        ; Exact mapped bytes E8 35 E3 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe3
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 26: je 0x58642d05
        __asm _emit 0x74
        __asm _emit 0x26
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 7ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 92h
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 20 F6 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf6
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x58642d0c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 25ch], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 25ch]
        mov dword ptr [edx + 0c0h], eax
        push 70h
        ; Exact mapped bytes E8 D5 E2 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xe2
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 48: je 0x58642d87
        __asm _emit 0x74
        __asm _emit 0x48
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 89h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 121h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 7ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0aah
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 2E F6 E3 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf6
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x58642d8e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 260h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 260h]
        mov dword ptr [edx + 0c4h], eax
        push 70h
        ; Exact mapped bytes E8 53 E2 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xe2
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 4A: je 0x58642e0b
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 9bh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 109h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 8eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 92h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 AA F5 E3 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf5
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x58642e12
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov ecx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 264h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 264h]
        mov dword ptr [edx + 0c8h], eax
        push 70h
        ; Exact mapped bytes E8 CF E1 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe1
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 4A: je 0x58642e8f
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0adh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 109h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a0h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 92h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 26 F5 E3 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf5
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x58642e96
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 268h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 268h]
        mov dword ptr [edx + 0cch], eax
        push 70h
        ; Exact mapped bytes E8 4B E1 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe1
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 4A: je 0x58642f13
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0bfh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 109h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0b2h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 92h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 A2 F4 E3 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xf4
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x58642f1a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 26ch], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 26ch]
        mov dword ptr [edx + 0d0h], eax
        push 0fch
        ; Exact mapped bytes E8 C4 E0 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xe0
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 44: je 0x58642f9a
        __asm _emit 0x74
        __asm _emit 0x44
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D 1B E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x1b
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 270h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 60h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 18ch
        push edx
        push 0bh
        mov eax, dword ptr [ebp - 270h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 DE 79 17 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x79
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58642fa4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 274h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 274h]
        mov dword ptr [eax + 0d4h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d4h]
        mov dword ptr [ebp - 278h], eax
        push 7fffffffh
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 9E 6D E7 FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x6d
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 1A E0 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xe0
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 56: je 0x58643056
        __asm _emit 0x74
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 27ch], edx
        push 0b0h
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 01 1B E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x1b
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 280h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 7ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 18eh
        push ecx
        mov edx, dword ptr [ebp - 280h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 D2 F2 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf2
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58643060
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 284h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 284h]
        mov dword ptr [edx + 0d8h], eax
        push 54h
        ; Exact mapped bytes E8 7E DF 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xdf
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 56: je 0x586430f2
        __asm _emit 0x74
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 288h], edx
        push 0b5h
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 65 1A E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x1a
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 28ch], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 7ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1e8h
        push ecx
        mov edx, dword ptr [ebp - 28ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 36 F2 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf2
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586430fc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov ecx, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 290h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 290h]
        mov dword ptr [edx + 0dch], eax
        push 0ach
        ; Exact mapped bytes E8 DF DE 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xde
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 77: je 0x586431b2
        __asm _emit 0x74
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 294h], edx
        push 1bh
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 79 19 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x19
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 298h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 29ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2a0h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 7ah
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 18eh
        push eax
        mov ecx, dword ptr [ebp - 298h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 29ch]
        push eax
        mov ecx, dword ptr [ebp - 2a0h]
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 36 8B E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x8b
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586431bc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 2a4h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2a4h]
        mov dword ptr [eax + 0e0h], ecx
        push 0ach
        ; Exact mapped bytes E8 1F DE 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xde
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 79: je 0x58643274
        __asm _emit 0x74
        __asm _emit 0x79
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 2a8h], eax
        push 1ch
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 B9 18 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x18
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 2ach], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2b0h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2b4h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 7ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1e8h
        push ecx
        mov edx, dword ptr [ebp - 2ach]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2b0h]
        push ecx
        mov edx, dword ptr [ebp - 2b4h]
        push edx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 74 8A E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x8a
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864327e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 2b8h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2b8h]
        mov dword ptr [ecx + 0e4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d8h]
        mov dword ptr [ebp - 2bch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 F4 22 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x22
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [ebp - 2c0h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 D5 22 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x22
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0e0h]
        mov dword ptr [ebp - 2c4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 B6 22 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x22
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0e4h]
        mov dword ptr [ebp - 2c8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 97 22 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x22
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5864332c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0ah
        ; Exact mapped bytes 0F 8D 91 01 00 00: jge 0x586434c7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 C7 DC 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xdc
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 4A: je 0x5864339d
        __asm _emit 0x74
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 2cch], ecx
        push 1dh
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 61 17 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x17
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 2d0h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 2d0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 7B 34 E4 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x34
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586433a7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov eax, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 2d4h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2d4h]
        mov dword ptr [edx + ecx*4 + 0e8h], eax
        push 58h
        ; Exact mapped bytes E8 33 DC 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xdc
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 4A: je 0x58643431
        __asm _emit 0x74
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 2d8h], edx
        push 1eh
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 CD 16 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x16
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 2dch], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 2dch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 E7 33 E4 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x33
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864343b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov ecx, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 2e0h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2e0h]
        mov dword ptr [eax + edx*4 + 110h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0e8h]
        mov dword ptr [ebp - 2e4h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 2e4h]
        ; Exact mapped bytes E8 2F 21 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x21
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0e8h]
        mov dword ptr [ebp - 2e8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 AF C0 E5 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc0
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 110h]
        mov dword ptr [ebp - 2ech], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 8F C0 E5 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xc0
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5C FE FF FF: jmp 0x58643323
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 36 DB 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xdb
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 56: je 0x5864353a
        __asm _emit 0x74
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 2f0h], eax
        push 0ddh
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 1D 16 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x16
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 2f4h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 7ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1b9h
        push edx
        mov eax, dword ptr [ebp - 2f4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 EE ED E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xed
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58643544
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov edx, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 2f8h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2f8h]
        mov dword ptr [eax + 138h], ecx
        push 0ach
        ; Exact mapped bytes E8 97 DA 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xda
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 79: je 0x586435fc
        __asm _emit 0x74
        __asm _emit 0x79
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 2fch], eax
        push 24h
        mov ecx, dword ptr [ebp - 2fch]
        ; Exact mapped bytes E8 31 15 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 300h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 304h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 308h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 7ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1b9h
        push ecx
        mov edx, dword ptr [ebp - 300h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 304h]
        push ecx
        mov edx, dword ptr [ebp - 308h]
        push edx
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 EC 86 E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58643606
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov eax, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 30ch], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 30ch]
        mov dword ptr [ecx + 13ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 138h]
        mov dword ptr [ebp - 310h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 6C 1F 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x1f
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 13ch]
        mov dword ptr [ebp - 314h], eax
        push 101h
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 4D 1F 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x1f
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 99 D9 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd9
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 58: je 0x586436d9
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 318h], edx
        push 0c4h
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 80 14 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x14
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 31ch], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 0dbh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1afh
        push ecx
        mov edx, dword ptr [ebp - 31ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 4F EC E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xec
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586436e3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        mov ecx, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 320h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 320h]
        mov dword ptr [edx + 140h], eax
        push 0ach
        ; Exact mapped bytes E8 F8 D8 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd8
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 7A: je 0x5864379c
        __asm _emit 0x74
        __asm _emit 0x7a
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 324h], edx
        push 1fh
        mov ecx, dword ptr [ebp - 324h]
        ; Exact mapped bytes E8 92 13 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x13
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 328h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 32ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 330h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0dbh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1afh
        push eax
        mov ecx, dword ptr [ebp - 328h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 32ch]
        push eax
        mov ecx, dword ptr [ebp - 330h]
        push ecx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 4C 85 E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586437a6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        mov edx, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 334h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 334h]
        mov dword ptr [eax + 144h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 140h]
        mov dword ptr [ebp - 338h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 CC 1D 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x1d
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 144h]
        mov dword ptr [ebp - 33ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 33ch]
        ; Exact mapped bytes E8 AD 1D 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x1d
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58643816
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D A9 00 00 00: jge 0x586438c9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 DD D7 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xd7
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 5A: je 0x58643897
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 340h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 12ch
        push eax
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 C0 12 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x12
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 344h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0fbh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 56h
        push edx
        mov eax, dword ptr [ebp - 344h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 91 EA E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xea
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586438a1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov edx, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 348h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 348h]
        mov dword ptr [ecx + eax*4 + 148h], edx
        ; Exact mapped bytes E9 44 FF FF FF: jmp 0x5864380d
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 148h]
        mov dword ptr [ebp - 34ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 34ch]
        ; Exact mapped bytes E8 BF 1C 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x1c
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58643904
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 0F 8D 33 01 00 00: jge 0x58643a41
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58643920
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 0F 8D E3 00 00 00: jge 0x58643a0d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 D3 D6 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xd6
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 67: je 0x586439ae
        __asm _emit 0x74
        __asm _emit 0x67
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 350h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        lea ecx, [eax + edx*4 + 132h]
        push ecx
        mov ecx, dword ptr [ebp - 350h]
        ; Exact mapped bytes E8 B1 11 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x11
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 354h], eax
        push 40h
        imul edx, dword ptr [ebp - 14h], 12h
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 101h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 118h
        push edx
        mov eax, dword ptr [ebp - 354h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 7A E9 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586439b8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        mov edx, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 358h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 150h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 358h]
        mov dword ptr [edx + eax*4], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 150h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 35ch], eax
        push 0
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes E8 D9 24 E4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0A FF FF FF: jmp 0x58643917
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 150h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 360h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 360h]
        ; Exact mapped bytes E8 75 1B 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x1b
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 BA FE FF FF: jmp 0x586438fb
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 70h
        ; Exact mapped bytes E8 BC D5 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd5
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 4D: je 0x58643aab
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 10ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0ech
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0fbh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 73h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 0D E9 E3 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58643ab5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 364h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 364h]
        mov dword ptr [edx + 178h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58643ae6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 0F 8D A9 00 00 00: jge 0x58643b99
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 0D D5 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xd5
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f4h], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 5A: je 0x58643b67
        __asm _emit 0x74
        __asm _emit 0x5a
        push 0
        push 0
        push 0ffffffh
        imul edx, dword ptr [ebp - 14h], 12h
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 110h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1dbh
        push edx
        imul eax, dword ptr [ebp - 14h], 12h
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 101h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 134h
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 51 E8 E3 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58643b71
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        mov eax, dword ptr [ebp - 0f8h]
        mov dword ptr [ebp - 368h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 368h]
        mov dword ptr [edx + ecx*4 + 17ch], eax
        ; Exact mapped bytes E9 44 FF FF FF: jmp 0x58643add
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58643bab
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 0F 8D 12 02 00 00: jge 0x58643dc7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 48 D4 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 5E: je 0x58643c30
        __asm _emit 0x74
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 36ch], eax
        push 0d8h
        mov ecx, dword ptr [ebp - 36ch]
        ; Exact mapped bytes E8 2F 0F E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x0f
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 370h], eax
        push 40h
        imul ecx, dword ptr [ebp - 14h], 12h
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 101h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1e8h
        push ecx
        mov edx, dword ptr [ebp - 370h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 F8 E6 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xe6
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58643c3a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 374h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 374h]
        mov dword ptr [eax + edx*4 + 19ch], ecx
        push 0ach
        ; Exact mapped bytes E8 9D D3 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xd3
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 104h], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x58643d01
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 378h], eax
        push 23h
        mov ecx, dword ptr [ebp - 378h]
        ; Exact mapped bytes E8 33 0E E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x0e
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 37ch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 380h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 384h], edx
        push 40h
        imul eax, dword ptr [ebp - 14h], 12h
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 101h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1e8h
        push eax
        mov ecx, dword ptr [ebp - 37ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 380h]
        push eax
        mov ecx, dword ptr [ebp - 384h]
        push ecx
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 E7 7F E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x7f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58643d0b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 108h], 0
        mov edx, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 388h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + eax*4 + 1b0h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 19ch]
        mov dword ptr [ebp - 38ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 38ch]
        ; Exact mapped bytes E8 5F 18 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x18
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 1b0h]
        mov dword ptr [ebp - 390h], edx
        push 101h
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 3C 18 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x18
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 0F BF 05 38 05 96 58: movsx eax, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, 3
        ; Exact mapped bytes 75 41: jne 0x58643dc2
        __asm _emit 0x75
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 19ch]
        mov dword ptr [ebp - 394h], eax
        push 0
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 3F 21 E4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x21
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 1b0h]
        mov dword ptr [ebp - 398h], eax
        push 0
        mov ecx, dword ptr [ebp - 398h]
        ; Exact mapped bytes E8 1F 21 E4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x21
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DB FD FF FF: jmp 0x58643ba2
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 190h
        mov dword ptr [ebp - 39ch], ecx
        push 20h
        mov ecx, dword ptr [ebp - 39ch]
        ; Exact mapped bytes E8 1D 71 00 00: call 0x5864af00
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 7ch
        ; Exact mapped bytes E8 19 D2 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xd2
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10ch], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 34: je 0x58643e35
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 37 0C E4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x0c
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 3a0h], edx
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 3a0h]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 03 5C FD FF: call 0x58619a30
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58643e3f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 110h], 0
        mov ecx, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 3a4h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3a4h]
        mov dword ptr [edx + 1c4h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58643e70
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D AB 00 00 00: jge 0x58643f25
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 83 D1 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xd1
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 5C: je 0x58643ef3
        __asm _emit 0x74
        __asm _emit 0x5c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 3a8h], eax
        mov ecx, 7eh
        sub ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 3a8h]
        ; Exact mapped bytes E8 66 0C E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x0c
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 3ach], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 18fh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1bfh
        push eax
        mov ecx, dword ptr [ebp - 3ach]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 35 E4 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe4
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58643efd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 0
        mov eax, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 3b0h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3b0h]
        mov dword ptr [edx + ecx*4 + 1e8h], eax
        ; Exact mapped bytes E9 42 FF FF FF: jmp 0x58643e67
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 1e8h]
        mov dword ptr [ebp - 3b4h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 3b4h]
        ; Exact mapped bytes E8 63 16 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x16
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 1e8h]
        mov dword ptr [ebp - 3b8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3b8h]
        ; Exact mapped bytes E8 3B 16 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x16
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58643f88
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D A0 00 00 00: jge 0x58644032
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 68 D0 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 11ch], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 4E: je 0x58644000
        __asm _emit 0x74
        __asm _emit 0x4e
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 0B E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x0b
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 3bch], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 190h
        push eax
        imul ecx, dword ptr [ebp - 14h], 11h
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 1dfh]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 3bch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 78 69 17 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x69
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 120h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864400a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 120h], 0
        mov eax, dword ptr [ebp - 120h]
        mov dword ptr [ebp - 3c0h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3c0h]
        mov dword ptr [edx + ecx*4 + 1f0h], eax
        ; Exact mapped bytes E9 4D FF FF FF: jmp 0x58643f7f
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 1f0h]
        mov dword ptr [ebp - 3c4h], ecx
        push 2
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 39 71 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x71
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 1f0h]
        mov dword ptr [ebp - 3c8h], ecx
        push 2
        mov ecx, dword ptr [ebp - 3c8h]
        ; Exact mapped bytes E8 14 71 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x71
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 80 CF 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xcf
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 59: je 0x586440f3
        __asm _emit 0x74
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 3cch], eax
        push 0a6h
        mov ecx, dword ptr [ebp - 3cch]
        ; Exact mapped bytes E8 67 0A E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x0a
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 3d0h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 18fh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1f8h
        push edx
        mov eax, dword ptr [ebp - 3d0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 35 E2 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe2
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586440fd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 128h], 0
        mov edx, dword ptr [ebp - 128h]
        mov dword ptr [ebp - 3d4h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 3d4h]
        mov dword ptr [eax + 1f8h], ecx
        push 54h
        ; Exact mapped bytes E8 E1 CE 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xce
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 12ch], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 74 59: je 0x58644192
        __asm _emit 0x74
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 3d8h], eax
        push 0abh
        mov ecx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes E8 C8 09 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 3dch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 18fh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 211h
        push edx
        mov eax, dword ptr [ebp - 3dch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 96 E1 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xe1
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864419c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 130h], 0
        mov edx, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 3e0h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 3e0h]
        mov dword ptr [eax + 1fch], ecx
        push 0ach
        ; Exact mapped bytes E8 3F CE 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xce
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 134h], eax
        mov byte ptr [ebp - 4], 26h
        cmp dword ptr [ebp - 134h], 0
        ; Exact mapped bytes 74 7B: je 0x58644256
        __asm _emit 0x74
        __asm _emit 0x7b
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 3e4h], eax
        push 19h
        mov ecx, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes E8 D9 08 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x08
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 3e8h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3ech], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3f0h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 18fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1f8h
        push ecx
        mov edx, dword ptr [ebp - 3e8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 3ech]
        push ecx
        mov edx, dword ptr [ebp - 3f0h]
        push edx
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 92 7A E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x7a
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58644260
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 138h], 0
        mov eax, dword ptr [ebp - 138h]
        mov dword ptr [ebp - 3f4h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3f4h]
        mov dword ptr [ecx + 200h], edx
        push 0ach
        ; Exact mapped bytes E8 7B CD 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xcd
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 13ch], eax
        mov byte ptr [ebp - 4], 27h
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 74 7B: je 0x5864431a
        __asm _emit 0x74
        __asm _emit 0x7b
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 3f8h], ecx
        push 1ah
        mov ecx, dword ptr [ebp - 3f8h]
        ; Exact mapped bytes E8 15 08 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 3fch], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 400h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 404h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 18fh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 211h
        push edx
        mov eax, dword ptr [ebp - 3fch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 400h]
        push edx
        mov eax, dword ptr [ebp - 404h]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 CE 79 E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x79
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58644324
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 140h], 0
        mov ecx, dword ptr [ebp - 140h]
        mov dword ptr [ebp - 408h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 408h]
        mov dword ptr [edx + 204h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1f8h]
        mov dword ptr [ebp - 40ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes E8 4E 12 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x12
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1fch]
        mov dword ptr [ebp - 410h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 410h]
        ; Exact mapped bytes E8 2F 12 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x12
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 200h]
        mov dword ptr [ebp - 414h], eax
        push 101h
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 10 12 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x12
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 204h]
        mov dword ptr [ebp - 418h], edx
        push 101h
        mov ecx, dword ptr [ebp - 418h]
        ; Exact mapped bytes E8 F1 11 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x11
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 204h]
        mov dword ptr [ebp - 41ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 41ch]
        ; Exact mapped bytes E8 65 B4 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xb4
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 21 CC 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xcc
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 144h], eax
        mov byte ptr [ebp - 4], 28h
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 74 53: je 0x5864444c
        __asm _emit 0x74
        __asm _emit 0x53
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 420h], eax
        push 75h
        mov ecx, dword ptr [ebp - 420h]
        ; Exact mapped bytes E8 0B 07 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x07
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 424h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1abh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 40h
        push edx
        mov eax, dword ptr [ebp - 424h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 DC DE E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xde
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58644456
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 148h], 0
        mov edx, dword ptr [ebp - 148h]
        mov dword ptr [ebp - 428h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 428h]
        mov dword ptr [eax + 208h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 208h]
        mov dword ptr [ebp - 42ch], eax
        push 0
        mov ecx, dword ptr [ebp - 42ch]
        ; Exact mapped bytes E8 4F 1A E4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x1a
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586444a4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 8D A3 00 00 00: jge 0x58644551
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 4C CB 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xcb
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14ch], eax
        mov byte ptr [ebp - 4], 29h
        cmp dword ptr [ebp - 14ch], 0
        ; Exact mapped bytes 74 51: je 0x5864451f
        __asm _emit 0x74
        __asm _emit 0x51
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 05 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 430h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 1a1h
        push edx
        mov eax, dword ptr [ebp - 14h]
        shl eax, 5
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 136h]
        push edx
        push 3
        mov eax, dword ptr [ebp - 430h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 59 64 17 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x64
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 150h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58644529
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 150h], 0
        mov edx, dword ptr [ebp - 150h]
        mov dword ptr [ebp - 434h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 434h]
        mov dword ptr [ecx + eax*4 + 20ch], edx
        ; Exact mapped bytes E9 4A FF FF FF: jmp 0x5864449b
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58644563
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 0F 8D 51 01 00 00: jge 0x586446be
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5864457f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 0F 8D 01 01 00 00: jge 0x5864468a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 74 CA 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 154h], eax
        mov byte ptr [ebp - 4], 2ah
        cmp dword ptr [ebp - 154h], 0
        ; Exact mapped bytes 74 5F: je 0x58644605
        __asm _emit 0x74
        __asm _emit 0x5f
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 438h], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 2eh
        push ecx
        mov ecx, dword ptr [ebp - 438h]
        ; Exact mapped bytes E8 09 05 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 43ch], eax
        push 40h
        mov edx, dword ptr [ebp - 14h]
        shl edx, 4
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 1c3h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4eh
        push edx
        mov eax, dword ptr [ebp - 43ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 13 22 E4 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x22
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864460f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 158h], 0
        mov edx, dword ptr [ebp - 158h]
        mov dword ptr [ebp - 440h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 218h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 440h]
        mov dword ptr [edx + eax*4], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 218h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 444h], eax
        push 0
        mov ecx, dword ptr [ebp - 444h]
        ; Exact mapped bytes E8 F2 AE E5 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xae
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 218h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 448h], edx
        push 0
        mov ecx, dword ptr [ebp - 448h]
        ; Exact mapped bytes E8 BC B1 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xb1
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EC FE FF FF: jmp 0x58644576
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 218h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 44ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 44ch]
        ; Exact mapped bytes E8 F8 0E 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x0e
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 9C FE FF FF: jmp 0x5864455a
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 94h
        ; Exact mapped bytes E8 3C C9 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xc9
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 15ch], eax
        mov byte ptr [ebp - 4], 2bh
        cmp dword ptr [ebp - 15ch], 0
        ; Exact mapped bytes 74 4B: je 0x58644729
        __asm _emit 0x74
        __asm _emit 0x4b
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 20ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0cah
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1c4h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 70h
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
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 7F F9 ED FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf9
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58644733
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 160h], 0
        mov eax, dword ptr [ebp - 160h]
        mov dword ptr [ebp - 450h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 450h]
        mov dword ptr [ecx + 240h], edx
        push 94h
        ; Exact mapped bytes E8 A8 C8 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xc8
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 164h], eax
        mov byte ptr [ebp - 4], 2ch
        cmp dword ptr [ebp - 164h], 0
        ; Exact mapped bytes 74 4D: je 0x586447bf
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 20ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0feh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1c4h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0d8h
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
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 E9 F8 ED FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586447c9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 168h], 0
        mov eax, dword ptr [ebp - 168h]
        mov dword ptr [ebp - 454h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 454h]
        mov dword ptr [ecx + 244h], edx
        push 94h
        ; Exact mapped bytes E8 12 C8 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc8
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 16ch], eax
        mov byte ptr [ebp - 4], 2dh
        cmp dword ptr [ebp - 16ch], 0
        ; Exact mapped bytes 74 4D: je 0x58644855
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 20ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 17ch
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1c4h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 10dh
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
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 53 F8 ED FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf8
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864485f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 170h], 0
        mov eax, dword ptr [ebp - 170h]
        mov dword ptr [ebp - 458h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 458h]
        mov dword ptr [ecx + 248h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 240h]
        mov dword ptr [ebp - 45ch], ecx
        push 0ff00h
        mov ecx, dword ptr [ebp - 45ch]
        ; Exact mapped bytes E8 23 83 F0 FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x83
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 244h]
        mov dword ptr [ebp - 460h], eax
        push 0ff00h
        mov ecx, dword ptr [ebp - 460h]
        ; Exact mapped bytes E8 04 83 F0 FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x83
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 248h]
        mov dword ptr [ebp - 464h], edx
        push 0ff00h
        mov ecx, dword ptr [ebp - 464h]
        ; Exact mapped bytes E8 E5 82 F0 FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x82
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        add eax, 24ch
        mov dword ptr [ebp - 468h], eax
        push 20h
        mov ecx, dword ptr [ebp - 468h]
        ; Exact mapped bytes E8 EA 57 E7 FF: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x57
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 06 C7 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xc7
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 174h], eax
        mov byte ptr [ebp - 4], 2eh
        cmp dword ptr [ebp - 174h], 0
        ; Exact mapped bytes 74 50: je 0x58644964
        __asm _emit 0x74
        __asm _emit 0x50
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1f8h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 213h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 1eah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 19dh
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 54 DA E3 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xda
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864496e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 178h], 0
        mov ecx, dword ptr [ebp - 178h]
        mov dword ptr [ebp - 46ch], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 46ch]
        mov dword ptr [edx + 264h], eax
        push 54h
        ; Exact mapped bytes E8 70 C6 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xc6
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 17ch], eax
        mov byte ptr [ebp - 4], 2fh
        cmp dword ptr [ebp - 17ch], 0
        ; Exact mapped bytes 74 58: je 0x58644a02
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 470h], edx
        push 0ech
        mov ecx, dword ptr [ebp - 470h]
        ; Exact mapped bytes E8 57 01 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 474h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 1feh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1c2h
        push ecx
        mov edx, dword ptr [ebp - 474h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 26 D9 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xd9
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58644a0c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 180h], 0
        mov ecx, dword ptr [ebp - 180h]
        mov dword ptr [ebp - 478h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 478h]
        mov dword ptr [edx + 268h], eax
        push 54h
        ; Exact mapped bytes E8 D2 C5 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xc5
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 184h], eax
        mov byte ptr [ebp - 4], 30h
        cmp dword ptr [ebp - 184h], 0
        ; Exact mapped bytes 74 58: je 0x58644aa0
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 47ch], edx
        push 10fh
        mov ecx, dword ptr [ebp - 47ch]
        ; Exact mapped bytes E8 B9 00 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 480h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 1feh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1a4h
        push ecx
        mov edx, dword ptr [ebp - 480h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 88 D8 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58644aaa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 188h], 0
        mov ecx, dword ptr [ebp - 188h]
        mov dword ptr [ebp - 484h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 484h]
        mov dword ptr [edx + 26ch], eax
        push 54h
        ; Exact mapped bytes E8 34 C5 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xc5
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18ch], eax
        mov byte ptr [ebp - 4], 31h
        cmp dword ptr [ebp - 18ch], 0
        ; Exact mapped bytes 74 58: je 0x58644b3e
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 488h], edx
        push 0d3h
        mov ecx, dword ptr [ebp - 488h]
        ; Exact mapped bytes E8 1B 00 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 48ch], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 1feh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1f4h
        push ecx
        mov edx, dword ptr [ebp - 48ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 EA D7 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xd7
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58644b48
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 190h], 0
        mov ecx, dword ptr [ebp - 190h]
        mov dword ptr [ebp - 490h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 490h]
        mov dword ptr [edx + 270h], eax
        push 0ach
        ; Exact mapped bytes E8 93 C4 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xc4
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 194h], eax
        mov byte ptr [ebp - 4], 32h
        cmp dword ptr [ebp - 194h], 0
        ; Exact mapped bytes 74 7A: je 0x58644c01
        __asm _emit 0x74
        __asm _emit 0x7a
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 494h], edx
        push 27h
        mov ecx, dword ptr [ebp - 494h]
        ; Exact mapped bytes E8 2D FF E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 498h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 49ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4a0h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 1feh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1c2h
        push eax
        mov ecx, dword ptr [ebp - 498h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 49ch]
        push eax
        mov ecx, dword ptr [ebp - 4a0h]
        push ecx
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 E7 70 E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x70
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58644c0b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 198h], 0
        mov edx, dword ptr [ebp - 198h]
        mov dword ptr [ebp - 4a4h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4a4h]
        mov dword ptr [eax + 27ch], ecx
        push 0ach
        ; Exact mapped bytes E8 D0 C3 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xc3
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 19ch], eax
        mov byte ptr [ebp - 4], 33h
        cmp dword ptr [ebp - 19ch], 0
        ; Exact mapped bytes 74 7B: je 0x58644cc5
        __asm _emit 0x74
        __asm _emit 0x7b
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 4a8h], eax
        push 35h
        mov ecx, dword ptr [ebp - 4a8h]
        ; Exact mapped bytes E8 6A FE E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 4ach], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4b0h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4b4h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 1feh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1a4h
        push ecx
        mov edx, dword ptr [ebp - 4ach]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4b0h]
        push ecx
        mov edx, dword ptr [ebp - 4b4h]
        push edx
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 23 70 E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x70
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58644ccf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a0h], 0
        mov eax, dword ptr [ebp - 1a0h]
        mov dword ptr [ebp - 4b8h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4b8h]
        mov dword ptr [ecx + 280h], edx
        push 0ach
        ; Exact mapped bytes E8 0C C3 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xc3
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1a4h], eax
        mov byte ptr [ebp - 4], 34h
        cmp dword ptr [ebp - 1a4h], 0
        ; Exact mapped bytes 74 7B: je 0x58644d89
        __asm _emit 0x74
        __asm _emit 0x7b
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 4bch], ecx
        push 22h
        mov ecx, dword ptr [ebp - 4bch]
        ; Exact mapped bytes E8 A6 FD E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 4c0h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4c4h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4c8h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1feh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1f4h
        push edx
        mov eax, dword ptr [ebp - 4c0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 4c4h]
        push edx
        mov eax, dword ptr [ebp - 4c8h]
        push eax
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 5F 6F E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x6f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58644d93
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a8h], 0
        mov ecx, dword ptr [ebp - 1a8h]
        mov dword ptr [ebp - 4cch], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4cch]
        mov dword ptr [edx + 284h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 268h]
        mov dword ptr [ebp - 4d0h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 4d0h]
        ; Exact mapped bytes E8 DF 07 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x07
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 26ch]
        mov dword ptr [ebp - 4d4h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 4d4h]
        ; Exact mapped bytes E8 C0 07 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x07
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 270h]
        mov dword ptr [ebp - 4d8h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 4d8h]
        ; Exact mapped bytes E8 A1 07 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x07
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 290h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 294h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 298h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 29ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2a0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2a4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2a8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2ach], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2b0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2b4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 308h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 30ch], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 328h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1c8h], 0
        push 0bch
        ; Exact mapped bytes E8 3B C1 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc1
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ach], eax
        mov byte ptr [ebp - 4], 35h
        cmp dword ptr [ebp - 1ach], 0
        ; Exact mapped bytes 74 25: je 0x58644f04
        __asm _emit 0x74
        __asm _emit 0x25
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 54 27 F4 FF: call 0x58587650
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x27
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 1b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58644f0e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b0h], 0
        mov eax, dword ptr [ebp - 1b0h]
        mov dword ptr [ebp - 4dch], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4dch]
        mov dword ptr [ecx + 1cch], edx
        push 0ach
        ; Exact mapped bytes E8 CD C0 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xc0
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1b4h], eax
        mov byte ptr [ebp - 4], 36h
        cmp dword ptr [ebp - 1b4h], 0
        ; Exact mapped bytes 74 6C: je 0x58644fb9
        __asm _emit 0x74
        __asm _emit 0x6c
        push 38h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 FB E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xfb
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 4e0h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4e4h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4e8h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 6bh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 196h
        push ecx
        mov edx, dword ptr [ebp - 4e0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4e4h]
        push ecx
        mov edx, dword ptr [ebp - 4e8h]
        push edx
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 2F 6D E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x6d
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58644fc3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b8h], 0
        mov eax, dword ptr [ebp - 1b8h]
        mov dword ptr [ebp - 4ech], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4ech]
        mov dword ptr [ecx + 1d0h], edx
        push 0ach
        ; Exact mapped bytes E8 18 C0 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xc0
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1bch], eax
        mov byte ptr [ebp - 4], 37h
        cmp dword ptr [ebp - 1bch], 0
        ; Exact mapped bytes 74 6C: je 0x5864506e
        __asm _emit 0x74
        __asm _emit 0x6c
        push 39h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 FA E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 4f0h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4f4h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4f8h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 6bh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1d4h
        push ecx
        mov edx, dword ptr [ebp - 4f0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4f4h]
        push ecx
        mov edx, dword ptr [ebp - 4f8h]
        push edx
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 7A 6C E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x6c
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58645078
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c0h], 0
        mov eax, dword ptr [ebp - 1c0h]
        mov dword ptr [ebp - 4fch], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4fch]
        mov dword ptr [ecx + 1d4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1d8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1dch], 0
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 1e0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1e4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 32ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 309h], 0
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 77 0C E4 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x0c
        __asm _emit 0xe4
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9D 0E E4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x0e
        __asm _emit 0xe4
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
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
