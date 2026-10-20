// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867FE70 .. +0x1401 bytes.
extern "C" __declspec(naked) void FUN_5867fe70_5867FE70() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58889f8eh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 24ch
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
        ; Exact mapped bytes E8 74 FD FF FF: call 0x5867fc30
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b005ch
        push 54h
        ; Exact mapped bytes E8 31 11 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x11
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 3B: je 0x5867ff1e
        __asm _emit 0x74
        __asm _emit 0x3b
        push 226h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D 4C E0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x4c
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        push 7d0h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0f8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 07 24 E0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x24
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5867ff25
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0fch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0fch]
        mov dword ptr [eax + 970h], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5867ff53
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 0F 8D 65 03 00 00: jge 0x586802c2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 0a8h], 0
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp - 14h]
        mov byte ptr [edx + 0c8h], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 0d0h], 0
        push 58h
        ; Exact mapped bytes E8 71 10 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x10
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 3C: je 0x5867ffdf
        __asm _emit 0x74
        __asm _emit 0x3c
        push 13h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 4B E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x4b
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        push 834h
        mov edx, dword ptr [ebp + 10h]
        push edx
        imul eax, dword ptr [ebp - 14h], 2ah
        add eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 36 68 E0 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5867ffe6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 104h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [edx + ecx*4 + 9e0h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 9e0h]
        mov dword ptr [ebp - 108h], eax
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 2A F5 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf5
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 D3 0F 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x0f
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 62: je 0x586800a3
        __asm _emit 0x74
        __asm _emit 0x62
        push 1eh
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 4A E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x4a
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 110h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 114h], edx
        push 834h
        mov eax, dword ptr [ebp + 10h]
        push eax
        imul ecx, dword ptr [ebp - 14h], 2ah
        add ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        mov edx, dword ptr [ebp - 114h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 42 BC E4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xbc
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586800aa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 118h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 118h]
        mov dword ptr [edx + ecx*4 + 0a20h], eax
        push 0ach
        ; Exact mapped bytes E8 30 0F 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x0f
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 66: je 0x5868014a
        __asm _emit 0x74
        __asm _emit 0x66
        push 1ch
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF 49 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x49
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 120h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 124h], edx
        push 834h
        mov eax, dword ptr [ebp + 10h]
        push eax
        imul ecx, dword ptr [ebp - 14h], 2ah
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 2]
        push eax
        mov ecx, dword ptr [ebp - 11ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 120h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 9B BB E4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xbb
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58680151
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 128h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 128h]
        mov dword ptr [ecx + eax*4 + 978h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 978h]
        mov dword ptr [ebp - 12ch], edx
        push 0
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 FF 5D E0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x5d
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 6B 0E 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x0e
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 3F: je 0x586801e8
        __asm _emit 0x74
        __asm _emit 0x3f
        push 219h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 49 E0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x49
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        push 834h
        mov eax, dword ptr [ebp + 10h]
        push eax
        imul ecx, dword ptr [ebp - 14h], 2ah
        add ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 130h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 3D 21 E0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x21
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586801ef
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 134h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [eax + edx*4 + 0a00h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0a00h]
        mov dword ptr [ebp - 138h], ecx
        push 0
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 61 5D E0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x5d
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        push 6ch
        ; Exact mapped bytes E8 CD 0D 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x0d
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 3C: je 0x58680283
        __asm _emit 0x74
        __asm _emit 0x3c
        push 11h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C 48 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x48
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        push 7d1h
        mov edx, dword ptr [ebp + 10h]
        push edx
        imul eax, dword ptr [ebp - 14h], 2ah
        add eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 82 46 EB FF: call 0x58534900
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x46
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5868028a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 140h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 140h]
        mov dword ptr [edx + ecx*4 + 9c0h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx*4 + 9c0h]
        ; Exact mapped bytes E8 74 4A EB FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x4a
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 88 FC FF FF: jmp 0x5867ff4a
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 39h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 48 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x48
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 998h], eax
        push 3ah
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB 47 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x47
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 99ch], eax
        push 0ach
        ; Exact mapped bytes E8 0C 0D 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x0d
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 68: je 0x58680370
        __asm _emit 0x74
        __asm _emit 0x68
        push 19h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 47 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x47
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 148h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 14ch], ecx
        push 834h
        mov edx, dword ptr [ebp + 10h]
        add edx, 82h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 112h
        push eax
        mov ecx, dword ptr [ebp - 144h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 148h]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 75 B9 E4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xb9
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58680377
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 150h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 150h]
        mov dword ptr [eax + 0a78h], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586803a5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 0F 8D A8 00 00 00: jge 0x58680457
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 4B 0C 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x0c
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 3E: je 0x58680407
        __asm _emit 0x74
        __asm _emit 0x3e
        push 21h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 46 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x46
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 70h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0eeh
        push ecx
        push 3
        mov edx, dword ptr [ebp - 154h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 6E A5 13 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xa5
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x5868040e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 158h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 158h]
        mov dword ptr [eax + edx*4 + 0a50h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0a50h]
        mov dword ptr [ebp - 15ch], ecx
        push 834h
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 2F 5A E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x5a
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 45 FF FF FF: jmp 0x5868039c
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58680469
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 8D AC 00 00 00: jge 0x5868051f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 87 0B 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x0b
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 42: je 0x586804cf
        __asm _emit 0x74
        __asm _emit 0x42
        push 21h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 46 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x46
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        imul eax, dword ptr [ebp - 14h], 0ah
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 44h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0e0h
        push eax
        push 4
        mov ecx, dword ptr [ebp - 160h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 A6 A4 13 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xa4
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586804d6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 164h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 164h]
        mov dword ptr [edx + ecx*4 + 0a68h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0a68h]
        mov dword ptr [ebp - 168h], eax
        push 834h
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 67 59 E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x59
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 41 FF FF FF: jmp 0x58680460
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0fch
        ; Exact mapped bytes E8 DB 0A 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x0a
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 3E: je 0x58680577
        __asm _emit 0x74
        __asm _emit 0x3e
        push 20h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A 45 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x45
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 70h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 11ah
        push edx
        push 2
        mov eax, dword ptr [ebp - 16ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 FE A3 13 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xa3
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x5868057e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 170h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 170h]
        mov dword ptr [eax + 0a48h], ecx
        push 0fch
        ; Exact mapped bytes E8 60 0A 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x0a
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 3D: je 0x586805f1
        __asm _emit 0x74
        __asm _emit 0x3d
        push 21h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F 45 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x45
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 70h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 400h
        push eax
        push 1
        mov ecx, dword ptr [ebp - 174h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 84 A3 13 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586805f8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 178h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 178h]
        mov dword ptr [ecx + 0a44h], edx
        push 0fch
        ; Exact mapped bytes E8 E6 09 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x09
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 3E: je 0x5868066c
        __asm _emit 0x74
        __asm _emit 0x3e
        push 21h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 44 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 70h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0d7h
        push ecx
        push 2
        mov edx, dword ptr [ebp - 17ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 09 A3 13 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa3
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x58680673
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 180h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 180h]
        mov dword ptr [edx + 0a4ch], eax
        push 0fch
        ; Exact mapped bytes E8 6B 09 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x09
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 3E: je 0x586806e7
        __asm _emit 0x74
        __asm _emit 0x3e
        push 21h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 44 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x44
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 70h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0c8h
        push edx
        push 2
        mov eax, dword ptr [ebp - 184h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 8E A2 13 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xa2
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586806ee
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov edx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 188h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 188h]
        mov dword ptr [eax + 0a60h], ecx
        push 70h
        ; Exact mapped bytes E8 F3 08 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x08
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 46: je 0x58680767
        __asm _emit 0x74
        __asm _emit 0x46
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 78h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0d7h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 70h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0d0h
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
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 51 1C E0 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58680771
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 18ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18ch]
        mov dword ptr [eax + 0a64h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a44h]
        mov dword ptr [ebp - 190h], eax
        push 834h
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 D1 56 E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x56
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a48h]
        mov dword ptr [ebp - 194h], edx
        push 834h
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 B2 56 E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x56
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4ch]
        mov dword ptr [ebp - 198h], ecx
        push 834h
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 93 56 E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x56
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a60h]
        mov dword ptr [ebp - 19ch], eax
        push 834h
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 74 56 E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x56
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a64h]
        mov dword ptr [ebp - 1a0h], edx
        push 834h
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 55 56 E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x56
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a64h]
        mov dword ptr [ebp - 1a4h], ecx
        push 834h
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 36 56 E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x56
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a64h]
        mov dword ptr [ebp - 1a8h], eax
        push 588b0040h
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 37 58 E0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x58
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 90 07 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 6D: je 0x586808f7
        __asm _emit 0x74
        __asm _emit 0x6d
        push 15h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 42 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b0h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b4h], edx
        push 834h
        mov eax, dword ptr [ebp + 10h]
        add eax, 65h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 130h
        push ecx
        mov edx, dword ptr [ebp - 1ach]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1b0h]
        push ecx
        mov edx, dword ptr [ebp - 1b4h]
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 F1 B3 E4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xb3
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58680901
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 1b8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1b8h]
        mov dword ptr [ecx + 0a80h], edx
        push 0ach
        ; Exact mapped bytes E8 DA 06 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x06
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 6B: je 0x586809ab
        __asm _emit 0x74
        __asm _emit 0x6b
        push 14h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 41 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x41
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1bch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1c0h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1c4h], ecx
        push 834h
        mov edx, dword ptr [ebp + 10h]
        add edx, 73h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 130h
        push eax
        mov ecx, dword ptr [ebp - 1bch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1c0h]
        push eax
        mov ecx, dword ptr [ebp - 1c4h]
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 3D B3 E4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xb3
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586809b5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 1c8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1c8h]
        mov dword ptr [eax + 0a84h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a80h]
        mov dword ptr [ebp - 1cch], eax
        push 101h
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 BD 4B 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x4b
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a84h]
        mov dword ptr [ebp - 1d0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 9E 4B 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x4b
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a80h]
        mov dword ptr [ebp - 1d4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 12 54 E0 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x54
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a84h]
        mov dword ptr [ebp - 1d8h], eax
        push 0
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 F6 53 E0 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x53
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 AF 05 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 6F: je 0x58680ada
        __asm _emit 0x74
        __asm _emit 0x6f
        push 17h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 40 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x40
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1dch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1e0h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1e4h], edx
        push 834h
        mov eax, dword ptr [ebp + 10h]
        add eax, 82h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0e4h
        push ecx
        mov edx, dword ptr [ebp - 1dch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1e0h]
        push ecx
        mov edx, dword ptr [ebp - 1e4h]
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 0E B2 E4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xb2
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58680ae4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov eax, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 1e8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1e8h]
        mov dword ptr [ecx + 0a7ch], edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E5 38 00 00: call 0x586843f0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        push 226h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 40 E0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6E 29 EA FF: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x29
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        push 226h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 3F E0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 31 8F F0 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x8f
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        mov eax, dword ptr [ebp - 1ech]
        push eax
        mov ecx, dword ptr [ebp - 1f0h]
        push ecx
        push 32h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 91 52 00 00: call 0x58685df0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 96ch], 0
        push 198h
        ; Exact mapped bytes E8 8E 04 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 1A: je 0x58680ba6
        __asm _emit 0x74
        __asm _emit 0x1a
        push 0
        push 588b0044h
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 B2 5B 13 00: call 0x587b6750
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x5b
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58680bb0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov eax, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 1f4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1f4h]
        mov dword ptr [ecx + 0a88h], edx
        push 54h
        ; Exact mapped bytes E8 2E 04 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 2C: je 0x58680c18
        __asm _emit 0x74
        __asm _emit 0x2c
        push 834h
        mov eax, dword ptr [ebp + 10h]
        add eax, 3eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2bh
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 10 17 E0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x17
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x58680c22
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov eax, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 1f8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1f8h]
        mov dword ptr [ecx + 0a9ch], edx
        push 54h
        ; Exact mapped bytes E8 BC 03 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x03
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 2C: je 0x58680c8a
        __asm _emit 0x74
        __asm _emit 0x2c
        push 834h
        mov eax, dword ptr [ebp + 10h]
        add eax, 40h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 3ah
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 9E 16 E0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x16
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58680c94
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov eax, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 1fch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1fch]
        mov dword ptr [ecx + 0a98h], edx
        push 54h
        ; Exact mapped bytes E8 4A 03 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 2C: je 0x58680cfc
        __asm _emit 0x74
        __asm _emit 0x2c
        push 834h
        mov eax, dword ptr [ebp + 10h]
        add eax, 55h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2bh
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 2C 16 E0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x16
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58680d06
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov eax, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 200h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 200h]
        mov dword ptr [ecx + 0a8ch], edx
        push 54h
        ; Exact mapped bytes E8 D8 02 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 2F: je 0x58680d71
        __asm _emit 0x74
        __asm _emit 0x2f
        push 7dah
        mov eax, dword ptr [ebp + 10h]
        add eax, 41h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 10eh
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 B7 15 E0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58680d7b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov eax, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 204h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 204h]
        mov dword ptr [eax + edx + 0aa0h], ecx
        push 54h
        ; Exact mapped bytes E8 5A 02 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 2E: je 0x58680dee
        __asm _emit 0x74
        __asm _emit 0x2e
        push 7d9h
        mov edx, dword ptr [ebp + 10h]
        add edx, 41h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 10eh
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 3A 15 E0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58680df8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov edx, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 208h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + eax + 0aa0h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0aa0h]
        mov dword ptr [ebp - 20ch], eax
        push 0
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 0B E7 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe7
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0aa0h]
        mov dword ptr [ebp - 210h], eax
        push 0
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 E6 E6 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xe6
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0aa0h]
        mov dword ptr [ebp - 214h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 1E 47 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x47
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 67 01 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 41: je 0x58680ef4
        __asm _emit 0x74
        __asm _emit 0x41
        push 21h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 3C E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x3c
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 57h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 58h
        push edx
        push 3
        mov eax, dword ptr [ebp - 218h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 84 9A 13 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58680efe
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov edx, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 21ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 21ch]
        mov dword ptr [edx + ecx + 0a90h], eax
        push 0fch
        ; Exact mapped bytes E8 D4 00 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 41: je 0x58680f87
        __asm _emit 0x74
        __asm _emit 0x41
        push 21h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D 3B E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x3b
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 57h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 67h
        push edx
        push 3
        mov eax, dword ptr [ebp - 220h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 F1 99 13 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x99
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58680f91
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 224h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 224h]
        mov dword ptr [ecx + eax + 0a90h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0a90h]
        mov dword ptr [ebp - 228h], eax
        push 0
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 02 4F E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x4f
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0a90h]
        mov dword ptr [ebp - 22ch], eax
        push 0
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 DD 4E E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x4e
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 F6 FF 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 41: je 0x58681065
        __asm _emit 0x74
        __asm _emit 0x41
        push 21h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F 3A E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x3a
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 69h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 37h
        push edx
        push 2
        mov eax, dword ptr [ebp - 230h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 13 99 13 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x99
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868106f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov edx, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 234h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 234h]
        mov dword ptr [eax + 0aa8h], ecx
        push 0fch
        ; Exact mapped bytes E8 6C FF 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 41: je 0x586810ef
        __asm _emit 0x74
        __asm _emit 0x41
        push 21h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 3A E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x3a
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 69h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 5ah
        push eax
        push 3
        mov ecx, dword ptr [ebp - 238h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 89 98 13 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x586810f9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov eax, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 23ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 23ch]
        mov dword ptr [ecx + 0aach], edx
        push 74h
        ; Exact mapped bytes E8 E5 FE 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 4A: je 0x5868117f
        __asm _emit 0x74
        __asm _emit 0x4a
        push 3d6h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 39 E0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x39
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 240h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 4bh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 17h
        push ecx
        mov edx, dword ptr [ebp - 240h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 1
        push 3ch
        push 0
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 D9 28 E8 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x28
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58681189
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov ecx, dword ptr [ebp - 0f4h]
        mov dword ptr [ebp - 244h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 244h]
        mov dword ptr [edx + 0ab0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0aa8h]
        mov dword ptr [ebp - 248h], edx
        push 834h
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 B9 4C E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x4c
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0aach]
        mov dword ptr [ebp - 24ch], ecx
        push 834h
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 9A 4C E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x4c
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0a90h]
        mov dword ptr [ebp - 250h], edx
        push 834h
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 72 4C E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x4c
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0a90h]
        mov dword ptr [ebp - 254h], edx
        push 834h
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 4A 4C E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x4c
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ab0h]
        mov dword ptr [ebp - 258h], ecx
        push 834h
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 2B 4C E0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x4c
        __asm _emit 0xe0
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
