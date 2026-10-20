// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877F4A0 .. +0x6B2 bytes.
extern "C" __declspec(naked) void FUN_5877f4a0_5877F4A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58890758h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0bch
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
        push 0
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A8 54 03 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 588b5b3ch
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 5ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 7D D5 FF: call 0x584d72d0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x7d
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 63 D1 FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x63
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 58h]
        or ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 0F 84 5B 01 00 00: je 0x5877f684
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 5ch]
        ; Exact mapped bytes E8 7C DA D0 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xda
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 6B: jne 0x5877f5a8
        __asm _emit 0x75
        __asm _emit 0x6b
        push 58h
        ; Exact mapped bytes E8 C0 1A 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x1a
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 35: je 0x5877f589
        __asm _emit 0x74
        __asm _emit 0x35
        push 0d0h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C 55 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x55
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8C 72 D0 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x72
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5877f590
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 64h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [eax + 50h], ecx
        ; Exact mapped bytes E9 D7 00 00 00: jmp 0x5877f67f
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 75 68: jne 0x5877f616
        __asm _emit 0x75
        __asm _emit 0x68
        push 58h
        ; Exact mapped bytes E8 4F 1A 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x1a
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 35: je 0x5877f5fa
        __asm _emit 0x74
        __asm _emit 0x35
        push 0d1h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB 54 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x54
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 1B 72 D0 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x72
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5877f601
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 6ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [edx + 50h], eax
        ; Exact mapped bytes EB 69: jmp 0x5877f67f
        __asm _emit 0xeb
        __asm _emit 0x69
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 75 63: jne 0x5877f67f
        __asm _emit 0x75
        __asm _emit 0x63
        push 58h
        ; Exact mapped bytes E8 E1 19 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x19
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 32: je 0x5877f665
        __asm _emit 0x74
        __asm _emit 0x32
        push 0
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 54 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B0 71 D0 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5877f66c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [ecx + 50h], edx
        ; Exact mapped bytes E9 EC 00 00 00: jmp 0x5877f770
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 74 77: je 0x5877f704
        __asm _emit 0x74
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 5ch]
        ; Exact mapped bytes E8 38 53 E5 FF: call 0x585d49d0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x53
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 68: je 0x5877f704
        __asm _emit 0x74
        __asm _emit 0x68
        push 58h
        ; Exact mapped bytes E8 61 19 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x19
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 35: je 0x5877f6e8
        __asm _emit 0x74
        __asm _emit 0x35
        push 0d0h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 54 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 2D 71 D0 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x5877f6ef
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 7ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [edx + 50h], eax
        ; Exact mapped bytes EB 6C: jmp 0x5877f770
        __asm _emit 0xeb
        __asm _emit 0x6c
        push 58h
        ; Exact mapped bytes E8 F9 18 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x18
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 35: je 0x5877f750
        __asm _emit 0x74
        __asm _emit 0x35
        push 0d1h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 53 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x53
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C5 70 D0 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5877f757
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 36: je 0x5877f7af
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 88h], edx
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 BE FD D1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 8ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 02 5E 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        push 58h
        ; Exact mapped bytes E8 4E 18 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x18
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 41: je 0x5877f807
        __asm _emit 0x74
        __asm _emit 0x41
        push 0d4h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 52 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x52
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        sub edx, 1
        push edx
        mov eax, dword ptr [ebp + 18h]
        add eax, 2
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp - 90h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 0E 70 D0 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x70
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5877f80e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 94h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [edx + 54h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 54h], 0
        ; Exact mapped bytes 74 36: je 0x5877f866
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 98h], eax
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 07 FD D1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xfd
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [ebp - 9ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 4B 5D 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x5d
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 64h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x5877f900
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 74 7E: je 0x5877f900
        __asm _emit 0x74
        __asm _emit 0x7e
        push 70h
        ; Exact mapped bytes E8 7B 17 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x17
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 42: je 0x5877f8db
        __asm _emit 0x74
        __asm _emit 0x42
        push 1
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 18h]
        add eax, 10h
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 0c8h
        push ecx
        mov edx, dword ptr [ebp + 18h]
        sub edx, 6
        push edx
        mov eax, dword ptr [ebp + 14h]
        add eax, 0ah
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
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 DA 2A D0 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x2a
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5877f8e2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ecx + 58h], edx
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x5877f9ab
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x5877f9a1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x5877f9a1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        ; Exact mapped bytes E8 E3 16 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x16
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 42: je 0x5877f973
        __asm _emit 0x74
        __asm _emit 0x42
        push 1
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 18h]
        add ecx, 10h
        push ecx
        mov edx, dword ptr [ebp + 14h]
        add edx, 0c8h
        push edx
        mov eax, dword ptr [ebp + 18h]
        sub eax, 6
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 0ah
        push ecx
        ; Exact mapped bytes 8B 15 24 20 96 58: mov edx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 52 23 00 00: call 0x58781cc0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x5877f97a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0a4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0a4h]
        mov dword ptr [edx + 58h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 58h]
        ; Exact mapped bytes E8 F2 09 00 00: call 0x58780390
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0A: jmp 0x5877f9ab
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 58h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 74 5F: je 0x5877fa13
        __asm _emit 0x74
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 74 56: je 0x5877fa13
        __asm _emit 0x74
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 58h]
        mov dword ptr [ebp - 0ach], eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 5ch]
        ; Exact mapped bytes E8 6C CA D0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xca
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 85 50 D0 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xd0
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 0a8h], eax
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 AA 66 D0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x66
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 0b0h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 6E 64 D0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x64
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 60h], 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 19 64 D0 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x64
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], 3f4h
        ; Exact mapped bytes 75 46: jne 0x5877fa7a
        __asm _emit 0x75
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 74 3D: je 0x5877fa7a
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 0b4h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        sub eax, 73h
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 52 5C 03 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 0b8h], edx
        push 2
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 09 A3 D3 FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa3
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4D: jmp 0x5877fac7
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 4], 0ch
        ; Exact mapped bytes 75 44: jne 0x5877fac7
        __asm _emit 0x75
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 74 3B: je 0x5877fac7
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 58h]
        mov dword ptr [ebp - 0bch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 0ah
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 03 5C 03 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 0c0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 BA A2 D3 FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xa2
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 8], 25ch
        ; Exact mapped bytes 75 2D: jne 0x5877fb00
        __asm _emit 0x75
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 74 24: je 0x5877fb00
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 0c4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 0fh
        push ecx
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 33 5C 03 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 37: jmp 0x5877fb37
        __asm _emit 0xeb
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 8], 0a4h
        ; Exact mapped bytes 75 2B: jne 0x5877fb37
        __asm _emit 0x75
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 74 22: je 0x5877fb37
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 0c8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 0fh
        push ecx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 FA 5B 03 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x5b
        __asm _emit 0x03
        __asm _emit 0x00
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
