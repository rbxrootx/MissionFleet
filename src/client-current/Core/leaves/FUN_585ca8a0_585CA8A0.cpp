// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585CA8A0 .. +0x39D bytes.
extern "C" __declspec(naked) void FUN_585ca8a0_585CA8A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 0F 03 00 00: je 0x585cabcf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x03
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
        ; Exact mapped bytes 0F 85 02 03 00 00: jne 0x585cabcf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 9F 00 00: call 0x585d4880
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 65: jne 0x585ca943
        __asm _emit 0x75
        __asm _emit 0x65
        push 588ad7e0h
        ; Exact mapped bytes E8 08 77 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x77
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        push 6464ffh
        mov eax, dword ptr [ebp - 48h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E 5A 11 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x5a
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 20f0ch]
        mov dword ptr [ebp - 50h], edx
        push 588ad7fch
        ; Exact mapped bytes E8 D8 76 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x76
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        push 6464ffh
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 A1 AB 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xab
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 C3 5B F0 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x5b
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EC 02 00 00: jmp 0x585cac2f
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 F8 6C F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x6c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 1
        shl ecx, 0
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, -5ch
        ; Exact mapped bytes 74 3E: je 0x585ca9a7
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 D9 6C F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 1
        shl ecx, 0
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, -3fh
        ; Exact mapped bytes 75 28: jne 0x585ca9b0
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 BA 6C F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x6c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 1
        imul edx, ecx, 3
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        cmp eax, -39h
        ; Exact mapped bytes 75 09: jne 0x585ca9b0
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 6
        ; Exact mapped bytes EB 75: jmp 0x585caa25
        __asm _emit 0xeb
        __asm _emit 0x75
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 92 6C F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x6c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, 1
        shl edx, 0
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        cmp eax, -3fh
        ; Exact mapped bytes 75 28: jne 0x585ca9f7
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 73 6C F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x6c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, 1
        imul ecx, edx, 3
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, -44h
        ; Exact mapped bytes 75 09: jne 0x585ca9f7
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 0ah
        ; Exact mapped bytes EB 2E: jmp 0x585caa25
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 4B 6C F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x6c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 1
        shl ecx, 1
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 69h
        ; Exact mapped bytes 75 09: jne 0x585caa1e
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 0eh
        ; Exact mapped bytes EB 07: jmp 0x585caa25
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 4
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 1D 6C F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x6c
        __asm _emit 0xf0
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 47 67 28 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x67
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        cmp eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 0F 86 38 01 00 00: jbe 0x585cab7d
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 FD 6B F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x6b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 0F BE 44 10 FF: movsx eax, byte ptr [eax + edx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0xff
        cmp eax, 20h
        ; Exact mapped bytes 0F 85 19 01 00 00: jne 0x585cab7d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        push 0
        lea ecx, [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 9F 23 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x23
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        push 589604e0h
        lea edx, [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 0C 1E 28 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x1e
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 BB 6B F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x6b
        __asm _emit 0xf0
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 E5 66 28 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x66
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        sub eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 31h
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 8C 65 26 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x65
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 44h]
        push edx
        ; Exact mapped bytes E8 3F 23 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x23
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 30h
        lea eax, [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        ; Exact mapped bytes E8 AD 1D 28 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x1d
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 40h]
        sub edx, 30h
        push edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 55 6B F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x6b
        __asm _emit 0xf0
        __asm _emit 0xff
        add eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 30h
        push ecx
        ; Exact mapped bytes E8 85 1D 28 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 1
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D 5F FA FF: call 0x58570a40
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x5f
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x585cab4c
        __asm _emit 0x75
        __asm _emit 0x25
        push 588ad818h
        ; Exact mapped bytes E8 BF 74 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x74
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        push 6464ffh
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 58 11 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        push 588ad840h
        ; Exact mapped bytes E8 9A 74 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x74
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        push eax
        push 4
        push 2
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 8A D8 FF FF: call 0x585c83f0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 5ch], edx
        push 1
        mov eax, dword ptr [ebp - 5ch]
        push eax
        ; Exact mapped bytes E8 BC 64 26 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x64
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 50: jmp 0x585cabcd
        __asm _emit 0xeb
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 C5 6A F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x6a
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 0F BE 44 10 FF: movsx eax, byte ptr [eax + edx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0xff
        cmp eax, 20h
        ; Exact mapped bytes 74 1A: je 0x585cabb2
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 AA 6A F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x6a
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 0F BE 44 10 FF: movsx eax, byte ptr [eax + edx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x585cabcd
        __asm _emit 0x75
        __asm _emit 0x1b
        push 588ad86ch
        ; Exact mapped bytes E8 34 74 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x74
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        push eax
        push 4
        push 2
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 24 D8 FF FF: call 0x585c83f0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 60: jmp 0x585cac2f
        __asm _emit 0xeb
        __asm _emit 0x60
        push 588ad898h
        ; Exact mapped bytes E8 17 74 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x74
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        push 6464ffh
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D 57 11 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x57
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 20f0ch]
        mov dword ptr [ebp - 68h], eax
        push 588ad8c4h
        ; Exact mapped bytes E8 E7 73 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x73
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        push 6464ffh
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 B0 A8 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xa8
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 D2 58 F0 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x58
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 17 64 26 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x64
        __asm _emit 0x26
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
