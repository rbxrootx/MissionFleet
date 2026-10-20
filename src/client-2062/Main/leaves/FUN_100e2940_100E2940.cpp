// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E2940 .. +0x566 bytes.
extern "C" __declspec(naked) void FUN_100e2940_100E2940() {
    __asm {
        push -1
        push 10173b73h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        ; Exact mapped bytes 0F BF 44 24 24: movsx eax, word ptr [esp + 0x24]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        push ebx
        mov ebx, dword ptr [esp + 20h]
        push ebp
        mov ebp, dword ptr [esp + 28h]
        push esi
        push edi
        push 40h
        mov edi, ecx
        mov ecx, dword ptr [esp + 2ch]
        push 0
        push eax
        push ebp
        push ebx
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 28h], edi
        ; Exact mapped bytes E8 2E C0 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        push 54h
        mov dword ptr [esp + 24h], 0
        mov dword ptr [edi], 10176554h
        ; Exact mapped bytes E8 09 9E 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x9e
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 34h], esi
        test esi, esi
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes 74 22: je 0x100e29cb
        __asm _emit 0x74
        __asm _emit 0x22
        push 44ch
        push 0
        push 0
        push ebp
        push ebx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 F4 BF 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x100e29cd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 184h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi + 0b8h], esi
        ; Exact mapped bytes E8 BE 9D 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x9d
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 20h], 2
        ; Exact mapped bytes 74 2F: je 0x100e2a21
        __asm _emit 0x74
        __asm _emit 0x2f
        push 505050h
        push 0
        lea edx, [ebp + 14h]
        push 0dcdcdch
        lea ecx, [ebx + 0c8h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebx - 0ah]
        push ebp
        push edx
        push ecx
        push 0
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 E1 5B F3 FF: call 0x10018600
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x5b
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100e2a23
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 184h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi + 0bch], eax
        ; Exact mapped bytes E8 68 9D 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x9d
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 20h], 3
        ; Exact mapped bytes 74 2F: je 0x100e2a77
        __asm _emit 0x74
        __asm _emit 0x2f
        push 505050h
        push 0
        lea edx, [ebp + 14h]
        push 0dcdcdch
        lea ecx, [ebx + 12ch]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebx + 3ch]
        push ebp
        push edx
        push ecx
        push 0
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 8B 5B F3 FF: call 0x10018600
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x5b
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100e2a79
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 0bch]
        push 0
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi + 0c0h], eax
        ; Exact mapped bytes E8 4F 5E F3 FF: call 0x100188e0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x5e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 0c0h]
        push 0
        ; Exact mapped bytes E8 42 5E F3 FF: call 0x100188e0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x5e
        __asm _emit 0xf3
        __asm _emit 0xff
        push 70h
        ; Exact mapped bytes E8 FB 9C 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 30h], esi
        test esi, esi
        mov byte ptr [esp + 20h], 4
        ; Exact mapped bytes 74 72: je 0x100e2b29
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [ebp + 14h]
        push 40h
        lea ecx, [ebx + 12ch]
        mov dword ptr [esp + 38h], edx
        push eax
        push ecx
        lea edx, [ebx + 0ddh]
        push ebp
        push edx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 D2 BE 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esp + 34h]
        mov dword ptr [esi + 60h], 30e030h
        mov dword ptr [esi + 50h], eax
        xor eax, eax
        mov dword ptr [esi + 64h], eax
        mov dword ptr [esi + 68h], 282828h
        mov dword ptr [esi + 58h], 8
        mov dword ptr [esi + 5ch], 10h
        mov dword ptr [esi + 54h], eax
        push 80h
        mov byte ptr [esp + 24h], 5
        mov dword ptr [esi], 10175338h
        ; Exact mapped bytes E8 82 9C 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x9c
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [esi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100e2b2b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi + 0c4h], esi
        ; Exact mapped bytes E8 63 9C 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x9c
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 34h], esi
        test esi, esi
        mov byte ptr [esp + 20h], 6
        ; Exact mapped bytes 74 4E: je 0x100e2b9d
        __asm _emit 0x74
        __asm _emit 0x4e
        push 282828h
        push 0
        lea ecx, [ebp + 14h]
        push 3030e0h
        lea edx, [ebx + 1f4h]
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        lea eax, [ebx + 13fh]
        push ebp
        push eax
        push ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 03 30 F3 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x30
        __asm _emit 0xf3
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 24h], 7
        mov dword ptr [esi], 10175338h
        ; Exact mapped bytes E8 0E 9C 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x9c
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [esi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100e2b9f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi + 0c8h], esi
        ; Exact mapped bytes E8 EF 9B 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x9b
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 34h], esi
        test esi, esi
        mov byte ptr [esp + 20h], 8
        ; Exact mapped bytes 74 4E: je 0x100e2c11
        __asm _emit 0x74
        __asm _emit 0x4e
        push 282828h
        push 0
        lea edx, [ebp + 14h]
        push 6effffh
        lea eax, [ebx + 1f4h]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        lea ecx, [ebx + 197h]
        push ebp
        push ecx
        push edx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 8F 2F F3 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x2f
        __asm _emit 0xf3
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 24h], 9
        mov dword ptr [esi], 10175338h
        ; Exact mapped bytes E8 9A 9B 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x9b
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [esi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100e2c13
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi + 0dch], esi
        ; Exact mapped bytes E8 7B 9B 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x9b
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 34h], esi
        test esi, esi
        mov byte ptr [esp + 20h], 0ah
        ; Exact mapped bytes 74 4D: je 0x100e2c84
        __asm _emit 0x74
        __asm _emit 0x4d
        push 282828h
        push 0
        lea eax, [ebp + 14h]
        push 6effffh
        lea ecx, [ebx + 1f4h]
        push eax
        ; Exact mapped bytes A1 9C 56 1C 10: mov eax, dword ptr [0x101c569c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        lea edx, [ebx + 165h]
        push ebp
        push edx
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 1C 2F F3 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x2f
        __asm _emit 0xf3
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 24h], 0bh
        mov dword ptr [esi], 10175338h
        ; Exact mapped bytes E8 27 9B 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x9b
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [esi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100e2c86
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov dword ptr [edi + 0e0h], esi
        mov esi, dword ptr [edi + 0bch]
        mov byte ptr [esp + 20h], 0
        mov ecx, dword ptr [esi + 40h]
        ; Exact mapped bytes 66 C7 46 26 E8 03: mov word ptr [esi + 0x26], 0x3e8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0x03
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100e2caa
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 F6 C2 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100e2cb7
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 49 C2 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, dword ptr [edi + 0c4h]
        mov ecx, dword ptr [esi + 40h]
        ; Exact mapped bytes 66 C7 46 26 E8 03: mov word ptr [esi + 0x26], 0x3e8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0x03
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100e2cd0
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 D0 C2 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100e2cdd
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 23 C2 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, dword ptr [edi + 0c8h]
        mov ecx, dword ptr [esi + 40h]
        ; Exact mapped bytes 66 C7 46 26 E8 03: mov word ptr [esi + 0x26], 0x3e8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0x03
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100e2cf6
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 AA C2 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100e2d03
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 FD C1 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, dword ptr [edi + 0dch]
        mov ecx, dword ptr [esi + 40h]
        ; Exact mapped bytes 66 C7 46 26 E8 03: mov word ptr [esi + 0x26], 0x3e8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0x03
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100e2d1c
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 84 C2 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100e2d29
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 D7 C1 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, dword ptr [edi + 0e0h]
        mov ecx, dword ptr [esi + 40h]
        ; Exact mapped bytes 66 C7 46 26 E8 03: mov word ptr [esi + 0x26], 0x3e8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0x03
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100e2d42
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 5E C2 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100e2d4f
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 B1 C1 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [edi + 0cch]
        lea edx, [ebx + 64h]
        mov dword ptr [esp + 34h], ecx
        mov dword ptr [esp + 30h], edx
        mov dword ptr [esp + 2ch], 4
        push 70h
        ; Exact mapped bytes E8 31 9A 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x9a
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 14h], esi
        test esi, esi
        mov byte ptr [esp + 20h], 0ch
        ; Exact mapped bytes 74 6F: je 0x100e2df0
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes A1 9C 56 1C 10: mov eax, dword ptr [0x101c569c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 14h]
        push 40h
        lea edx, [ebx + 1f4h]
        mov dword ptr [esp + 2ch], eax
        mov eax, dword ptr [esp + 34h]
        push ecx
        push edx
        push ebp
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 0B BC 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 28h]
        xor eax, eax
        mov dword ptr [esi + 50h], ecx
        mov dword ptr [esi + 60h], 30e030h
        mov dword ptr [esi + 64h], eax
        mov dword ptr [esi + 68h], 282828h
        mov dword ptr [esi + 58h], 8
        mov dword ptr [esi + 5ch], 10h
        mov dword ptr [esi + 54h], eax
        push 80h
        mov byte ptr [esp + 24h], 0dh
        mov dword ptr [esi], 10175338h
        ; Exact mapped bytes E8 BB 99 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x99
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [esi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100e2df2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov edx, dword ptr [esp + 34h]
        mov byte ptr [esp + 20h], 0
        mov dword ptr [edx], esi
        mov ecx, dword ptr [esi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 66 C7 46 26 E8 03: mov word ptr [esi + 0x26], 0x3e8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100e2e10
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 90 C1 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100e2e1d
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 E3 C0 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 2ch]
        add edx, 4
        add ecx, 3ch
        dec eax
        mov dword ptr [esp + 34h], edx
        mov dword ptr [esp + 30h], ecx
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 0F 85 26 FF FF FF: jne 0x100e2d68
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea esi, [edi + 0e4h]
        mov ebp, 4
        mov bl, 0eh
        push 68h
        ; Exact mapped bytes E8 4A 99 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x99
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes 74 10: je 0x100e2e75
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push 0
        push 0
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 ED 11 01 00: call 0x100f4060
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100e2e77
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi], eax
        add esi, 4
        dec ebp
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 75 CB: jne 0x100e2e4f
        __asm _emit 0x75
        __asm _emit 0xcb
        mov ecx, dword ptr [esp + 18h]
        xor eax, eax
        mov dword ptr [edi + 50h], eax
        mov dword ptr [edi + 0a8h], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
