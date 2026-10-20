// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5852DE30 .. +0x19CD bytes.
extern "C" __declspec(naked) void FUN_5852de30_5852DE30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1a0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 12ch], ecx
        ; Exact mapped bytes E8 72 2A FD FF: call 0x585008c0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x2a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        push 0
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 8F 2D FD FF: call 0x58500bf0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x2d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x5852de71
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 8C 5E 96 58 00 00 00 00: mov dword ptr [0x58965e8c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x8c
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x5852de7b
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 8C 5E 96 58 01 00 00 00: mov dword ptr [0x58965e8c], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x8c
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 7A A2 FF FF: call 0x58528100
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5852de8f
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 60 19 00 00: jmp 0x5852f7ef
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D C4 79 94 58 00: cmp dword ptr [0x589479c4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x5852df30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 28h], 0bfh
        mov byte ptr [ebp - 27h], 0a1h
        mov byte ptr [ebp - 26h], 0bdh
        mov byte ptr [ebp - 25h], 0bah
        mov byte ptr [ebp - 24h], 0b5h
        mov byte ptr [ebp - 23h], 0f0h
        mov byte ptr [ebp - 22h], 0bfh
        mov byte ptr [ebp - 21h], 0a3h
        mov byte ptr [ebp - 20h], 0c5h
        mov byte ptr [ebp - 1fh], 0cdh
        mov byte ptr [ebp - 1eh], 0b3h
        mov byte ptr [ebp - 1dh], 0ddh
        mov byte ptr [ebp - 1ch], 20h
        mov byte ptr [ebp - 1bh], 0c1h
        mov byte ptr [ebp - 1ah], 0d6h
        mov byte ptr [ebp - 19h], 0bdh
        mov byte ptr [ebp - 18h], 0c4h
        mov byte ptr [ebp - 17h], 0c8h
        mov byte ptr [ebp - 16h], 0b8h
        mov byte ptr [ebp - 15h], 0bbh
        mov byte ptr [ebp - 14h], 0e7h
        mov byte ptr [ebp - 13h], 20h
        mov byte ptr [ebp - 12h], 0b3h
        mov byte ptr [ebp - 11h], 0d7h
        mov byte ptr [ebp - 10h], 0c0h
        mov byte ptr [ebp - 0fh], 0cch
        mov byte ptr [ebp - 0eh], 0bah
        mov byte ptr [ebp - 0dh], 0f1h
        mov byte ptr [ebp - 0ch], 0c7h
        mov byte ptr [ebp - 0bh], 0cah
        mov byte ptr [ebp - 0ah], 0b5h
        mov byte ptr [ebp - 9], 0e5h
        mov byte ptr [ebp - 8], 0
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 8E F9 FF: call 0x584c6d60
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x8e
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes 89 0D EC 90 94 58: mov dword ptr [0x589490ec], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + 28h], 0
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [eax + 58h], 100h
        xor ecx, ecx
        ; Exact mapped bytes 74 12: je 0x5852df6c
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + 250h], 0
        ; Exact mapped bytes EB 10: jmp 0x5852df7c
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [eax + 250h], 20h
        push 588a63e8h
        ; Exact mapped bytes E8 AA B6 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov ecx, 100h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 12ch]
        lea ecx, [eax + edx + 256h]
        push ecx
        ; Exact mapped bytes E8 D6 61 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x61
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a63f8h
        ; Exact mapped bytes E8 79 B6 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov edx, 100h
        shl edx, 0
        mov eax, dword ptr [ebp - 12ch]
        lea ecx, [eax + edx + 256h]
        push ecx
        ; Exact mapped bytes E8 A5 61 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x61
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6408h
        ; Exact mapped bytes E8 48 B6 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov edx, 100h
        shl edx, 1
        mov eax, dword ptr [ebp - 12ch]
        lea ecx, [eax + edx + 256h]
        push ecx
        ; Exact mapped bytes E8 75 61 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x61
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6418h
        ; Exact mapped bytes E8 18 B6 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov edx, 100h
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 256h]
        push edx
        ; Exact mapped bytes E8 44 61 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x61
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6428h
        ; Exact mapped bytes E8 E7 B5 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov eax, 100h
        shl eax, 2
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 256h]
        push edx
        ; Exact mapped bytes E8 13 61 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x61
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a643ch
        ; Exact mapped bytes E8 B6 B5 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov eax, 100h
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 256h]
        push eax
        ; Exact mapped bytes E8 E2 60 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x60
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a644ch
        ; Exact mapped bytes E8 85 B5 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov ecx, 100h
        imul edx, ecx, 6
        mov eax, dword ptr [ebp - 12ch]
        lea ecx, [eax + edx + 256h]
        push ecx
        ; Exact mapped bytes E8 B1 60 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x60
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6460h
        ; Exact mapped bytes E8 54 B5 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov edx, 100h
        imul eax, edx, 7
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 256h]
        push edx
        ; Exact mapped bytes E8 80 60 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x60
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6470h
        ; Exact mapped bytes E8 23 B5 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov eax, 100h
        shl eax, 3
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 256h]
        push edx
        ; Exact mapped bytes E8 4F 60 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x60
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6480h
        ; Exact mapped bytes E8 F2 B4 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov eax, 100h
        imul ecx, eax, 9
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 256h]
        push eax
        ; Exact mapped bytes E8 1E 60 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x60
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6490h
        ; Exact mapped bytes E8 C1 B4 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov ecx, 100h
        imul edx, ecx, 0ah
        mov eax, dword ptr [ebp - 12ch]
        lea ecx, [eax + edx + 256h]
        push ecx
        ; Exact mapped bytes E8 ED 5F 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x5f
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a64a0h
        ; Exact mapped bytes E8 90 B4 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov edx, 100h
        imul eax, edx, 0bh
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 256h]
        push edx
        ; Exact mapped bytes E8 BC 5F 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x5f
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a64b4h
        ; Exact mapped bytes E8 5F B4 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov eax, 100h
        imul ecx, eax, 0ch
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 256h]
        push eax
        ; Exact mapped bytes E8 8B 5F 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x5f
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a64c4h
        ; Exact mapped bytes E8 2E B4 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov ecx, 100h
        imul edx, ecx, 0dh
        mov eax, dword ptr [ebp - 12ch]
        lea ecx, [eax + edx + 256h]
        push ecx
        ; Exact mapped bytes E8 5A 5F 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x5f
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a64d8h
        ; Exact mapped bytes E8 FD B3 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov edx, 100h
        imul eax, edx, 0eh
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 256h]
        push edx
        ; Exact mapped bytes E8 29 5F 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x5f
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a64e8h
        ; Exact mapped bytes E8 CC B3 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov eax, 100h
        imul ecx, eax, 0fh
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 256h]
        push eax
        ; Exact mapped bytes E8 F8 5E 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x5e
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a64f8h
        ; Exact mapped bytes E8 9B B3 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov ecx, 100h
        shl ecx, 4
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 256h]
        push eax
        ; Exact mapped bytes E8 C7 5E 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x5e
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a650ch
        ; Exact mapped bytes E8 6A B3 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov ecx, 100h
        imul edx, ecx, 11h
        mov eax, dword ptr [ebp - 12ch]
        lea ecx, [eax + edx + 256h]
        push ecx
        ; Exact mapped bytes E8 96 5E 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x5e
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a651ch
        ; Exact mapped bytes E8 39 B3 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov edx, 100h
        imul eax, edx, 12h
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 256h]
        push edx
        ; Exact mapped bytes E8 65 5E 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x5e
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6530h
        ; Exact mapped bytes E8 08 B3 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov eax, 100h
        imul ecx, eax, 13h
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 256h]
        push eax
        ; Exact mapped bytes E8 34 5E 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x5e
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6540h
        ; Exact mapped bytes E8 D7 B2 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov ecx, 100h
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 12ch]
        lea ecx, [eax + edx + 256h]
        push ecx
        ; Exact mapped bytes E8 03 5E 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x5e
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6554h
        ; Exact mapped bytes E8 A6 B2 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov edx, 100h
        imul eax, edx, 15h
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 256h]
        push edx
        ; Exact mapped bytes E8 D2 5D 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x5d
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6568h
        ; Exact mapped bytes E8 75 B2 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov eax, 100h
        imul ecx, eax, 16h
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 256h]
        push eax
        ; Exact mapped bytes E8 A1 5D 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x5d
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a657ch
        ; Exact mapped bytes E8 44 B2 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov ecx, 100h
        imul edx, ecx, 17h
        mov eax, dword ptr [ebp - 12ch]
        lea ecx, [eax + edx + 256h]
        push ecx
        ; Exact mapped bytes E8 70 5D 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x5d
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6590h
        ; Exact mapped bytes E8 13 B2 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov edx, 100h
        imul eax, edx, 18h
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 256h]
        push edx
        ; Exact mapped bytes E8 3F 5D 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x5d
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a65a4h
        ; Exact mapped bytes E8 E2 B1 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov eax, 100h
        imul ecx, eax, 19h
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 256h]
        push eax
        ; Exact mapped bytes E8 0E 5D 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x5d
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a65b8h
        ; Exact mapped bytes E8 B1 B1 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov ecx, 100h
        imul edx, ecx, 1ah
        mov eax, dword ptr [ebp - 12ch]
        lea ecx, [eax + edx + 256h]
        push ecx
        ; Exact mapped bytes E8 DD 5C 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a65cch
        ; Exact mapped bytes E8 80 B1 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov edx, 100h
        imul eax, edx, 1bh
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 256h]
        push edx
        ; Exact mapped bytes E8 AC 5C 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x5c
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a65e0h
        ; Exact mapped bytes E8 4F B1 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov eax, 100h
        imul ecx, eax, 1ch
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 256h]
        push eax
        ; Exact mapped bytes E8 7B 5C 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x5c
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a65f4h
        ; Exact mapped bytes E8 1E B1 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov ecx, 100h
        imul edx, ecx, 1dh
        mov eax, dword ptr [ebp - 12ch]
        lea ecx, [eax + edx + 256h]
        push ecx
        ; Exact mapped bytes E8 4A 5C 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x5c
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6608h
        push 100h
        mov edx, 100h
        imul eax, edx, 1eh
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 256h]
        push edx
        ; Exact mapped bytes E8 22 5C 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x5c
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6614h
        ; Exact mapped bytes E8 C5 B0 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        mov eax, 100h
        imul ecx, eax, 1fh
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 256h]
        push eax
        ; Exact mapped bytes E8 F1 5B 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x5b
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 1000h
        push 0
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 8758h
        push ecx
        ; Exact mapped bytes E8 65 E8 31 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 0ch
        push 588a6628h
        ; Exact mapped bytes E8 38 3A FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov edx, 20h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 8758h]
        push edx
        ; Exact mapped bytes E8 A7 5B 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x5b
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a663ch
        ; Exact mapped bytes E8 0A 3A FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov eax, 20h
        shl eax, 0
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 8758h]
        push edx
        ; Exact mapped bytes E8 79 5B 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x5b
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6650h
        ; Exact mapped bytes E8 DC 39 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov eax, 20h
        shl eax, 1
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 8758h]
        push edx
        ; Exact mapped bytes E8 4C 5B 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x5b
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6664h
        ; Exact mapped bytes E8 AF 39 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov eax, 20h
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 8758h]
        push eax
        ; Exact mapped bytes E8 1E 5B 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x5b
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6674h
        ; Exact mapped bytes E8 81 39 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov ecx, 20h
        shl ecx, 2
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 8758h]
        push eax
        ; Exact mapped bytes E8 F0 5A 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x5a
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6688h
        ; Exact mapped bytes E8 53 39 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov ecx, 20h
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 12ch]
        lea ecx, [eax + edx + 8758h]
        push ecx
        ; Exact mapped bytes E8 C2 5A 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x5a
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a669ch
        ; Exact mapped bytes E8 25 39 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov edx, 20h
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 8758h]
        push edx
        ; Exact mapped bytes E8 94 5A 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x5a
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a66b0h
        ; Exact mapped bytes E8 F7 38 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov eax, 20h
        imul ecx, eax, 7
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 8758h]
        push eax
        ; Exact mapped bytes E8 66 5A 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x5a
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a66c4h
        ; Exact mapped bytes E8 C9 38 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov ecx, 20h
        shl ecx, 3
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 8758h]
        push eax
        ; Exact mapped bytes E8 38 5A 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x5a
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a66dch
        ; Exact mapped bytes E8 9B 38 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov ecx, 20h
        imul edx, ecx, 9
        mov eax, dword ptr [ebp - 12ch]
        lea ecx, [eax + edx + 8758h]
        push ecx
        ; Exact mapped bytes E8 0A 5A 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x5a
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a66ech
        ; Exact mapped bytes E8 6D 38 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov edx, 20h
        imul eax, edx, 0ah
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 8758h]
        push edx
        ; Exact mapped bytes E8 DC 59 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x59
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6700h
        ; Exact mapped bytes E8 3F 38 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov eax, 20h
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 8758h]
        push eax
        ; Exact mapped bytes E8 AE 59 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x59
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6714h
        ; Exact mapped bytes E8 11 38 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov ecx, 20h
        imul edx, ecx, 0ch
        mov eax, dword ptr [ebp - 12ch]
        lea ecx, [eax + edx + 8758h]
        push ecx
        ; Exact mapped bytes E8 80 59 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x59
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6724h
        ; Exact mapped bytes E8 E3 37 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov edx, 20h
        imul eax, edx, 0dh
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 8758h]
        push edx
        ; Exact mapped bytes E8 52 59 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x59
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6738h
        ; Exact mapped bytes E8 B5 37 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov eax, 20h
        imul ecx, eax, 0eh
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 8758h]
        push eax
        ; Exact mapped bytes E8 24 59 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x59
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6748h
        ; Exact mapped bytes E8 87 37 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov ecx, 20h
        imul edx, ecx, 0fh
        mov eax, dword ptr [ebp - 12ch]
        lea ecx, [eax + edx + 8758h]
        push ecx
        ; Exact mapped bytes E8 F6 58 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x58
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a675ch
        ; Exact mapped bytes E8 59 37 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov edx, 20h
        shl edx, 4
        mov eax, dword ptr [ebp - 12ch]
        lea ecx, [eax + edx + 8758h]
        push ecx
        ; Exact mapped bytes E8 C8 58 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x58
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6770h
        ; Exact mapped bytes E8 2B 37 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov edx, 20h
        imul eax, edx, 11h
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 8758h]
        push edx
        ; Exact mapped bytes E8 9A 58 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x58
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6780h
        ; Exact mapped bytes E8 FD 36 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov eax, 20h
        imul ecx, eax, 12h
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 8758h]
        push eax
        ; Exact mapped bytes E8 6C 58 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x58
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6794h
        ; Exact mapped bytes E8 CF 36 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov ecx, 20h
        imul edx, ecx, 13h
        mov eax, dword ptr [ebp - 12ch]
        lea ecx, [eax + edx + 8758h]
        push ecx
        ; Exact mapped bytes E8 3E 58 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x58
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a67ach
        ; Exact mapped bytes E8 A1 36 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov edx, 20h
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 8758h]
        push edx
        ; Exact mapped bytes E8 10 58 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a67c0h
        ; Exact mapped bytes E8 73 36 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov eax, 20h
        imul ecx, eax, 15h
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 8758h]
        push eax
        ; Exact mapped bytes E8 E2 57 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x57
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a67d4h
        ; Exact mapped bytes E8 45 36 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov ecx, 20h
        imul edx, ecx, 16h
        mov eax, dword ptr [ebp - 12ch]
        lea ecx, [eax + edx + 8758h]
        push ecx
        ; Exact mapped bytes E8 B4 57 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a67e8h
        ; Exact mapped bytes E8 17 36 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov edx, 20h
        imul eax, edx, 17h
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 8758h]
        push edx
        ; Exact mapped bytes E8 86 57 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x57
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a67f8h
        ; Exact mapped bytes E8 E9 35 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov eax, 20h
        imul ecx, eax, 18h
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 8758h]
        push eax
        ; Exact mapped bytes E8 58 57 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x57
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6810h
        ; Exact mapped bytes E8 BB 35 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov ecx, 20h
        imul edx, ecx, 19h
        mov eax, dword ptr [ebp - 12ch]
        lea ecx, [eax + edx + 8758h]
        push ecx
        ; Exact mapped bytes E8 2A 57 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x57
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a682ch
        ; Exact mapped bytes E8 8D 35 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov edx, 20h
        imul eax, edx, 1ah
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 8758h]
        push edx
        ; Exact mapped bytes E8 FC 56 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a683ch
        ; Exact mapped bytes E8 5F 35 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov eax, 20h
        imul ecx, eax, 1bh
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 8758h]
        push eax
        ; Exact mapped bytes E8 CE 56 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x56
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6854h
        ; Exact mapped bytes E8 31 35 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov ecx, 20h
        imul edx, ecx, 1ch
        mov eax, dword ptr [ebp - 12ch]
        lea ecx, [eax + edx + 8758h]
        push ecx
        ; Exact mapped bytes E8 A0 56 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x56
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6868h
        ; Exact mapped bytes E8 03 35 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov edx, 20h
        imul eax, edx, 1dh
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 8758h]
        push edx
        ; Exact mapped bytes E8 72 56 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x56
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6880h
        ; Exact mapped bytes E8 D5 34 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov eax, 20h
        imul ecx, eax, 1eh
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 8758h]
        push eax
        ; Exact mapped bytes E8 44 56 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x56
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 588a6894h
        ; Exact mapped bytes E8 A7 34 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov ecx, 20h
        imul edx, ecx, 1fh
        mov eax, dword ptr [ebp - 12ch]
        lea ecx, [eax + edx + 8758h]
        push ecx
        ; Exact mapped bytes E8 16 56 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x56
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 134h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5852eb88
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 134h]
        add edx, 1
        mov dword ptr [ebp - 134h], edx
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [ebp - 134h]
        cmp ecx, dword ptr [eax + 250h]
        ; Exact mapped bytes 0F 8D 8A 00 00 00: jge 0x5852ec2a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 1f41h
        mov eax, dword ptr [ebp - 134h]
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes 66 89 94 41 56 82 00 00: mov word ptr [ecx + eax*2 + 0x8256], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x41
        __asm _emit 0x56
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 134h], 20h
        ; Exact mapped bytes 7D 0C: jge 0x5852ebce
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 15ch], 1
        ; Exact mapped bytes EB 0A: jmp 0x5852ebd8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 15ch], 0
        mov edx, dword ptr [ebp - 134h]
        mov eax, dword ptr [ebp - 12ch]
        ; Exact mapped bytes 66 8B 8D A4 FE FF FF: mov cx, word ptr [ebp - 0x15c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 8C 50 56 83 00 00: mov word ptr [eax + edx*2 + 0x8356], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0x56
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 134h]
        add edx, 4
        mov eax, dword ptr [ebp - 134h]
        mov ecx, dword ptr [ebp - 12ch]
        mov dword ptr [ecx + eax*4 + 8458h], edx
        xor edx, edx
        mov eax, dword ptr [ebp - 134h]
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes 66 89 94 41 58 86 00 00: mov word ptr [ecx + eax*2 + 0x8658], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x41
        __asm _emit 0x58
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x5852eb79
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 5
        mov ecx, dword ptr [ebp - 12ch]
        mov dword ptr [ecx + eax + 8458h], 9
        mov edx, 4
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 12ch]
        mov dword ptr [ecx + eax + 8458h], 0ah
        mov edx, 4
        imul eax, edx, 7
        mov ecx, dword ptr [ebp - 12ch]
        mov dword ptr [ecx + eax + 8458h], 0bh
        mov edx, 4
        shl edx, 3
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [eax + edx + 8458h], 0ch
        mov ecx, 4
        imul edx, ecx, 9
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [eax + edx + 8458h], 0dh
        mov ecx, 4
        imul edx, ecx, 0ah
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [eax + edx + 8458h], 0eh
        mov ecx, 4
        imul edx, ecx, 0bh
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [eax + edx + 8458h], 12h
        mov ecx, 4
        imul edx, ecx, 0ch
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [eax + edx + 8458h], 13h
        mov ecx, 4
        imul edx, ecx, 0dh
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [eax + edx + 8458h], 14h
        mov ecx, 4
        imul edx, ecx, 0eh
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [eax + edx + 8458h], 15h
        mov ecx, 4
        imul edx, ecx, 0fh
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [eax + edx + 8458h], 16h
        mov ecx, 4
        shl ecx, 4
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + ecx + 8458h], 17h
        mov eax, 4
        imul ecx, eax, 11h
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + ecx + 8458h], 18h
        mov eax, 4
        imul ecx, eax, 12h
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + ecx + 8458h], 19h
        mov eax, 4
        imul ecx, eax, 13h
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + ecx + 8458h], 1ah
        mov eax, 4
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + ecx + 8458h], 1bh
        mov eax, 4
        imul ecx, eax, 15h
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + ecx + 8458h], 1ch
        mov eax, 4
        imul ecx, eax, 16h
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + ecx + 8458h], 1dh
        mov eax, 4
        imul ecx, eax, 17h
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + ecx + 8458h], 1eh
        mov eax, 4
        imul ecx, eax, 18h
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + ecx + 8458h], 1fh
        mov eax, 4
        imul ecx, eax, 19h
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + ecx + 8458h], 20h
        mov eax, 4
        imul ecx, eax, 1ah
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + ecx + 8458h], 21h
        mov eax, 4
        imul ecx, eax, 1bh
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + ecx + 8458h], 22h
        mov eax, 4
        imul ecx, eax, 1ch
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + ecx + 8458h], 23h
        mov eax, 4
        imul ecx, eax, 1dh
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + ecx + 8458h], 24h
        mov eax, 4
        imul ecx, eax, 1eh
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + ecx + 8458h], 25h
        mov eax, 4
        imul ecx, eax, 1fh
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + ecx + 8458h], 26h
        mov dword ptr [ebp - 134h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5852eee8
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 134h]
        add eax, 1
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 12ch]
        mov edx, dword ptr [ebp - 134h]
        cmp edx, dword ptr [ecx + 250h]
        ; Exact mapped bytes 7D 4F: jge 0x5852ef4b
        __asm _emit 0x7d
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 134h]
        shl eax, 8
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 256h]
        push edx
        mov eax, dword ptr [ebp - 134h]
        shl eax, 8
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 995ch]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, 4db0h
        mov ecx, dword ptr [ebp - 134h]
        mov edx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes 66 89 84 4A 5C 19 01 00: mov word ptr [edx + ecx*2 + 0x1195c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x5c
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 8E: jmp 0x5852eed9
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov dword ptr [ebp - 14ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5852ef66
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 14ch]
        add eax, 1
        mov dword ptr [ebp - 14ch], eax
        cmp dword ptr [ebp - 14ch], 10h
        ; Exact mapped bytes 7D 24: jge 0x5852ef93
        __asm _emit 0x7d
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 14ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 12ch]
        lea eax, [edx + ecx + 9758h]
        mov ecx, 1
        imul edx, ecx, 0
        mov byte ptr [eax + edx], 0
        ; Exact mapped bytes EB C4: jmp 0x5852ef57
        __asm _emit 0xeb
        __asm _emit 0xc4
        xor eax, eax
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes 66 89 81 54 02 00 00: mov word ptr [ecx + 0x254], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 144h], 80h
        mov dword ptr [ebp - 150h], 1
        mov dword ptr [ebp - 13ch], 0a9h
        mov dword ptr [ebp - 140h], 0
        mov dword ptr [ebp - 140h], 588a68a4h
        lea edx, [ebp - 130h]
        push edx
        push 0f003fh
        push 0
        mov eax, dword ptr [ebp - 140h]
        push eax
        push 80000002h
        ; Exact mapped bytes FF 15 20 40 89 58: call dword ptr [0x58894020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x5852f029
        __asm _emit 0x74
        __asm _emit 0x31
        lea ecx, [ebp - 138h]
        push ecx
        lea edx, [ebp - 130h]
        push edx
        push 0
        push 0f003fh
        push 0
        push 588a44dbh
        push 0
        mov eax, dword ptr [ebp - 140h]
        push eax
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 12ch]
        cmp dword ptr [ecx + 250h], 0
        ; Exact mapped bytes 75 2E: jne 0x5852f066
        __asm _emit 0x75
        __asm _emit 0x2e
        mov edx, 100h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 12ch]
        lea edx, [ecx + eax + 256h]
        push edx
        mov eax, dword ptr [ebp - 12ch]
        add eax, 148h
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x5852f0f8
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 144h]
        push ecx
        push 0
        lea edx, [ebp - 138h]
        push edx
        push 0
        push 588a68cch
        mov eax, dword ptr [ebp - 130h]
        push eax
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 6A: je 0x5852f0f8
        __asm _emit 0x74
        __asm _emit 0x6a
        lea ecx, [ebp - 138h]
        push ecx
        lea edx, [ebp - 130h]
        push edx
        push 0
        push 0f003fh
        push 0
        push 588a68d4h
        push 0
        mov eax, dword ptr [ebp - 140h]
        push eax
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 164h], eax
        mov ecx, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 168h], ecx
        mov edx, dword ptr [ebp - 164h]
        push edx
        push 0
        push 1
        push 0
        push 588a68dch
        mov eax, dword ptr [ebp - 168h]
        push eax
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 12ch]
        cmp dword ptr [ecx + 250h], 0
        ; Exact mapped bytes 75 05: jne 0x5852f10c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x5852f19e
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 144h]
        push edx
        push 0
        lea eax, [ebp - 138h]
        push eax
        push 0
        push 588a68e4h
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 6A: je 0x5852f19e
        __asm _emit 0x74
        __asm _emit 0x6a
        lea edx, [ebp - 138h]
        push edx
        lea eax, [ebp - 130h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 588a68f0h
        push 0
        mov ecx, dword ptr [ebp - 140h]
        push ecx
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 16ch], eax
        mov edx, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 170h], edx
        mov eax, dword ptr [ebp - 16ch]
        push eax
        push 0
        push 1
        push 0
        push 588a68fch
        mov ecx, dword ptr [ebp - 170h]
        push ecx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        lea edx, [ebp - 144h]
        push edx
        mov eax, dword ptr [ebp - 12ch]
        add eax, 248h
        push eax
        lea ecx, [ebp - 138h]
        push ecx
        push 0
        push 588a6908h
        mov edx, dword ptr [ebp - 130h]
        push edx
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5852f1e1
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 12ch]
        movzx ecx, word ptr [eax + 248h]
        test ecx, ecx
        ; Exact mapped bytes 75 79: jne 0x5852f25a
        __asm _emit 0x75
        __asm _emit 0x79
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 12ch]
        mov edx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes 66 8B 84 02 56 82 00 00: mov ax, word ptr [edx + eax + 0x8256]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x56
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 81 48 02 00 00: mov word ptr [ecx + 0x248], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 138h]
        push ecx
        lea edx, [ebp - 130h]
        push edx
        push 0
        push 0f003fh
        push 0
        push 588a6910h
        push 0
        mov eax, dword ptr [ebp - 140h]
        push eax
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 4
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 248h
        push ecx
        push 4
        push 0
        push 588a6918h
        mov edx, dword ptr [ebp - 130h]
        push edx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, dword ptr [ebp - 12ch]
        cmp dword ptr [eax + 250h], 0
        ; Exact mapped bytes 75 27: jne 0x5852f290
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 12ch]
        movzx ecx, word ptr [eax + edx + 1195ch]
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + 9958h], ecx
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x5852f33a
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 144h]
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 9958h
        push ecx
        lea edx, [ebp - 138h]
        push edx
        push 0
        push 588a6920h
        mov eax, dword ptr [ebp - 130h]
        push eax
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 77: je 0x5852f33a
        __asm _emit 0x74
        __asm _emit 0x77
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 12ch]
        movzx ecx, word ptr [eax + edx + 1195ch]
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + 9958h], ecx
        lea eax, [ebp - 138h]
        push eax
        lea ecx, [ebp - 130h]
        push ecx
        push 0
        push 0f003fh
        push 0
        push 588a6930h
        push 0
        mov edx, dword ptr [ebp - 140h]
        push edx
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 4
        mov eax, dword ptr [ebp - 12ch]
        add eax, 9958h
        push eax
        push 4
        push 0
        push 588a6940h
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        lea edx, [ebp - 144h]
        push edx
        lea eax, [ebp - 150h]
        push eax
        lea ecx, [ebp - 138h]
        push ecx
        push 0
        push 588a6950h
        mov edx, dword ptr [ebp - 130h]
        push edx
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x5852f3b7
        __asm _emit 0x74
        __asm _emit 0x50
        lea eax, [ebp - 138h]
        push eax
        lea ecx, [ebp - 130h]
        push ecx
        push 0
        push 0f003fh
        push 0
        push 588a6954h
        push 0
        mov edx, dword ptr [ebp - 140h]
        push edx
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 4
        lea eax, [ebp - 150h]
        push eax
        push 4
        push 0
        push 588a6958h
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov dword ptr [ebp - 148h], 0
        lea edx, [ebp - 144h]
        push edx
        lea eax, [ebp - 148h]
        push eax
        lea ecx, [ebp - 138h]
        push ecx
        push 0
        push 588a695ch
        mov edx, dword ptr [ebp - 130h]
        push edx
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x5852f43e
        __asm _emit 0x74
        __asm _emit 0x50
        lea eax, [ebp - 138h]
        push eax
        lea ecx, [ebp - 130h]
        push ecx
        push 0
        push 0f003fh
        push 0
        push 588a6964h
        push 0
        mov edx, dword ptr [ebp - 140h]
        push edx
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 4
        lea eax, [ebp - 148h]
        push eax
        push 4
        push 0
        push 588a696ch
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp dword ptr [ebp - 148h], 20090917h
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x5852f4ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 148h], 20090917h
        push 4
        lea edx, [ebp - 148h]
        push edx
        push 4
        push 0
        push 588a6974h
        mov eax, dword ptr [ebp - 130h]
        push eax
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 174h], eax
        mov ecx, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 178h], ecx
        mov edx, dword ptr [ebp - 174h]
        push edx
        push 0
        push 1
        push 0
        push 588a697ch
        mov eax, dword ptr [ebp - 178h]
        push eax
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 17ch], eax
        mov ecx, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 180h], ecx
        mov edx, dword ptr [ebp - 17ch]
        push edx
        push 0
        push 1
        push 0
        push 588a6984h
        mov eax, dword ptr [ebp - 180h]
        push eax
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        lea ecx, [ebp - 144h]
        push ecx
        lea edx, [ebp - 13ch]
        push edx
        lea eax, [ebp - 138h]
        push eax
        push 0
        push 588a6990h
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x5852f567
        __asm _emit 0x74
        __asm _emit 0x50
        lea edx, [ebp - 138h]
        push edx
        lea eax, [ebp - 130h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 588a6998h
        push 0
        mov ecx, dword ptr [ebp - 140h]
        push ecx
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 4
        lea edx, [ebp - 13ch]
        push edx
        push 4
        push 0
        push 588a69a0h
        mov eax, dword ptr [ebp - 130h]
        push eax
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp dword ptr [ebp - 13ch], 0a9h
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x5852f601
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 13ch], 1b1h
        ; Exact mapped bytes 74 7E: je 0x5852f601
        __asm _emit 0x74
        __asm _emit 0x7e
        cmp dword ptr [ebp - 13ch], 281h
        ; Exact mapped bytes 74 72: je 0x5852f601
        __asm _emit 0x74
        __asm _emit 0x72
        cmp dword ptr [ebp - 13ch], 379h
        ; Exact mapped bytes 74 66: je 0x5852f601
        __asm _emit 0x74
        __asm _emit 0x66
        cmp dword ptr [ebp - 13ch], 411h
        ; Exact mapped bytes 74 5A: je 0x5852f601
        __asm _emit 0x74
        __asm _emit 0x5a
        cmp dword ptr [ebp - 13ch], 551h
        ; Exact mapped bytes 74 4E: je 0x5852f601
        __asm _emit 0x74
        __asm _emit 0x4e
        cmp dword ptr [ebp - 13ch], 609h
        ; Exact mapped bytes 74 42: je 0x5852f601
        __asm _emit 0x74
        __asm _emit 0x42
        cmp dword ptr [ebp - 13ch], 719h
        ; Exact mapped bytes 74 36: je 0x5852f601
        __asm _emit 0x74
        __asm _emit 0x36
        cmp dword ptr [ebp - 13ch], 829h
        ; Exact mapped bytes 74 2A: je 0x5852f601
        __asm _emit 0x74
        __asm _emit 0x2a
        mov dword ptr [ebp - 13ch], 0a9h
        push 4
        lea ecx, [ebp - 13ch]
        push ecx
        push 4
        push 0
        push 588a69a8h
        mov edx, dword ptr [ebp - 130h]
        push edx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, dword ptr [ebp - 12ch]
        ; Exact mapped bytes 66 8B 8D C4 FE FF FF: mov cx, word ptr [ebp - 0x13c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 88 B4 21 01 00: mov word ptr [eax + 0x121b4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xb4
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        push 100h
        push 0
        lea edx, [ebp - 128h]
        push edx
        ; Exact mapped bytes E8 E8 D7 31 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 144h], 100h
        mov eax, dword ptr [ebp - 150h]
        ; Exact mapped bytes A3 3C D2 8F 58: mov dword ptr [0x588fd23c], eax
        __asm _emit 0xa3
        __asm _emit 0x3c
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 12ch]
        cmp dword ptr [ecx + 121a8h], 0
        ; Exact mapped bytes 0F 84 82 01 00 00: je 0x5852f7d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 00 67 F5 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x67
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + 12148h], 8
        mov eax, dword ptr [ebp - 12ch]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 01: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD CD 2F 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xcd
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 94 75 94 58 00: cmp dword ptr [0x58947594], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x5852f6ec
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes A1 94 75 94 58: mov eax, dword ptr [0x58947594]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 154h], eax
        cmp dword ptr [ebp - 154h], 0
        ; Exact mapped bytes 74 27: je 0x5852f6d8
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 154h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 184h], eax
        push 1
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes FF 95 7C FE FF FF: call dword ptr [ebp - 0x184]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852f6e2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 188h], 0
        ; Exact mapped bytes C7 05 94 75 94 58 00 00 00 00: mov dword ptr [0x58947594], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 49 CD 2F 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xcd
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 98 75 94 58 00: cmp dword ptr [0x58947598], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 50: je 0x5852f751
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 158h], ecx
        cmp dword ptr [ebp - 158h], 0
        ; Exact mapped bytes 74 27: je 0x5852f73d
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 158h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 18ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes FF 95 74 FE FF FF: call dword ptr [ebp - 0x18c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852f747
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 190h], 0
        ; Exact mapped bytes C7 05 98 75 94 58 00 00 00 00: mov dword ptr [0x58947598], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [edx + 12118h], 0
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [eax + 12124h]
        mov dword ptr [ebp - 198h], ecx
        push 35h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 53 F5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x53
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        mov edx, dword ptr [ebp - 194h]
        push edx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 C8 74 F5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x74
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [eax + 12128h]
        mov dword ptr [ebp - 1a0h], ecx
        push 1cah
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 53 F5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x53
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 19ch], eax
        mov edx, dword ptr [ebp - 19ch]
        push edx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 5E 67 F5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x67
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0C: jmp 0x5852f7e1
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 10 9D FF FF: call 0x585294f0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 1
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 62 FD F6 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xfd
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 57 18 30 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x18
        __asm _emit 0x30
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
