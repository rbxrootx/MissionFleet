// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584ADA30 .. +0xD8F bytes.
extern "C" __declspec(naked) void FUN_584ada30_584ADA30() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e2d6h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1ach
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
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 84 DC 0B 00: call 0x5856b700
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 5889537ch
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 1c4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 9ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 28h]
        mov dword ptr [ecx + 0a8h], eax
        mov ecx, 4b0h
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A 88 00 00 00: mov word ptr [edx + 0x88], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 88 88 00 00 00: movsx ecx, word ptr [eax + 0x88]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add ecx, 64h
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A 8A 00 00 00: mov word ptr [edx + 0x8a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ach], 8
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 94h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 90h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 98h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8ch], 0
        push 54h
        ; Exact mapped bytes E8 E2 34 38 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x34
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 56: je 0x584adb88
        __asm _emit 0x74
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0a0h], edx
        push 5f3h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 6F FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x6f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        push -1
        mov eax, dword ptr [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        push ecx
        mov edx, dword ptr [ebp - 0a4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 9D 47 FD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x47
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x584adb8f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 0a8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [edx + 0b8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 0ach], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 E6 79 30 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x79
        __asm _emit 0x30
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 0b0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 5A 82 FD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x82
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 16 34 38 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x34
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 46: je 0x584adc44
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 26: mov ax, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x26
        ; Exact mapped bytes 66 89 45 E6: mov word ptr [ebp - 0x1a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe6
        push 0c7h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 6E FD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x6e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        movzx ecx, word ptr [ebp - 1ah]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D1 8B FD FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x584adc4b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0b8h]
        mov dword ptr [ecx + 0c4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 0bch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 CD 18 FF FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 0c0h], eax
        push 0bch
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 9E 78 30 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x78
        __asm _emit 0x30
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 5A 33 38 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x33
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 46: je 0x584add00
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 26: mov dx, word ptr [ecx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x26
        ; Exact mapped bytes 66 89 55 E4: mov word ptr [ebp - 0x1c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe4
        push 5f4h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B 6E FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x6e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        movzx eax, word ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 25 46 FD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x46
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x584add07
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0c8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0c8h]
        mov dword ptr [eax + 0c0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 0cch], eax
        push 101h
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 6E 78 30 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x78
        __asm _emit 0x30
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 0d0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 E2 80 FD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 0d4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 66 81 FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 82 32 38 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x32
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 4B: je 0x584adddd
        __asm _emit 0x74
        __asm _emit 0x4b
        push 1
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        sub eax, 5
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 28h
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 24h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        sub eax, 28h
        push eax
        ; Exact mapped bytes 8B 0D 24 20 96 58: mov ecx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 D8 45 FD FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x45
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x584adde4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0d8h]
        mov dword ptr [ecx + 0c8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c8h]
        mov dword ptr [ebp - 0dch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 91 77 30 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x77
        __asm _emit 0x30
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c8h]
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes 0F BF 4D 20: movsx ecx, word ptr [ebp + 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x20
        add ecx, 40h
        push ecx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 3F 80 FD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 BB 31 38 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x31
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 64: je 0x584adebd
        __asm _emit 0x74
        __asm _emit 0x64
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 26: mov ax, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x26
        ; Exact mapped bytes 66 89 45 E2: mov word ptr [ebp - 0x1e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 0e4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0e8h], ecx
        push 164h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 6C FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        movzx edx, word ptr [ebp - 1eh]
        push edx
        mov eax, dword ptr [ebp - 0e4h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        push ecx
        mov edx, dword ptr [ebp - 0ech]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 68 44 FD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x584adec4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0f0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0f0h]
        mov dword ptr [edx + 0dch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [ebp - 0f4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 B1 76 30 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x76
        __asm _emit 0x30
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 FA 30 38 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x30
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 59: je 0x584adf73
        __asm _emit 0x74
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 17h
        mov dword ptr [ebp - 0f8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        sub eax, 0ah
        mov dword ptr [ebp - 0fch], eax
        push 2eh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B 6B FD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        mov ecx, dword ptr [ebp - 0f8h]
        push ecx
        mov edx, dword ptr [ebp - 0fch]
        push edx
        push 3
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 02 CA 30 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xca
        __asm _emit 0x30
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x584adf7a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 104h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [edx + ecx + 0cch], eax
        push 0fch
        ; Exact mapped bytes E8 5B 30 38 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x30
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 59: je 0x584ae012
        __asm _emit 0x74
        __asm _emit 0x59
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 17h
        mov dword ptr [ebp - 108h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 0ch
        mov dword ptr [ebp - 10ch], ecx
        push 2eh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC 6A FD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x6a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        mov edx, dword ptr [ebp - 108h]
        push edx
        mov eax, dword ptr [ebp - 10ch]
        push eax
        push 3
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 63 C9 30 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc9
        __asm _emit 0x30
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ae019
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 114h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [edx + ecx + 0cch], eax
        push 0fch
        ; Exact mapped bytes E8 BC 2F 38 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x2f
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 59: je 0x584ae0b1
        __asm _emit 0x74
        __asm _emit 0x59
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 17h
        mov dword ptr [ebp - 118h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1eh
        mov dword ptr [ebp - 11ch], ecx
        push 2eh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D 6A FD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x6a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        mov edx, dword ptr [ebp - 118h]
        push edx
        mov eax, dword ptr [ebp - 11ch]
        push eax
        push 2
        mov ecx, dword ptr [ebp - 120h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 C4 C8 30 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xc8
        __asm _emit 0x30
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ae0b8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 124h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [edx + ecx + 0cch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 128h], edx
        ; Exact mapped bytes 0F BF 45 20: movsx eax, word ptr [ebp + 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x20
        add eax, 40h
        push eax
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 82 7D FD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x7d
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x584ae111
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 3
        ; Exact mapped bytes 7D 4C: jge 0x584ae163
        __asm _emit 0x7d
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0cch]
        mov dword ptr [ebp - 12ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 76 74 30 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x74
        __asm _emit 0x30
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0cch]
        mov dword ptr [ebp - 130h], ecx
        ; Exact mapped bytes 0F BF 55 20: movsx edx, word ptr [ebp + 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x20
        add edx, 40h
        push edx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 20 7D FD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x7d
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A5: jmp 0x584ae108
        __asm _emit 0xeb
        __asm _emit 0xa5
        push 0fch
        ; Exact mapped bytes E8 97 2E 38 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x2e
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 59: je 0x584ae1d6
        __asm _emit 0x74
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 17h
        mov dword ptr [ebp - 134h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        sub eax, 20h
        mov dword ptr [ebp - 138h], eax
        push 2eh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 69 FD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x69
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        mov ecx, dword ptr [ebp - 134h]
        push ecx
        mov edx, dword ptr [ebp - 138h]
        push edx
        push 4
        mov eax, dword ptr [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 9F C7 30 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xc7
        __asm _emit 0x30
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ae1dd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 140h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 140h]
        mov dword ptr [eax + 0d8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 144h], eax
        push 101h
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 98 73 30 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x73
        __asm _emit 0x30
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 148h], edx
        push 0
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 AC 7C FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x7c
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x584ae247
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D D3 02 00 00: jge 0x584ae524
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 AC 2D 38 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x2d
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 64: je 0x584ae2cc
        __asm _emit 0x74
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 30h
        mov dword ptr [ebp - 14ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 18h
        mov dword ptr [ebp - 150h], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 78h
        push edx
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 68 FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x68
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes 0F BF 45 20: movsx eax, word ptr [ebp + 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x20
        add eax, 40h
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        push ecx
        mov edx, dword ptr [ebp - 150h]
        push edx
        mov eax, dword ptr [ebp - 154h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 59 40 FD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ae2d3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 158h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 158h]
        mov dword ptr [ecx + eax*4 + 1c8h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 1c8h]
        mov dword ptr [ebp - 15ch], edx
        push 0
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 CD 7B FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x7b
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 E9 2C 38 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 67: je 0x584ae392
        __asm _emit 0x74
        __asm _emit 0x67
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 30h
        mov dword ptr [ebp - 160h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        add eax, 18h
        mov dword ptr [ebp - 164h], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0a0h
        push ecx
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 67 FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x67
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        ; Exact mapped bytes 0F BF 55 20: movsx edx, word ptr [ebp + 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x20
        add edx, 40h
        push edx
        mov eax, dword ptr [ebp - 160h]
        push eax
        mov ecx, dword ptr [ebp - 164h]
        push ecx
        mov edx, dword ptr [ebp - 168h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 93 3F FD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x3f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ae399
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 16ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 16ch]
        mov dword ptr [eax + edx*4 + 1d0h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 1d0h]
        mov dword ptr [ebp - 170h], ecx
        push 0
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 07 7B FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x7b
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 23 2C 38 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x2c
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 2F: je 0x584ae420
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 0F BF 55 20: movsx edx, word ptr [ebp + 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x20
        add edx, 40h
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 30h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        add eax, 8
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 05 3F FD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x3f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ae427
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 174h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 174h]
        mov dword ptr [ecx + eax*4 + 1d8h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 1d8h]
        mov dword ptr [ebp - 178h], edx
        push 0
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 79 7A FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x7a
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 95 2B 38 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x2b
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 6D: je 0x584ae4f2
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 30h
        mov dword ptr [ebp - 17ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        sub eax, 37h
        mov dword ptr [ebp - 180h], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0a2h
        push ecx
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 68 66 FD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x66
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        ; Exact mapped bytes 0F BF 55 20: movsx edx, word ptr [ebp + 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x20
        add edx, 40h
        push edx
        mov eax, dword ptr [ebp - 17ch]
        push eax
        mov ecx, dword ptr [ebp - 180h]
        push ecx
        mov edx, dword ptr [ebp - 184h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 36 3E FD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x3e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584ae4fc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 188h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 188h]
        mov dword ptr [eax + edx*4 + 1e0h], ecx
        ; Exact mapped bytes E9 1A FD FF FF: jmp 0x584ae23e
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 1c8h]
        mov dword ptr [ebp - 18ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 64 70 30 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x70
        __asm _emit 0x30
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 1d0h]
        mov dword ptr [ebp - 190h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 3C 70 30 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x70
        __asm _emit 0x30
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 1d8h]
        mov dword ptr [ebp - 194h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 14 70 30 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x70
        __asm _emit 0x30
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 1e0h]
        mov dword ptr [ebp - 198h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 EC 6F 30 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x6f
        __asm _emit 0x30
        __asm _emit 0x00
        nop
        push 64h
        ; Exact mapped bytes E8 38 2A 38 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x2a
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 22: je 0x584ae604
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 14h]
        sub eax, 2bh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 E4 75 00 00: call 0x584b5be0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584ae60e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 19ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 19ch]
        mov dword ptr [ecx + 1bch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1bch]
        mov dword ptr [ebp - 1a0h], ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 40h
        push eax
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 2E 78 FD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1bch]
        mov dword ptr [ebp - 1a4h], edx
        mov eax, dword ptr [ebp + 14h]
        sub eax, 26h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 B9 87 00 00: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 1bch]
        ; Exact mapped bytes E8 0B 25 00 00: call 0x584b0b90
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1bch]
        mov dword ptr [ebp - 1a8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 9F 24 00 00: call 0x584b0b40
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 198h
        ; Exact mapped bytes E8 58 29 38 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x29
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 24: je 0x584ae6e6
        __asm _emit 0x74
        __asm _emit 0x24
        push 40h
        push 0
        push 0
        push 64h
        push 406h
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 52 4E 20 00: call 0x586b3530
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x4e
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584ae6f0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov eax, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 1ach], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1ach]
        mov dword ptr [ecx + 0e0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0e0h]
        push ecx
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 65 30 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x65
        __asm _emit 0x30
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0e0h]
        mov dword ptr [ebp - 1b0h], eax
        push 0fa0h
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 3D 77 FD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x77
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0e0h]
        mov dword ptr [ebp - 1b4h], edx
        push 0
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 E1 10 FF FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0e0h]
        mov dword ptr [ebp - 1b8h], ecx
        push 28h
        push 1
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 33 D6 0B 00: call 0x5856bdb0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd6
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1c0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1b8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0b4h], 0
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
