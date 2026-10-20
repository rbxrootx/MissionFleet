// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58639270 .. +0x1AA4 bytes.
extern "C" __declspec(naked) void FUN_58639270_58639270() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58887f28h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 2c4h
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
        ; Exact mapped bytes E8 B4 8F E4 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x8f
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588af1b0h
        push 198h
        ; Exact mapped bytes E8 2E 7D 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x7d
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 16: je 0x586392fc
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588aeed0h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B9 70 14 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58639303
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14ch]
        mov dword ptr [edx + 60h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 8B 15 24 06 96 58: mov edx, dword ptr [0x58960624]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ecx + 6ch], edx
        push 54h
        ; Exact mapped bytes E8 D5 7C 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x7c
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 44: je 0x58639383
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 150h], ecx
        push 0
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 C8 B7 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 154h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A2 8F E4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x8f
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5863938a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 158h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 158h]
        mov dword ptr [edx + 64h], eax
        push 54h
        ; Exact mapped bytes E8 5A 7C 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x7c
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 44: je 0x586393fe
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 15ch], edx
        push 1
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 4D B7 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xb7
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 160h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 27 8F E4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x8f
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x58639405
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 164h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 164h]
        mov dword ptr [eax + 68h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 168h], eax
        push 101h
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 76 C1 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xc1
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 16ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 5A C1 17 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xc1
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 A6 7B 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x7b
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 29: je 0x58639497
        __asm _emit 0x74
        __asm _emit 0x29
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 73h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0c5h
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 8E 8E E4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5863949e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 170h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 170h]
        mov dword ptr [edx + 70h], eax
        push 54h
        ; Exact mapped bytes E8 46 7B 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x7b
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 2B: je 0x586394f9
        __asm _emit 0x74
        __asm _emit 0x2b
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 87h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0c5h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 2C 8E E4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x58639500
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 174h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 174h]
        mov dword ptr [eax + 74h], ecx
        push 70h
        ; Exact mapped bytes E8 E4 7A 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x7a
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 46: je 0x58639576
        __asm _emit 0x74
        __asm _emit 0x46
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 80h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 13fh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 74h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0e2h
        push edx
        ; Exact mapped bytes A1 30 20 96 58: mov eax, dword ptr [0x58962030]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 3F 8E E4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x5863957d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 178h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 178h]
        mov dword ptr [eax + 78h], ecx
        push 70h
        ; Exact mapped bytes E8 67 7A 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x7a
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 49: je 0x586395f6
        __asm _emit 0x74
        __asm _emit 0x49
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 94h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 14bh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 88h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0e2h
        push edx
        ; Exact mapped bytes A1 30 20 96 58: mov eax, dword ptr [0x58962030]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 BF 8D E4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x586395fd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 17ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 17ch]
        mov dword ptr [eax + 7ch], ecx
        push 70h
        ; Exact mapped bytes E8 E7 79 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x79
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 49: je 0x58639676
        __asm _emit 0x74
        __asm _emit 0x49
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 94h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1d9h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 89h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 16dh
        push edx
        ; Exact mapped bytes A1 30 20 96 58: mov eax, dword ptr [0x58962030]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 3F 8D E4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x5863967d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 180h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 180h]
        mov dword ptr [eax + 80h], ecx
        push 70h
        ; Exact mapped bytes E8 64 79 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x79
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 49: je 0x586396f9
        __asm _emit 0x74
        __asm _emit 0x49
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 0beh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 258h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 9ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 10eh
        push edx
        ; Exact mapped bytes A1 30 20 96 58: mov eax, dword ptr [0x58962030]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 BC 8C E4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x8c
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x58639700
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 184h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 184h]
        mov dword ptr [eax + 84h], ecx
        push 0ach
        ; Exact mapped bytes E8 DE 78 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x78
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 72: je 0x586397a8
        __asm _emit 0x74
        __asm _emit 0x72
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 188h], eax
        push 2
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 81 B3 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xb3
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 18ch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 190h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 194h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 0aeh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1f9h
        push ecx
        mov edx, dword ptr [ebp - 18ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 190h]
        push ecx
        mov edx, dword ptr [ebp - 194h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 3D 25 E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x25
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x586397af
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 198h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 198h]
        mov dword ptr [ecx + 88h], edx
        push 0ach
        ; Exact mapped bytes E8 2F 78 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x78
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 72: je 0x58639857
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 19ch], ecx
        push 2
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 D2 B2 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xb2
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 1a0h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a4h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a8h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0d7h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1f9h
        push edx
        mov eax, dword ptr [ebp - 1a0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 1a4h]
        push edx
        mov eax, dword ptr [ebp - 1a8h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 8E 24 E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x5863985e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 1ach], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ach]
        mov dword ptr [edx + 8ch], eax
        push 0ach
        ; Exact mapped bytes E8 80 77 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x77
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 71: je 0x58639905
        __asm _emit 0x74
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 1b0h], edx
        push 1
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 23 B2 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xb2
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 1b4h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b8h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1bch], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 138h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1e5h
        push eax
        mov ecx, dword ptr [ebp - 1b4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1b8h]
        push eax
        mov ecx, dword ptr [ebp - 1bch]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 E0 23 E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x23
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x5863990c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 1c0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1c0h]
        mov dword ptr [eax + 90h], ecx
        push 0ach
        ; Exact mapped bytes E8 D2 76 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x76
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 72: je 0x586399b4
        __asm _emit 0x74
        __asm _emit 0x72
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 1c4h], eax
        push 3
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 75 B1 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xb1
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1cch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1d0h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 0afh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 15fh
        push ecx
        mov edx, dword ptr [ebp - 1c8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1cch]
        push ecx
        mov edx, dword ptr [ebp - 1d0h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 31 23 E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x23
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x586399bb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 1d4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1d4h]
        mov dword ptr [ecx + 98h], edx
        push 0ach
        ; Exact mapped bytes E8 23 76 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x76
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 72: je 0x58639a63
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 1d8h], ecx
        push 4
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 C6 B0 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xb0
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 1dch], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1e0h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1e4h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0b7h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 15fh
        push edx
        mov eax, dword ptr [ebp - 1dch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 1e0h]
        push edx
        mov eax, dword ptr [ebp - 1e4h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 82 22 E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x22
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x58639a6a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 1e8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1e8h]
        mov dword ptr [edx + 9ch], eax
        push 0ach
        ; Exact mapped bytes E8 74 75 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 77: je 0x58639b1d
        __asm _emit 0x74
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 1ech], edx
        push 3
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 11 B0 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xb0
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1f4h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1f8h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0d7h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 15fh
        push eax
        mov ecx, dword ptr [ebp - 1f0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1f4h]
        push eax
        mov ecx, dword ptr [ebp - 1f8h]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 CB 21 E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x21
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58639b27
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 1fch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1fch]
        mov dword ptr [eax + 0a0h], ecx
        push 0ach
        ; Exact mapped bytes E8 B4 74 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x74
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 78: je 0x58639bde
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 200h], eax
        push 4
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 51 AF E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xaf
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 204h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 208h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 20ch], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 0deh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 15fh
        push ecx
        mov edx, dword ptr [ebp - 204h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        push ecx
        mov edx, dword ptr [ebp - 20ch]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 0A 21 E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x21
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58639be8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 210h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 210h]
        mov dword ptr [ecx + 0a4h], edx
        push 0ach
        ; Exact mapped bytes E8 F3 73 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x73
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 78: je 0x58639c9f
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 214h], ecx
        push 5
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 90 AE E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xae
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 21ch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 220h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0abh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 11fh
        push edx
        mov eax, dword ptr [ebp - 218h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 21ch]
        push edx
        mov eax, dword ptr [ebp - 220h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 49 20 E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x20
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58639ca9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov ecx, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 224h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 224h]
        mov dword ptr [edx + 0b0h], eax
        push 0ach
        ; Exact mapped bytes E8 32 73 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x73
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 77: je 0x58639d5f
        __asm _emit 0x74
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 228h], edx
        push 5
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 CF AD E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xad
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 230h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 234h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0d4h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 11fh
        push eax
        mov ecx, dword ptr [ebp - 22ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 230h]
        push eax
        mov ecx, dword ptr [ebp - 234h]
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 89 1F E9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x1f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58639d69
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 238h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 238h]
        mov dword ptr [eax + 0b4h], ecx
        push 90h
        ; Exact mapped bytes E8 72 72 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x72
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 4B: je 0x58639df3
        __asm _emit 0x74
        __asm _emit 0x4b
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 0beh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1cch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0b1h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 17ch
        push edx
        ; Exact mapped bytes A1 30 20 96 58: mov eax, dword ptr [0x58962030]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 45 A1 18 00: call 0x587c3f30
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58639dfd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov edx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 23ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 23ch]
        mov dword ptr [eax + 0b8h], ecx
        push 90h
        ; Exact mapped bytes E8 DE 71 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x71
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 4B: je 0x58639e87
        __asm _emit 0x74
        __asm _emit 0x4b
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 0e7h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1cch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0d7h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 17ch
        push edx
        ; Exact mapped bytes A1 30 20 96 58: mov eax, dword ptr [0x58962030]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 B1 A0 18 00: call 0x587c3f30
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58639e91
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov edx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 240h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 240h]
        mov dword ptr [eax + 0bch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0c0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0c4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0c8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0cch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0d0h], 0
        push 0fch
        ; Exact mapped bytes E8 09 71 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x71
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 47: je 0x58639f58
        __asm _emit 0x74
        __asm _emit 0x47
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 AB E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xab
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 244h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 9ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0d5h
        push edx
        push 3
        mov eax, dword ptr [ebp - 244h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 20 0A 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58639f62
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov edx, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 248h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 248h]
        mov dword ptr [eax + 0dch], ecx
        push 0fch
        ; Exact mapped bytes E8 79 70 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x70
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 46: je 0x58639fe7
        __asm _emit 0x74
        __asm _emit 0x46
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 AB E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xab
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 24ch], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 0aeh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0c4h
        push eax
        push 5
        mov ecx, dword ptr [ebp - 24ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 91 09 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x09
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58639ff1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov eax, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 250h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 250h]
        mov dword ptr [ecx + 0e0h], edx
        push 0fch
        ; Exact mapped bytes E8 EA 6F 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x6f
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 46: je 0x5863a076
        __asm _emit 0x74
        __asm _emit 0x46
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 AA E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xaa
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 254h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 0aeh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0efh
        push ecx
        push 5
        mov edx, dword ptr [ebp - 254h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 02 09 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x09
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863a080
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov ecx, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 258h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 258h]
        mov dword ptr [edx + 0e4h], eax
        push 0fch
        ; Exact mapped bytes E8 5B 6F 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x6f
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 47: je 0x5863a106
        __asm _emit 0x74
        __asm _emit 0x47
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 AA E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xaa
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 25ch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0aeh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 135h
        push edx
        push 5
        mov eax, dword ptr [ebp - 25ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 72 08 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x08
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863a110
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        mov edx, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 260h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 260h]
        mov dword ptr [eax + 0e8h], ecx
        push 0fch
        ; Exact mapped bytes E8 CB 6E 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x6e
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 46: je 0x5863a195
        __asm _emit 0x74
        __asm _emit 0x46
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 A9 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xa9
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 264h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 0d7h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0c4h
        push eax
        push 5
        mov ecx, dword ptr [ebp - 264h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 E3 07 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x07
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863a19f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        mov eax, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 268h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 268h]
        mov dword ptr [ecx + 0ech], edx
        push 0fch
        ; Exact mapped bytes E8 3C 6E 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x6e
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 46: je 0x5863a224
        __asm _emit 0x74
        __asm _emit 0x46
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 A8 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xa8
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 26ch], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 0d7h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0efh
        push ecx
        push 5
        mov edx, dword ptr [ebp - 26ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 54 07 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863a22e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov ecx, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 270h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 270h]
        mov dword ptr [edx + 0f0h], eax
        push 0fch
        ; Exact mapped bytes E8 AD 6D 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x6d
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 47: je 0x5863a2b4
        __asm _emit 0x74
        __asm _emit 0x47
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 A8 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xa8
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 274h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0d7h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 131h
        push edx
        push 5
        mov eax, dword ptr [ebp - 274h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 C4 06 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863a2be
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        mov edx, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 278h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 278h]
        mov dword ptr [eax + 0f4h], ecx
        push 0fch
        ; Exact mapped bytes E8 1D 6D 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x6d
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 46: je 0x5863a343
        __asm _emit 0x74
        __asm _emit 0x46
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 A7 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xa7
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 27ch], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 113h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0c6h
        push eax
        push 3
        mov ecx, dword ptr [ebp - 27ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 35 06 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863a34d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov eax, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 280h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 280h]
        mov dword ptr [ecx + 0f8h], edx
        push 0fch
        ; Exact mapped bytes E8 8E 6C 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x6c
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f4h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 46: je 0x5863a3d2
        __asm _emit 0x74
        __asm _emit 0x46
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 A7 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa7
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 284h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 113h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0feh
        push ecx
        push 3
        mov edx, dword ptr [ebp - 284h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 A6 05 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863a3dc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        mov ecx, dword ptr [ebp - 0f8h]
        mov dword ptr [ebp - 288h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 288h]
        mov dword ptr [edx + 0fch], eax
        push 0fch
        ; Exact mapped bytes E8 FF 6B 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x6b
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 47: je 0x5863a462
        __asm _emit 0x74
        __asm _emit 0x47
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 A6 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa6
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 28ch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 113h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 138h
        push edx
        push 3
        mov eax, dword ptr [ebp - 28ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 16 05 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863a46c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 290h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 290h]
        mov dword ptr [eax + 100h], ecx
        push 0fch
        ; Exact mapped bytes E8 6F 6B 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x6b
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 104h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 74 46: je 0x5863a4f1
        __asm _emit 0x74
        __asm _emit 0x46
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 A6 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xa6
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 113h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 16fh
        push eax
        push 3
        mov ecx, dword ptr [ebp - 294h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 87 04 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x04
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863a4fb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 108h], 0
        mov eax, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 298h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 298h]
        mov dword ptr [ecx + 104h], edx
        push 0fch
        ; Exact mapped bytes E8 E0 6A 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x6a
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10ch], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 46: je 0x5863a580
        __asm _emit 0x74
        __asm _emit 0x46
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 89 A5 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xa5
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 29ch], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 113h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1a5h
        push ecx
        push 3
        mov edx, dword ptr [ebp - 29ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 F8 03 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x03
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863a58a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 110h], 0
        mov ecx, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 2a0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2a0h]
        mov dword ptr [edx + 108h], eax
        push 0fch
        ; Exact mapped bytes E8 51 6A 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x6a
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 47: je 0x5863a610
        __asm _emit 0x74
        __asm _emit 0x47
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA A4 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xa4
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 2a4h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 113h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1e3h
        push edx
        push 3
        mov eax, dword ptr [ebp - 2a4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 68 03 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863a61a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 0
        mov edx, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 2a8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2a8h]
        mov dword ptr [eax + 10ch], ecx
        push 0fch
        ; Exact mapped bytes E8 C1 69 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x69
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 11ch], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 46: je 0x5863a69f
        __asm _emit 0x74
        __asm _emit 0x46
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A A4 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xa4
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 2ach], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 129h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 19ch
        push eax
        push 3
        mov ecx, dword ptr [ebp - 2ach]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 D9 02 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 120h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863a6a9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 120h], 0
        mov eax, dword ptr [ebp - 120h]
        mov dword ptr [ebp - 2b0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2b0h]
        mov dword ptr [ecx + 110h], edx
        push 0fch
        ; Exact mapped bytes E8 32 69 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x69
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 46: je 0x5863a72e
        __asm _emit 0x74
        __asm _emit 0x46
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB A3 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xa3
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 2b4h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 129h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 113h
        push ecx
        push 3
        mov edx, dword ptr [ebp - 2b4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 4A 02 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863a738
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 128h], 0
        mov ecx, dword ptr [ebp - 128h]
        mov dword ptr [ebp - 2b8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2b8h]
        mov dword ptr [edx + 114h], eax
        push 0fch
        ; Exact mapped bytes E8 A3 68 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x68
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 12ch], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 74 47: je 0x5863a7be
        __asm _emit 0x74
        __asm _emit 0x47
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C A3 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa3
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 2bch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 13dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0c4h
        push edx
        push 3
        mov eax, dword ptr [ebp - 2bch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 BA 01 18 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 130h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863a7c8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 130h], 0
        mov edx, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 2c0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2c0h]
        mov dword ptr [eax + 118h], ecx
        push 0bch
        ; Exact mapped bytes E8 13 68 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x68
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 134h], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 134h], 0
        ; Exact mapped bytes 74 25: je 0x5863a82c
        __asm _emit 0x74
        __asm _emit 0x25
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 2C CE F4 FF: call 0x58587650
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xce
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863a836
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 138h], 0
        mov edx, dword ptr [ebp - 138h]
        mov dword ptr [ebp - 2c4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2c4h]
        mov dword ptr [eax + 11ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 11ch]
        mov dword ptr [ebp - 2c8h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 09 B6 E4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xb6
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 120h], 0a9h
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 120h], 1b1h
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 120h], 281h
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 120h], 379h
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 120h], 411h
        mov edx, 4
        imul eax, edx, 5
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 120h], 551h
        mov edx, 4
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 120h], 609h
        mov edx, 4
        imul eax, edx, 7
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 120h], 719h
        mov edx, 4
        shl edx, 3
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 120h], 829h
        push 0d8h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 144h
        push ecx
        ; Exact mapped bytes E8 BE 24 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x24
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        push 588aeedfh
        mov edx, 18h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 144h]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 588aeee0h
        ; Exact mapped bytes E8 73 76 EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x76
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, 18h
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 144h]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 588aef08h
        ; Exact mapped bytes E8 4C 76 EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x76
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, 18h
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 144h]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 588aef30h
        ; Exact mapped bytes E8 26 76 EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x76
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, 18h
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 144h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 588aef58h
        ; Exact mapped bytes E8 FF 75 EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, 18h
        shl ecx, 2
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 144h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 588aef80h
        ; Exact mapped bytes E8 D8 75 EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x75
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, 18h
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 144h]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 588aefach
        ; Exact mapped bytes E8 B1 75 EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x75
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        push eax
        mov edx, 18h
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 144h]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 588aefd8h
        ; Exact mapped bytes E8 8A 75 EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x75
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, 18h
        imul ecx, eax, 7
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 144h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 588af000h
        ; Exact mapped bytes E8 63 75 EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x75
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, 18h
        shl ecx, 3
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 144h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1a1h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 224h], ecx
        mov eax, dword ptr [ebp + 10h]
        add eax, 9ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 228h], eax
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1cah
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 22ch], edx
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0a8h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 230h], ecx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 135h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 234h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 0afh
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 238h], edx
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 15eh
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 23ch], ecx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0bch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 240h], eax
        mov edx, dword ptr [ebp + 0ch]
        add edx, 135h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 244h], edx
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0d7h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 248h], ecx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 15eh
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 24ch], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 0e4h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 250h], edx
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 21ch], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 220h], 0
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 21dh], 0
        push 70h
        ; Exact mapped bytes E8 5E 64 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x64
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 13ch], eax
        mov byte ptr [ebp - 4], 26h
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 74 53: je 0x5863ac0f
        __asm _emit 0x74
        __asm _emit 0x53
        push 3c3c3ch
        push 0
        push 3cdc3ch
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0ceh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1eah
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0beh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 12ch
        push ecx
        ; Exact mapped bytes 8B 15 30 20 96 58: mov edx, dword ptr [0x58962030]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 A9 77 E4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x77
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863ac19
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 140h], 0
        mov ecx, dword ptr [ebp - 140h]
        mov dword ptr [ebp - 2cch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2cch]
        mov dword ptr [edx + 254h], eax
        push 70h
        ; Exact mapped bytes E8 C5 63 1F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x63
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 144h], eax
        mov byte ptr [ebp - 4], 27h
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 74 53: je 0x5863aca8
        __asm _emit 0x74
        __asm _emit 0x53
        push 3c3c3ch
        push 0
        push 3cdc3ch
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0f7h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1eah
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0e7h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 12ch
        push ecx
        ; Exact mapped bytes 8B 15 30 20 96 58: mov edx, dword ptr [0x58962030]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 10 77 E4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x77
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5863acb2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 148h], 0
        mov ecx, dword ptr [ebp - 148h]
        mov dword ptr [ebp - 2d0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2d0h]
        mov dword ptr [edx + 258h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B5 B2 E4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xb2
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
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
