// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585913D0 .. +0x1AA3 bytes.
extern "C" __declspec(naked) void FUN_585913d0_585913D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888458bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 224h
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
        ; Exact mapped bytes E8 54 0E EF FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x0e
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588ab104h
        mov ecx, 3e8h
        ; Exact mapped bytes 66 89 4D C8: mov word ptr [ebp - 0x38], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc8
        mov edx, 1f4h
        ; Exact mapped bytes 66 89 95 58 FE FF FF: mov word ptr [ebp - 0x1a8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 2bch
        ; Exact mapped bytes 66 89 85 14 FF FF FF: mov word ptr [ebp - 0xec], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0b0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0c4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 130h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0a00h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a0h], 163h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a4h], 0b4h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0a8h], 1b1h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ach], 94h
        push 15eh
        push 73h
        push 5
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 26 5B 00 00: call 0x58597000
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        push 5
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2A 5C 00 00: call 0x58597110
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 780h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 05 C7 00 00: call 0x5859dc00
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0e4h], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [eax + 0dch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [eax + 0e0h], edx
        mov eax, 15h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 06 0A 00 00: mov word ptr [ecx + 0xa06], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 04 0A 00 00: mov word ptr [eax + 0xa04], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 0a06h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0e8h], edx
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 110h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 784h], 64h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 788h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 114h], 0
        mov dword ptr [ebp - 48h], 0ffffffd1h
        mov dword ptr [ebp - 44h], 0fffffd33h
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585915ae
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 19h
        ; Exact mapped bytes 7D 3A: jge 0x585915ee
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 164h]
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx], 0
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 164h]
        mov edx, 4
        shl edx, 0
        mov dword ptr [ecx + edx], 0
        ; Exact mapped bytes EB B7: jmp 0x585915a5
        __asm _emit 0xeb
        __asm _emit 0xb7
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58591600
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 13: jge 0x58591619
        __asm _emit 0x7d
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4 + 420h], 0
        ; Exact mapped bytes EB DE: jmp 0x585915f7
        __asm _emit 0xeb
        __asm _emit 0xde
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5859162b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 5
        ; Exact mapped bytes 7D 6B: jge 0x5859169c
        __asm _emit 0x7d
        __asm _emit 0x6b
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x58591643
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 5
        ; Exact mapped bytes 7D 3A: jge 0x58591683
        __asm _emit 0x7d
        __asm _emit 0x3a
        imul edx, dword ptr [ebp - 28h], 15fh
        mov eax, dword ptr [ebp - 48h]
        sub eax, edx
        imul ecx, dword ptr [ebp - 1ch], 5
        add ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*8 + 5c8h], eax
        imul eax, dword ptr [ebp - 28h], 0b4h
        add eax, dword ptr [ebp - 44h]
        imul ecx, dword ptr [ebp - 1ch], 5
        add ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*8 + 5cch], eax
        ; Exact mapped bytes EB B7: jmp 0x5859163a
        __asm _emit 0xeb
        __asm _emit 0xb7
        mov eax, dword ptr [ebp - 48h]
        sub eax, 1b0h
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 44h]
        sub ecx, 91h
        mov dword ptr [ebp - 44h], ecx
        ; Exact mapped bytes EB 86: jmp 0x58591622
        __asm _emit 0xeb
        __asm _emit 0x86
        push 84h
        ; Exact mapped bytes E8 5E F9 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf9
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 24: je 0x585916da
        __asm _emit 0x74
        __asm _emit 0x24
        push 780h
        push 0fffffda8h
        push 4b0h
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 10h
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 7B 61 F5 FF: call 0x584e7850
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x61
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x585916e1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0f0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0f0h]
        mov dword ptr [ecx + 9f4h], edx
        push 54h
        ; Exact mapped bytes E8 00 F9 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf9
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 28: je 0x5859173c
        __asm _emit 0x74
        __asm _emit 0x28
        push 76ch
        push 0fffffda8h
        push 4b0h
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 9f4h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 E9 0B EF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58591743
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 0f4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0f4h]
        mov dword ptr [eax + 9f8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 9f4h]
        mov dword ptr [ebp - 0f8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 25 46 EF FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x46
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 9f4h]
        mov dword ptr [ebp - 0fch], edx
        push 101h
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 16 3E 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x3e
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 9f4h]
        mov dword ptr [ebp - 100h], ecx
        push 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 8A 46 EF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 9f8h]
        mov dword ptr [ebp - 104h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 DB 3D 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x3d
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 9f8h]
        mov dword ptr [ebp - 108h], edx
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 4F 46 EF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x46
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 17 56 00 00: call 0x58596e10
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 9ech], 5
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58591818
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 13: jge 0x58591831
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 574h], 0
        ; Exact mapped bytes EB DE: jmp 0x5859180f
        __asm _emit 0xeb
        __asm _emit 0xde
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 7a4h], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 7a4h], 0
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5859186f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 19h
        ; Exact mapped bytes 7D 13: jge 0x58591888
        __asm _emit 0x7d
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4 + 510h], 0
        ; Exact mapped bytes EB DE: jmp 0x58591866
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4f4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4f8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 500h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ac4h], 1
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7A 3C 22 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x3c
        __asm _emit 0x22
        __asm _emit 0x00
        nop
        push 14h
        ; Exact mapped bytes E8 36 F7 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf7
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 0D: je 0x585918eb
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 BA 0D F9 FF: call 0x585226a0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x0d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x585918f2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 10ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10ch]
        mov dword ptr [edx + 778h], eax
        push 10h
        ; Exact mapped bytes E8 EF F6 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf6
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 0D: je 0x58591932
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 A3 F9 FF FF: call 0x585912d0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58591939
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 110h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 110h]
        mov dword ptr [edx + 77ch], eax
        push 184h
        ; Exact mapped bytes E8 A5 F6 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xf6
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 47: je 0x585919b6
        __asm _emit 0x74
        __asm _emit 0x47
        push 0
        push 0
        push 16dc16h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0c8h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 320h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 96h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 32h
        push ecx
        ; Exact mapped bytes 8B 15 34 20 96 58: mov edx, dword ptr [0x58962034]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 4F C6 F3 FF: call 0x584ce000
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xc6
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x585919bd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 114h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [edx + 770h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 770h]
        mov dword ptr [ebp - 118h], edx
        movzx eax, word ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 88 44 EF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 770h]
        mov dword ptr [ebp - 11ch], edx
        push 3ch
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 6C CA F3 FF: call 0x584ce480
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xca
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 E8 F5 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 3E: je 0x58591a6a
        __asm _emit 0x74
        __asm _emit 0x3e
        push 950h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 30 EF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x30
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 39h
        push ecx
        mov edx, dword ptr [ebp - 120h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 BB 08 EF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x08
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58591a71
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 124h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [edx + 11ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 11ch]
        mov dword ptr [ebp - 128h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 04 3B 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x3b
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 11ch]
        mov dword ptr [ebp - 12ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 78 43 EF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x43
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 11ch]
        mov dword ptr [ebp - 130h], eax
        push 7530h
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 99 43 EF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x43
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 15 F5 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xf5
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 53: je 0x58591b52
        __asm _emit 0x74
        __asm _emit 0x53
        push 94fh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 30 EF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x30
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 11ch]
        mov dword ptr [ebp - 138h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 39h
        push ecx
        mov edx, dword ptr [ebp - 134h]
        push edx
        mov eax, dword ptr [ebp - 138h]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 D6 07 EF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x07
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58591b5c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 13ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 13ch]
        mov dword ptr [edx + 118h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 118h]
        mov dword ptr [ebp - 140h], edx
        push 101h
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 16 3A 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x3a
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 118h]
        mov dword ptr [ebp - 144h], ecx
        push 0
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 8A 42 EF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x42
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 118h]
        mov dword ptr [ebp - 148h], eax
        push 7530h
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 AB 42 EF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x42
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 24 F4 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf4
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 41: je 0x58591c37
        __asm _emit 0x74
        __asm _emit 0x41
        push 1ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 2E EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x2e
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 14h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 0fh
        push edx
        push 4
        mov eax, dword ptr [ebp - 14ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 41 8D 22 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x8d
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58591c41
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 150h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 150h]
        mov dword ptr [eax + 124h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 124h]
        mov dword ptr [ebp - 154h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 31 39 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x39
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 124h]
        mov dword ptr [ebp - 158h], edx
        push 0
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 A5 41 EF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x41
        __asm _emit 0xef
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 124h]
        mov dword ptr [ebp - 15ch], ecx
        push 7530h
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 C6 41 EF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x41
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 3F F3 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf3
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 53: je 0x58591d2e
        __asm _emit 0x74
        __asm _emit 0x53
        push 1bh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 2D EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 124h]
        mov dword ptr [ebp - 164h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 14h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 0fh
        push edx
        push 4
        mov eax, dword ptr [ebp - 160h]
        push eax
        mov ecx, dword ptr [ebp - 164h]
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 4A 8C 22 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x8c
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58591d38
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 168h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 168h]
        mov dword ptr [eax + 120h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 16ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 3A 38 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x38
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 120h]
        mov dword ptr [ebp - 170h], edx
        push 0
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 AE 40 EF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x40
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 67 F2 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf2
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 44: je 0x58591df7
        __asm _emit 0x74
        __asm _emit 0x44
        push 0cdh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 2D EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x2d
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 30h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 9
        push ecx
        push 8
        mov edx, dword ptr [ebp - 174h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 81 8B 22 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x8b
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58591e01
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov ecx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 178h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 178h]
        mov dword ptr [edx + 12ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 12ch]
        mov dword ptr [ebp - 17ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 71 37 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x37
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 12ch]
        mov dword ptr [ebp - 180h], ecx
        push 0
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 E5 3F EF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x3f
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12ch]
        mov dword ptr [ebp - 184h], eax
        push 7530h
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 06 40 EF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x40
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 7F F1 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf1
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 56: je 0x58591ef1
        __asm _emit 0x74
        __asm _emit 0x56
        push 0cch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 2C EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x2c
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 12ch]
        mov dword ptr [ebp - 18ch], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 30h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 9
        push ecx
        push 8
        mov edx, dword ptr [ebp - 188h]
        push edx
        mov eax, dword ptr [ebp - 18ch]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 87 8A 22 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x8a
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58591efb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 190h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 190h]
        mov dword ptr [edx + 128h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 128h]
        mov dword ptr [ebp - 194h], edx
        push 101h
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 77 36 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x36
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 128h]
        mov dword ptr [ebp - 198h], ecx
        push 0
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 EB 3E EF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x3e
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x58591f68
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 0F 8D 72 02 00 00: jge 0x585921e4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 8B F0 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf0
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 3F: je 0x58591fce
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 20h]
        add eax, 2
        push eax
        ; Exact mapped bytes 8B 0D B0 06 96 58: mov ecx, dword ptr [0x589606b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 2B EF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x2b
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 19ch], eax
        push 40h
        push 6eh
        push 118h
        mov ecx, dword ptr [ebp - 19ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 5A 03 EF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x03
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x58591fd8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov eax, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 1a0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1a0h]
        mov dword ptr [edx + ecx*4 + 78ch], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 78ch]
        mov dword ptr [ebp - 1a4h], eax
        push 7918h
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 62 3E EF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x3e
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 78ch]
        mov dword ptr [ebp - 1ech], eax
        push 0
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 02 3E EF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x3e
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 BE EF 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xef
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 42: je 0x5859209e
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 14h
        push ecx
        ; Exact mapped bytes 8B 0D B0 06 96 58: mov ecx, dword ptr [0x589606b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 2A EF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x2a
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        push 40h
        push 0a0h
        push 18ch
        mov edx, dword ptr [ebp - 1ach]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 8A 02 EF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585920a8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov ecx, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 1b0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1b0h]
        mov dword ptr [eax + edx*4 + 580h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 580h]
        mov dword ptr [ebp - 1b4h], ecx
        push 7918h
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 92 3D EF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x3d
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 580h]
        mov dword ptr [ebp - 1b8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 32 3D EF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x3d
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 EE EE 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xee
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 22: je 0x5859214e
        __asm _emit 0x74
        __asm _emit 0x22
        push 40h
        push 1f5h
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 DA 01 EF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58592158
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov eax, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 1bch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1bch]
        mov dword ptr [edx + ecx*4 + 798h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 798h]
        mov dword ptr [ebp - 1c0h], eax
        push 7919h
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 E2 3C EF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x3c
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 798h]
        mov dword ptr [ebp - 1c4h], eax
        push 0
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 82 3C EF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x3c
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 798h]
        mov dword ptr [ebp - 1c8h], eax
        push 0
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 02 3D EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x3d
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 7B FD FF FF: jmp 0x58591f5f
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 78ch]
        mov dword ptr [ebp - 1cch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 A4 33 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x33
        __asm _emit 0x22
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 78ch]
        mov dword ptr [ebp - 1d0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 7C 33 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x33
        __asm _emit 0x22
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 798h]
        mov dword ptr [ebp - 1d4h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 54 33 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x33
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 798h]
        mov dword ptr [ebp - 1d8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 2C 33 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x33
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 580h]
        mov dword ptr [ebp - 1dch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 04 33 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x33
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 580h]
        mov dword ptr [ebp - 1e0h], eax
        push 101h
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 DC 32 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x32
        __asm _emit 0x22
        __asm _emit 0x00
        nop
        push 58h
        ; Exact mapped bytes E8 28 ED 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xed
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 4B: je 0x5859233d
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 6C 79 94 58: mov ecx, dword ptr [0x5894796c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 57 00 00: call 0x58597a70
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1e4h], eax
        push 2
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 C0 27 EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x27
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        push 40h
        push 1f5h
        push 1
        mov ecx, dword ptr [ebp - 1e8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 DB 44 EF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58592347
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov eax, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 230h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 230h]
        mov dword ptr [ecx + 7a0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 7a0h]
        mov dword ptr [ebp - 1f0h], ecx
        push 7918h
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 FB 3A EF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x3a
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 7a0h]
        mov dword ptr [ebp - 1f4h], eax
        push 0
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 9F 3A EF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x3a
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 7a0h]
        mov dword ptr [ebp - 1f8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 F0 31 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x31
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 7a0h]
        mov dword ptr [ebp - 1fch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 04 3B EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x3b
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 794h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9F 58 00 00: call 0x58597c90
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        push 26h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 26 EF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x26
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 64h], eax
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
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ac0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ad8h], 0
        ; Exact mapped bytes 83 3D 64 35 90 58 00: cmp dword ptr [0x58903564], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x58592451
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], 0
        ; Exact mapped bytes EB 28: jmp 0x58592479
        __asm _emit 0xeb
        __asm _emit 0x28
        ; Exact mapped bytes 83 3D 58 20 96 58 00: cmp dword ptr [0x58962058], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 15: je 0x5859246f
        __asm _emit 0x74
        __asm _emit 0x15
        push 1
        ; Exact mapped bytes 8B 0D 58 20 96 58: mov ecx, dword ptr [0x58962058]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 26 EF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x26
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 60h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58592479
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 60h], 0
        push 80h
        ; Exact mapped bytes E8 81 EB 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xeb
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 3E: je 0x585924d7
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 2710h
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 115h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 118h
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 61 2A 08 00: call 0x58614f30
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x2a
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585924e1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov ecx, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 200h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 200h]
        mov dword ptr [edx + 0adch], eax
        mov ecx, 78h
        ; Exact mapped bytes 66 89 4D EC: mov word ptr [ebp - 0x14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xec
        mov edx, 6ah
        ; Exact mapped bytes 66 89 55 E8: mov word ptr [ebp - 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe8
        movzx eax, word ptr [ebp - 14h]
        add eax, 1dh
        mov ecx, 8
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx + 428h], eax
        movzx edx, word ptr [ebp - 18h]
        add edx, 104h
        mov eax, 8
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + ecx + 42ch], edx
        movzx ecx, word ptr [ebp - 14h]
        add ecx, 72h
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 428h], ecx
        movzx ecx, word ptr [ebp - 18h]
        add ecx, 124h
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 42ch], ecx
        movzx ecx, word ptr [ebp - 14h]
        add ecx, 0cbh
        mov edx, 8
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 428h], ecx
        movzx ecx, word ptr [ebp - 18h]
        add ecx, 13fh
        mov edx, 8
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 42ch], ecx
        movzx ecx, word ptr [ebp - 14h]
        add ecx, 122h
        mov edx, 8
        imul eax, edx, 3
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + eax + 428h], ecx
        movzx eax, word ptr [ebp - 18h]
        add eax, 15ch
        mov ecx, 8
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx + 42ch], eax
        movzx edx, word ptr [ebp - 14h]
        add edx, 176h
        mov eax, 8
        shl eax, 2
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 428h], edx
        movzx edx, word ptr [ebp - 18h]
        add edx, 179h
        mov eax, 8
        shl eax, 2
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 42ch], edx
        movzx edx, word ptr [ebp - 14h]
        add edx, 61h
        mov eax, 8
        imul ecx, eax, 5
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + ecx + 428h], edx
        movzx ecx, word ptr [ebp - 18h]
        add ecx, 0e0h
        mov edx, 8
        imul eax, edx, 5
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + eax + 42ch], ecx
        movzx eax, word ptr [ebp - 14h]
        add eax, 0b6h
        mov ecx, 8
        imul edx, ecx, 6
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx + 428h], eax
        movzx edx, word ptr [ebp - 18h]
        add edx, 0fah
        mov eax, 8
        imul ecx, eax, 6
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + ecx + 42ch], edx
        movzx ecx, word ptr [ebp - 14h]
        add ecx, 10fh
        mov edx, 8
        imul eax, edx, 7
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + eax + 428h], ecx
        movzx eax, word ptr [ebp - 18h]
        add eax, 11eh
        mov ecx, 8
        imul edx, ecx, 7
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx + 42ch], eax
        movzx edx, word ptr [ebp - 14h]
        add edx, 166h
        mov eax, 8
        shl eax, 3
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 428h], edx
        movzx edx, word ptr [ebp - 18h]
        add edx, 138h
        mov eax, 8
        shl eax, 3
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 42ch], edx
        movzx edx, word ptr [ebp - 14h]
        add edx, 1bah
        mov eax, 8
        imul ecx, eax, 9
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + ecx + 428h], edx
        movzx ecx, word ptr [ebp - 18h]
        add ecx, 156h
        mov edx, 8
        imul eax, edx, 9
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + eax + 42ch], ecx
        movzx eax, word ptr [ebp - 14h]
        add eax, 0a9h
        mov ecx, 8
        imul edx, ecx, 0ah
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx + 428h], eax
        movzx edx, word ptr [ebp - 18h]
        add edx, 0bdh
        mov eax, 8
        imul ecx, eax, 0ah
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + ecx + 42ch], edx
        movzx ecx, word ptr [ebp - 14h]
        add ecx, 0feh
        mov edx, 8
        imul eax, edx, 0bh
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + eax + 428h], ecx
        movzx eax, word ptr [ebp - 18h]
        add eax, 0d9h
        mov ecx, 8
        imul edx, ecx, 0bh
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx + 42ch], eax
        movzx edx, word ptr [ebp - 14h]
        add edx, 157h
        mov eax, 8
        imul ecx, eax, 0ch
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + ecx + 428h], edx
        movzx ecx, word ptr [ebp - 18h]
        add ecx, 0f5h
        mov edx, 8
        imul eax, edx, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + eax + 42ch], ecx
        movzx eax, word ptr [ebp - 14h]
        add eax, 1aeh
        mov ecx, 8
        imul edx, ecx, 0dh
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx + 428h], eax
        movzx edx, word ptr [ebp - 18h]
        add edx, 115h
        mov eax, 8
        imul ecx, eax, 0dh
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + ecx + 42ch], edx
        movzx ecx, word ptr [ebp - 14h]
        add ecx, 202h
        mov edx, 8
        imul eax, edx, 0eh
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + eax + 428h], ecx
        movzx eax, word ptr [ebp - 18h]
        add eax, 132h
        mov ecx, 8
        imul edx, ecx, 0eh
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx + 42ch], eax
        movzx edx, word ptr [ebp - 14h]
        add edx, 0ech
        mov eax, 8
        imul ecx, eax, 0fh
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + ecx + 428h], edx
        movzx ecx, word ptr [ebp - 18h]
        add ecx, 98h
        mov edx, 8
        imul eax, edx, 0fh
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + eax + 42ch], ecx
        movzx eax, word ptr [ebp - 14h]
        add eax, 141h
        mov ecx, 8
        shl ecx, 4
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 428h], eax
        movzx eax, word ptr [ebp - 18h]
        add eax, 0b8h
        mov ecx, 8
        shl ecx, 4
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 42ch], eax
        movzx eax, word ptr [ebp - 14h]
        add eax, 19ah
        mov ecx, 8
        imul edx, ecx, 11h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx + 428h], eax
        movzx edx, word ptr [ebp - 18h]
        add edx, 0d3h
        mov eax, 8
        imul ecx, eax, 11h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + ecx + 42ch], edx
        movzx ecx, word ptr [ebp - 14h]
        add ecx, 1f1h
        mov edx, 8
        imul eax, edx, 12h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + eax + 428h], ecx
        movzx eax, word ptr [ebp - 18h]
        add eax, 0f0h
        mov ecx, 8
        imul edx, ecx, 12h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx + 42ch], eax
        movzx edx, word ptr [ebp - 14h]
        add edx, 245h
        mov eax, 8
        imul ecx, eax, 13h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + ecx + 428h], edx
        movzx ecx, word ptr [ebp - 18h]
        add ecx, 10dh
        mov edx, 8
        imul eax, edx, 13h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + eax + 42ch], ecx
        movzx eax, word ptr [ebp - 14h]
        add eax, 135h
        mov ecx, 8
        imul edx, ecx, 14h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx + 428h], eax
        movzx edx, word ptr [ebp - 18h]
        add edx, 73h
        mov eax, 8
        imul ecx, eax, 14h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + ecx + 42ch], edx
        movzx ecx, word ptr [ebp - 14h]
        add ecx, 18ah
        mov edx, 8
        imul eax, edx, 15h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + eax + 428h], ecx
        movzx eax, word ptr [ebp - 18h]
        add eax, 93h
        mov ecx, 8
        imul edx, ecx, 15h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx + 42ch], eax
        movzx edx, word ptr [ebp - 14h]
        add edx, 1e3h
        mov eax, 8
        imul ecx, eax, 16h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + ecx + 428h], edx
        movzx ecx, word ptr [ebp - 18h]
        add ecx, 0aeh
        mov edx, 8
        imul eax, edx, 16h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + eax + 42ch], ecx
        movzx eax, word ptr [ebp - 14h]
        add eax, 23ah
        mov ecx, 8
        imul edx, ecx, 17h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx + 428h], eax
        movzx edx, word ptr [ebp - 18h]
        add edx, 0cbh
        mov eax, 8
        imul ecx, eax, 17h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + ecx + 42ch], edx
        movzx ecx, word ptr [ebp - 14h]
        add ecx, 28eh
        mov edx, 8
        imul eax, edx, 18h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + eax + 428h], ecx
        movzx eax, word ptr [ebp - 18h]
        add eax, 0e8h
        mov ecx, 8
        imul edx, ecx, 18h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx + 42ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 15ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ae0h], 0
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58592a99
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 1
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 5
        ; Exact mapped bytes 7D 24: jge 0x58592ac3
        __asm _emit 0x7d
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 134h], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4 + 148h], 0
        ; Exact mapped bytes EB CD: jmp 0x58592a90
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 50ch], 0
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58592ae2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 7B: jge 0x58592b63
        __asm _emit 0x7d
        __asm _emit 0x7b
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x58592afa
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 7D 5E: jge 0x58592b5e
        __asm _emit 0x7d
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 588h]
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [edx + eax*4], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 598h]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + ecx*4], 0
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 5a8h]
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + edx*4], 0
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 5b8h]
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [edx + eax*4], 0
        ; Exact mapped bytes EB 93: jmp 0x58592af1
        __asm _emit 0xeb
        __asm _emit 0x93
        ; Exact mapped bytes E9 76 FF FF FF: jmp 0x58592ad9
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 198h
        ; Exact mapped bytes E8 97 E4 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xe4
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 1C: je 0x58592b9f
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588aaf84h
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 19 D8 1E 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xd8
        __asm _emit 0x1e
        __asm _emit 0x00
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58592ba9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 204h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 204h]
        mov dword ptr [edx + 130h], eax
        push 80h
        ; Exact mapped bytes E8 32 E4 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xe4
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 5D: je 0x58592c45
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 0ah
        ; Exact mapped bytes 66 89 55 C6: mov word ptr [ebp - 0x3a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xc6
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 130h]
        mov dword ptr [ebp - 208h], ecx
        push 1
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 BE 1E EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x1e
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 20ch], eax
        movzx edx, word ptr [ebp - 3ah]
        push edx
        push 0fffffdf7h
        push 0fffff9edh
        mov eax, dword ptr [ebp - 20ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 F3 91 FD FF: call 0x5856be30
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x91
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58592c4f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 210h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 210h]
        mov dword ptr [eax + 504h], ecx
        push 90h
        ; Exact mapped bytes E8 8C E3 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe3
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 5B: je 0x58592ce9
        __asm _emit 0x74
        __asm _emit 0x5b
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 5dch
        ; Exact mapped bytes 66 89 45 C4: mov word ptr [ebp - 0x3c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc4
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 130h]
        mov dword ptr [ebp - 214h], edx
        push 0
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 16 1E EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x1e
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        movzx eax, word ptr [ebp - 3ch]
        push eax
        push 66h
        push 68h
        mov ecx, dword ptr [ebp - 218h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 10h
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 2F 44 F5 FF: call 0x584e7110
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x44
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58592cf3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov eax, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 21ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 21ch]
        mov dword ptr [ecx + 508h], edx
        push 54h
        ; Exact mapped bytes E8 EB E2 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xe2
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 69: je 0x58592d92
        __asm _emit 0x74
        __asm _emit 0x69
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 5dbh
        ; Exact mapped bytes 66 89 4D C2: mov word ptr [ebp - 0x3e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 130h]
        mov dword ptr [ebp - 220h], eax
        push 9
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 CA 1D EF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x1d
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 224h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 508h]
        mov dword ptr [ebp - 228h], edx
        movzx eax, word ptr [ebp - 3eh]
        push eax
        push 66h
        push 68h
        mov ecx, dword ptr [ebp - 224h]
        push ecx
        mov edx, dword ptr [ebp - 228h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 96 F5 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf5
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58592d9c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov eax, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 22ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 22ch]
        mov dword ptr [ecx + 50ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 160h], 0
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58592dda
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 19h
        ; Exact mapped bytes 7D 78: jge 0x58592e58
        __asm _emit 0x7d
        __asm _emit 0x78
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x58592df2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 30h]
        add edx, 1
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 2
        ; Exact mapped bytes 7D 19: jge 0x58592e11
        __asm _emit 0x7d
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 22ch]
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [edx + eax*4], 0
        ; Exact mapped bytes EB D8: jmp 0x58592de9
        __asm _emit 0xeb
        __asm _emit 0xd8
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 09: jmp 0x58592e23
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 1
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 2
        ; Exact mapped bytes 7D 19: jge 0x58592e42
        __asm _emit 0x7d
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 2f4h]
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes EB D8: jmp 0x58592e1a
        __asm _emit 0xeb
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 3bch], 0
        ; Exact mapped bytes E9 79 FF FF FF: jmp 0x58592dd1
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
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
