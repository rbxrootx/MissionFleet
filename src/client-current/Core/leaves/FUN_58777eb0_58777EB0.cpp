// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58777EB0 .. +0x1F81 bytes.
extern "C" __declspec(naked) void FUN_58777eb0_58777EB0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588906a5h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 3a0h
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
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 0b4h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1eah
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6C A3 D0 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xa3
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588b5b1ch
        mov eax, 3e8h
        ; Exact mapped bytes 66 89 45 E4: mov word ptr [ebp - 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe4
        mov ecx, 1f4h
        ; Exact mapped bytes 66 89 4D E0: mov word ptr [ebp - 0x20], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe0
        mov edx, 320h
        ; Exact mapped bytes 66 89 55 E8: mov word ptr [ebp - 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe8
        push 5ch
        ; Exact mapped bytes E8 CE 90 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 1B: je 0x58777f61
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 14 BA D4 FF: call 0x584c3970
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xba
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58777f68
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 150h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 150h]
        mov dword ptr [edx + 130h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 130h]
        mov dword ptr [ebp - 154h], edx
        movzx eax, word ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 DD DE D0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xde
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 130h]
        mov dword ptr [ebp - 158h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 AF BA D4 FF: call 0x584c3a70
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xba
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 3B 90 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 38: je 0x58778011
        __asm _emit 0x74
        __asm _emit 0x38
        push 7
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A CB D0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xcb
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        movzx ecx, word ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 15ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 14 A3 D0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xa3
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58778018
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 160h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 160h]
        mov dword ptr [ecx + 6ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 164h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 63 D5 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xd5
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 AF 8F 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x8f
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 3B: je 0x587780a0
        __asm _emit 0x74
        __asm _emit 0x3b
        push 6
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AE CA D0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xca
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        ; Exact mapped bytes 0F BF 55 E0: movsx edx, word ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe0
        add edx, 0ah
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 168h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 85 A2 D0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587780a7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 16ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 16ch]
        mov dword ptr [edx + 70h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 170h], edx
        push 0c8h
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 64 D4 03 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xd4
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 20 8F 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x8f
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 3B: je 0x5877812f
        __asm _emit 0x74
        __asm _emit 0x3b
        push 8
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F CA D0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xca
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        ; Exact mapped bytes 0F BF 45 E0: movsx eax, word ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe0
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 174h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 F6 A1 D0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x58778136
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 178h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 178h]
        mov dword ptr [eax + 74h], ecx
        push 54h
        ; Exact mapped bytes E8 AE 8E 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x8e
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 3B: je 0x587781a1
        __asm _emit 0x74
        __asm _emit 0x3b
        push 4
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD C9 D0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xc9
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        ; Exact mapped bytes 0F BF 55 E0: movsx edx, word ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe0
        add edx, 0fh
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 17ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 84 A1 D0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587781a8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 180h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 180h]
        mov dword ptr [edx + 78h], eax
        push 54h
        ; Exact mapped bytes E8 3C 8E 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x8e
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 3B: je 0x58778213
        __asm _emit 0x74
        __asm _emit 0x3b
        push 5
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B C9 D0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc9
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        ; Exact mapped bytes 0F BF 4D E0: movsx ecx, word ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe0
        add ecx, 0ch
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 184h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 12 A1 D0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x5877821a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 188h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 188h]
        mov dword ptr [ecx + 7ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 18ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 61 D3 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xd3
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 190h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 45 D3 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xd3
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 8E 8D 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 67: je 0x587782ed
        __asm _emit 0x74
        __asm _emit 0x67
        push 4
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D C8 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 198h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 19ch], edx
        movzx eax, word ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 25h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1cbh
        push edx
        mov eax, dword ptr [ebp - 194h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 198h]
        push edx
        mov eax, dword ptr [ebp - 19ch]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 F8 39 D5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x39
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587782f4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 1a0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1a0h]
        mov dword ptr [edx + 88h], eax
        push 0fch
        ; Exact mapped bytes E8 EA 8C 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x8c
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 41: je 0x5877836b
        __asm _emit 0x74
        __asm _emit 0x41
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 C7 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xc7
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0a9h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4ch
        push edx
        push 5
        mov eax, dword ptr [ebp - 1a4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 0A 26 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x26
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x58778372
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 1a8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1a8h]
        mov dword ptr [edx + ecx + 2c0h], eax
        push 0fch
        ; Exact mapped bytes E8 63 8C 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x8c
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 41: je 0x587783f2
        __asm _emit 0x74
        __asm _emit 0x41
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F C7 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc7
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0a9h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 6eh
        push edx
        push 5
        mov eax, dword ptr [ebp - 1ach]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 83 25 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587783f9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 1b0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1b0h]
        mov dword ptr [ecx + eax + 2c0h], edx
        push 0fch
        ; Exact mapped bytes E8 DC 8B 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x8b
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 43: je 0x5877847b
        __asm _emit 0x74
        __asm _emit 0x43
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 C6 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xc6
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 1b4h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a9h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0f0h
        push ecx
        push 5
        mov edx, dword ptr [ebp - 1b4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 FA 24 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x58778482
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 1b8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1b8h]
        mov dword ptr [ecx + eax + 2c8h], edx
        push 0fch
        ; Exact mapped bytes E8 53 8B 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x8b
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 43: je 0x58778504
        __asm _emit 0x74
        __asm _emit 0x43
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF C5 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xc5
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 1bch], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a9h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 10eh
        push ecx
        push 5
        mov edx, dword ptr [ebp - 1bch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 71 24 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5877850b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 1c0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1c0h]
        mov dword ptr [eax + edx + 2c8h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 2c0h]
        mov dword ptr [ebp - 1c4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 58 D0 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 2c0h]
        mov dword ptr [ebp - 1c8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 30 D0 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 2c0h]
        mov dword ptr [ebp - 1cch], eax
        movzx ecx, word ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 D8 D8 D0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xd8
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 2c0h]
        mov dword ptr [ebp - 1d0h], ecx
        movzx edx, word ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 B0 D8 D0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xd8
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 2c8h]
        mov dword ptr [ebp - 1d4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 B8 CF 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xcf
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 2c8h]
        mov dword ptr [ebp - 1d8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 90 CF 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xcf
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 2c8h]
        mov dword ptr [ebp - 1dch], ecx
        movzx edx, word ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 38 D8 D0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xd8
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 2c8h]
        mov dword ptr [ebp - 1e0h], edx
        movzx eax, word ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 10 D8 D0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xd8
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 89 89 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x89
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 47: je 0x587786d2
        __asm _emit 0x74
        __asm _emit 0x47
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 C4 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xc4
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 1e4h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0a9h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 16ah
        push edx
        push 5
        mov eax, dword ptr [ebp - 1e4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 A6 22 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x22
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587786dc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 1e8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1e8h]
        mov dword ptr [edx + ecx + 2d0h], eax
        push 0fch
        ; Exact mapped bytes E8 F6 88 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x88
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 4A: je 0x5877876e
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C C3 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xc3
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0a9h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 182h
        push edx
        push 5
        mov eax, dword ptr [ebp - 1ech]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 0A 22 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x22
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58778778
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 1f0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1f0h]
        mov dword ptr [ecx + eax + 2d0h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 2d0h]
        mov dword ptr [ebp - 1f4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 E8 CD 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 2d0h]
        mov dword ptr [ebp - 1f8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 C0 CD 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 2d0h]
        mov dword ptr [ebp - 1fch], ecx
        movzx edx, word ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 68 D6 D0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xd6
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 2d0h]
        mov dword ptr [ebp - 200h], edx
        movzx eax, word ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 40 D6 D0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xd6
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        push 94h
        ; Exact mapped bytes E8 B9 87 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x87
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 49: je 0x587788aa
        __asm _emit 0x74
        __asm _emit 0x49
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 9eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1e0h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 44h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 12h
        push ecx
        ; Exact mapped bytes 8B 15 24 20 96 58: mov edx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 2E 7A 04 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587788b4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 204h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 204h]
        mov dword ptr [edx + 118h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 118h]
        mov dword ptr [ebp - 208h], edx
        push 0bh
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 01 6B D2 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 118h]
        mov dword ptr [ebp - 210h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 118h]
        ; Exact mapped bytes E8 A4 C1 DB FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0xdb
        __asm _emit 0xff
        shl eax, 3
        mov dword ptr [ebp - 20ch], eax
        mov eax, dword ptr [ebp - 20ch]
        push eax
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 29 E5 D3 FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xe5
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 118h]
        mov dword ptr [ebp - 214h], edx
        movzx eax, word ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 3A D5 D0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xd5
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 118h]
        mov dword ptr [ebp - 218h], edx
        push 0
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 7E D4 D0 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xd4
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58778975
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 0F 8D DE 01 00 00: jge 0x58778b5d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 8D 98 00 00 00: jge 0x58778a21
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 94h
        ; Exact mapped bytes E8 71 86 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x86
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 46: je 0x587789ef
        __asm _emit 0x74
        __asm _emit 0x46
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 9ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1e0h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 44h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes 8B 15 24 20 96 58: mov edx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 E9 78 04 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x587789f9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov ecx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 21ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 21ch]
        mov dword ptr [eax + edx*4 + 11ch], ecx
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x58778ab8
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 94h
        ; Exact mapped bytes E8 D9 85 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 4A: je 0x58778a8b
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 9ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1e0h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 44h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes A1 24 20 96 58: mov eax, dword ptr [0x58962024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 130h]
        push edx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 4D 78 04 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58778a95
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov eax, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 220h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 220h]
        mov dword ptr [edx + ecx*4 + 11ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 11ch]
        mov dword ptr [ebp - 224h], eax
        push 0bh
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 18 69 D2 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x69
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 11ch]
        mov dword ptr [ebp - 22ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 118h]
        ; Exact mapped bytes E8 B7 BF DB FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xbf
        __asm _emit 0xdb
        __asm _emit 0xff
        shl eax, 3
        mov dword ptr [ebp - 228h], eax
        mov edx, dword ptr [ebp - 228h]
        push edx
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 3C E3 D3 FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xe3
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 11ch]
        mov dword ptr [ebp - 230h], edx
        movzx eax, word ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 49 D3 D0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xd3
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 11ch]
        mov dword ptr [ebp - 234h], eax
        push 0
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 89 D2 D0 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xd2
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0F FE FF FF: jmp 0x5877896c
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 11ch]
        mov dword ptr [ebp - 238h], ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0b8h
        push edx
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 26 CB 03 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xcb
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 11ch]
        mov dword ptr [ebp - 23ch], edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0e2h
        push eax
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 FA CA 03 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 11ch]
        mov dword ptr [ebp - 240h], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 115h
        push ecx
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 CE CA 03 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 11ch]
        mov dword ptr [ebp - 244h], edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 186h
        push eax
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 A2 CA 03 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        push 70h
        ; Exact mapped bytes E8 EE 83 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x83
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 50: je 0x58778c7c
        __asm _emit 0x74
        __asm _emit 0x50
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0b6h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1e0h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a4h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0afh
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
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 3C 97 D0 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x97
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x58778c86
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov ecx, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 248h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 248h]
        mov dword ptr [edx + 12ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 12ch]
        mov dword ptr [ebp - 24ch], edx
        movzx eax, word ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 BC D1 D0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd1
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58778cd7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 0F 8D E5 03 00 00: jge 0x587790c6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 19 83 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x83
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 74: je 0x58778d75
        __asm _emit 0x74
        __asm _emit 0x74
        push 0adh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF BD D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xbd
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 254h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 258h], eax
        movzx ecx, word ptr [ebp - 1ch]
        push ecx
        imul edx, dword ptr [ebp - 14h], 0bh
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 44h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 106h
        push edx
        mov eax, dword ptr [ebp - 250h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 254h]
        push edx
        mov eax, dword ptr [ebp - 258h]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 73 2F D5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x2f
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58778d7f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov ecx, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 25ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 25ch]
        mov dword ptr [eax + edx*4 + 134h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 134h]
        mov dword ptr [ebp - 260h], ecx
        push 0
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 CE D1 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd1
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 134h]
        mov dword ptr [ebp - 264h], ecx
        push 0
        mov ecx, dword ptr [ebp - 264h]
        ; Exact mapped bytes E8 AE D1 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xd1
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 17 82 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x82
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x58778e8e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0aeh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B9 BC D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xbc
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 130h]
        mov dword ptr [ebp - 26ch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 270h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 274h], edx
        movzx eax, word ptr [ebp - 1ch]
        push eax
        imul ecx, dword ptr [ebp - 14h], 0bh
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 44h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 177h
        push ecx
        mov edx, dword ptr [ebp - 268h]
        push edx
        mov eax, dword ptr [ebp - 26ch]
        push eax
        mov ecx, dword ptr [ebp - 270h]
        push ecx
        mov edx, dword ptr [ebp - 274h]
        push edx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 5A 2E D5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x2e
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58778e98
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov eax, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 278h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 278h]
        mov dword ptr [edx + ecx*4 + 1b4h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 1b4h]
        mov dword ptr [ebp - 27ch], eax
        push 0
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 B5 D0 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xd0
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 1b4h]
        mov dword ptr [ebp - 280h], eax
        push 0
        mov ecx, dword ptr [ebp - 280h]
        ; Exact mapped bytes E8 95 D0 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xd0
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 FE 80 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x80
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 72: je 0x58778f8e
        __asm _emit 0x74
        __asm _emit 0x72
        push 15h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 BB D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xbb
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 284h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 288h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 28ch], edx
        movzx eax, word ptr [ebp - 1ch]
        push eax
        imul ecx, dword ptr [ebp - 14h], 0bh
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 44h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 106h
        push ecx
        mov edx, dword ptr [ebp - 284h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        push ecx
        mov edx, dword ptr [ebp - 28ch]
        push edx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 5A 2D D5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x2d
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58778f98
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov eax, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 290h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 290h]
        mov dword ptr [edx + ecx*4 + 234h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 234h]
        mov dword ptr [ebp - 294h], eax
        push 0
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 B5 CF D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xcf
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 234h]
        mov dword ptr [ebp - 298h], eax
        push 0
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 95 CF D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xcf
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 01 80 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x80
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 57: je 0x58779070
        __asm _emit 0x74
        __asm _emit 0x57
        push 10101h
        push 0
        push 0ffffh
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        imul edx, ecx, 11h
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 44h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1dh
        push edx
        imul eax, dword ptr [ebp - 14h], 11h
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 44h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 5
        push eax
        ; Exact mapped bytes 8B 0D 20 20 96 58: mov ecx, dword ptr [0x58962020]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 48 93 D0 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x93
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5877907a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov eax, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 29ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 29ch]
        mov dword ptr [edx + ecx*4 + 98h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 98h]
        mov dword ptr [ebp - 2a0h], eax
        movzx ecx, word ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes E8 C0 CD D0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 08 FC FF FF: jmp 0x58778cce
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 3ech], 0
        push 0ach
        ; Exact mapped bytes E8 27 7F 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x7f
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 6E: je 0x58779161
        __asm _emit 0x74
        __asm _emit 0x6e
        push 0ah
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D0 B9 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xb9
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 2a4h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2a8h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2ach], ecx
        movzx edx, word ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a7h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 19ah
        push ecx
        mov edx, dword ptr [ebp - 2a4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2a8h]
        push ecx
        mov edx, dword ptr [ebp - 2ach]
        push edx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 87 2B D5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x2b
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5877916b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 2b0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2b0h]
        mov dword ptr [ecx + 90h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 2b4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 EA CD D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xcd
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 53 7E 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x7e
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 6E: je 0x58779235
        __asm _emit 0x74
        __asm _emit 0x6e
        push 0bh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC B8 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xb8
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 2b8h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2bch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2c0h], eax
        movzx ecx, word ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0a7h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1b8h
        push eax
        mov ecx, dword ptr [ebp - 2b8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 2bch]
        push eax
        mov ecx, dword ptr [ebp - 2c0h]
        push ecx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 B3 2A D5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x2a
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5877923f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 2c4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2c4h]
        mov dword ptr [eax + 94h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 2c8h], eax
        push 0
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 16 CD D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xcd
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 2cch], edx
        push 101h
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 17 C3 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc3
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 2d0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2d0h]
        ; Exact mapped bytes E8 F8 C2 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 118h]
        ; Exact mapped bytes E8 FA 75 04 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x587792d9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 7D 5A: jge 0x58779339
        __asm _emit 0x7d
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx*4 + 11ch]
        ; Exact mapped bytes E8 CF 75 04 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x58779304
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 20h
        ; Exact mapped bytes 7D 2D: jge 0x58779337
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 11ch]
        mov dword ptr [ebp - 2d4h], eax
        push 0ffffffh
        push 0
        push 588b5798h
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 EC 71 04 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C4: jmp 0x587792fb
        __asm _emit 0xeb
        __asm _emit 0xc4
        ; Exact mapped bytes EB 97: jmp 0x587792d0
        __asm _emit 0xeb
        __asm _emit 0x97
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5877934b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 7D 49: jge 0x5877939a
        __asm _emit 0x7d
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 118h]
        mov dword ptr [ebp - 2d8h], eax
        push 0ffffffh
        push 0
        push 588b579ch
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 A9 71 04 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 118h]
        mov dword ptr [ebp - 2dch], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 2dch]
        ; Exact mapped bytes E8 C9 80 04 00: call 0x587c1460
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB A8: jmp 0x58779342
        __asm _emit 0xeb
        __asm _emit 0xa8
        push 0ach
        ; Exact mapped bytes E8 60 7C 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 6D: je 0x58779427
        __asm _emit 0x74
        __asm _emit 0x6d
        push 1eh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 B7 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xb7
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 2e0h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2e4h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2e8h], edx
        movzx eax, word ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 3ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1d8h
        push edx
        mov eax, dword ptr [ebp - 2e0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 2e4h]
        push edx
        mov eax, dword ptr [ebp - 2e8h]
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 C1 28 D5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x28
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58779431
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov ecx, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 2ech], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2ech]
        mov dword ptr [edx + 2b4h], eax
        push 0ach
        ; Exact mapped bytes E8 AA 7B 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x7b
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 70: je 0x587794e0
        __asm _emit 0x74
        __asm _emit 0x70
        push 1fh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 B6 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb6
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 2f0h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2f4h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2f8h], edx
        movzx eax, word ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 94h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1d8h
        push edx
        mov eax, dword ptr [ebp - 2f0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 2f4h]
        push edx
        mov eax, dword ptr [ebp - 2f8h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 08 28 D5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x28
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x587794ea
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov ecx, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 2fch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2fch]
        mov dword ptr [edx + 2b8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 2b4h]
        mov dword ptr [ebp - 300h], edx
        push 101h
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 88 C0 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 2b8h]
        mov dword ptr [ebp - 304h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 69 C0 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2b4h]
        mov dword ptr [ebp - 308h], eax
        push 0
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 DD C8 D0 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xc8
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 2b8h]
        mov dword ptr [ebp - 30ch], edx
        push 0
        mov ecx, dword ptr [ebp - 30ch]
        ; Exact mapped bytes E8 C1 C8 D0 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xc8
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 7D 7A 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x7a
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 47: je 0x587795e4
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
        ; Exact mapped bytes E8 26 B5 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xb5
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 310h], eax
        movzx eax, word ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 48h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1d8h
        push edx
        mov eax, dword ptr [ebp - 310h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 34 D2 D0 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xd2
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587795ee
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov edx, dword ptr [ebp - 0f4h]
        mov dword ptr [ebp - 314h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [eax + 2bch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2bch]
        mov dword ptr [ebp - 318h], eax
        push 0
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 27 5F D2 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x5f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 2bch]
        mov dword ptr [ebp - 31ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 31ch]
        ; Exact mapped bytes E8 68 BF 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 2bch]
        mov dword ptr [ebp - 320h], ecx
        push 0
        mov ecx, dword ptr [ebp - 320h]
        ; Exact mapped bytes E8 DC C7 D0 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xc7
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 95 79 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x79
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f8h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 6E: je 0x587796f3
        __asm _emit 0x74
        __asm _emit 0x6e
        push 2dh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E B4 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xb4
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 324h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 328h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 32ch], eax
        movzx ecx, word ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0a4h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1bbh
        push eax
        mov ecx, dword ptr [ebp - 324h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 328h]
        push eax
        mov ecx, dword ptr [ebp - 32ch]
        push ecx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 F5 25 D5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x25
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x587796fd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0
        mov edx, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 330h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 330h]
        mov dword ptr [eax + 2d8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2d8h]
        mov dword ptr [ebp - 334h], eax
        push 101h
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 75 BE 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xbe
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 2d8h]
        mov dword ptr [ebp - 338h], edx
        push 0
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 E9 C6 D0 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 2d8h]
        mov dword ptr [ebp - 33ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 33ch]
        ; Exact mapped bytes E8 CD 60 D2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x60
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 424h], 0
        push 20h
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 428h
        push eax
        ; Exact mapped bytes E8 7E 36 0D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x36
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        push 54h
        ; Exact mapped bytes E8 68 78 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 44: je 0x587797f6
        __asm _emit 0x74
        __asm _emit 0x44
        push 43h
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 B3 D0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xb3
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 340h], eax
        ; Exact mapped bytes 0F BF 4D E0: movsx ecx, word ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe0
        add ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 34h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 340h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 32 8B D0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x8b
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58779800
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 344h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 344h]
        mov dword ptr [ecx + 4a8h], edx
        push 54h
        ; Exact mapped bytes E8 DE 77 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x77
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 108h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 44: je 0x58779880
        __asm _emit 0x74
        __asm _emit 0x44
        push 42h
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 B2 D0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xb2
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 348h], eax
        ; Exact mapped bytes 0F BF 45 E0: movsx eax, word ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe0
        add eax, 0ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 34h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 348h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 A8 8A D0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x8a
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5877988a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov edx, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 34ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 34ch]
        mov dword ptr [eax + 4ach], ecx
        push 54h
        ; Exact mapped bytes E8 54 77 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x77
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 44: je 0x5877990a
        __asm _emit 0x74
        __asm _emit 0x44
        push 41h
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D B2 D0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xb2
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 350h], eax
        ; Exact mapped bytes 0F BF 55 E0: movsx edx, word ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe0
        add edx, 0bh
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 34h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 350h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 1E 8A D0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x8a
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58779914
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 354h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 354h]
        mov dword ptr [edx + 4b0h], eax
        push 54h
        ; Exact mapped bytes E8 CA 76 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x76
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 49: je 0x58779999
        __asm _emit 0x74
        __asm _emit 0x49
        push 46h
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 B1 D0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xb1
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 358h], eax
        ; Exact mapped bytes 0F BF 4D E0: movsx ecx, word ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe0
        add ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 34h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 0cbh
        push eax
        mov ecx, dword ptr [ebp - 358h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 8F 89 D0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x89
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x587799a3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov eax, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 35ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 35ch]
        mov dword ptr [ecx + 4bch], edx
        push 54h
        ; Exact mapped bytes E8 3B 76 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x76
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 4A: je 0x58779a29
        __asm _emit 0x74
        __asm _emit 0x4a
        push 45h
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 B1 D0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb1
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 360h], eax
        ; Exact mapped bytes 0F BF 45 E0: movsx eax, word ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe0
        add eax, 0ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 34h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 0cbh
        push edx
        mov eax, dword ptr [ebp - 360h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 FF 88 D0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x88
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58779a33
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 364h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 364h]
        mov dword ptr [eax + 4c0h], ecx
        push 54h
        ; Exact mapped bytes E8 AB 75 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x75
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 4A: je 0x58779ab9
        __asm _emit 0x74
        __asm _emit 0x4a
        push 44h
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A4 B0 D0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xb0
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 368h], eax
        ; Exact mapped bytes 0F BF 55 E0: movsx edx, word ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe0
        add edx, 0bh
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 34h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 0cbh
        push ecx
        mov edx, dword ptr [ebp - 368h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 6F 88 D0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x88
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58779ac3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov ecx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 36ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 36ch]
        mov dword ptr [edx + 4c4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4ach]
        mov dword ptr [ebp - 370h], edx
        push 101h
        mov ecx, dword ptr [ebp - 370h]
        ; Exact mapped bytes E8 AF BA 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4a8h]
        mov dword ptr [ebp - 374h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 374h]
        ; Exact mapped bytes E8 90 BA 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4c0h]
        mov dword ptr [ebp - 378h], eax
        push 101h
        mov ecx, dword ptr [ebp - 378h]
        ; Exact mapped bytes E8 71 BA 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4bch]
        mov dword ptr [ebp - 37ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 37ch]
        ; Exact mapped bytes E8 52 BA 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 9B 74 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x74
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 44: je 0x58779bc3
        __asm _emit 0x74
        __asm _emit 0x44
        push 0cch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 AF D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xaf
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 380h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 10h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 3ch
        push ecx
        push 4
        mov edx, dword ptr [ebp - 380h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 B5 0D 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58779bcd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 384h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 384h]
        mov dword ptr [edx + 4b4h], eax
        push 0fch
        ; Exact mapped bytes E8 0E 74 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x74
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 47: je 0x58779c53
        __asm _emit 0x74
        __asm _emit 0x47
        push 0cch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 AE D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xae
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 388h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 10h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0abh
        push edx
        push 4
        mov eax, dword ptr [ebp - 388h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 25 0D 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58779c5d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov edx, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 38ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 38ch]
        mov dword ptr [eax + 4b8h], ecx
        push 0fch
        ; Exact mapped bytes E8 7E 73 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x73
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 44: je 0x58779ce0
        __asm _emit 0x74
        __asm _emit 0x44
        push 0cch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 AE D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xae
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 390h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 10h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 26h
        push eax
        push 4
        mov ecx, dword ptr [ebp - 390h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 98 0C 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58779cea
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov eax, dword ptr [ebp - 144h]
        mov dword ptr [ebp - 394h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 394h]
        mov dword ptr [ecx + 4c8h], edx
        push 0fch
        ; Exact mapped bytes E8 F1 72 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x72
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 74 47: je 0x58779d70
        __asm _emit 0x74
        __asm _emit 0x47
        push 0cch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 AD D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xad
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 398h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 10h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 88h
        push ecx
        push 4
        mov edx, dword ptr [ebp - 398h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 08 0C 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58779d7a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 0
        mov ecx, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 39ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 39ch]
        mov dword ptr [edx + 4cch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4b4h]
        mov dword ptr [ebp - 3a0h], edx
        movzx eax, word ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 3a0h]
        ; Exact mapped bytes E8 C8 C0 D0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xc0
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4b8h]
        mov dword ptr [ebp - 3a4h], edx
        movzx eax, word ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 3a4h]
        ; Exact mapped bytes E8 A9 C0 D0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xc0
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4c8h]
        mov dword ptr [ebp - 3a8h], edx
        movzx eax, word ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 3a8h]
        ; Exact mapped bytes E8 8A C0 D0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc0
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4cch]
        mov dword ptr [ebp - 3ach], edx
        movzx eax, word ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 3ach]
        ; Exact mapped bytes E8 6B C0 D0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0xd0
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
