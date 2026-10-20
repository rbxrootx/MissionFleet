// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CA4A0 .. +0x6C5 bytes.
extern "C" __declspec(naked) void FUN_584ca4a0_584CA4A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f055h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0fch
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
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 60h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 68h], 1
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 C4 FB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BF 2A FC FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x2a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 6ch], eax
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 0F 85 74 05 00 00: jne 0x584caa78
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 F6 6A 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x6a
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 61: je 0x584ca582
        __asm _emit 0x74
        __asm _emit 0x61
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 1B FC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0xfc
        __asm _emit 0xff
        add eax, 50h
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 C4 FB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0xfb
        __asm _emit 0xff
        add eax, 99h
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 4ch], edx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 78 A5 FB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xa5
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes A1 10 06 96 58: mov eax, dword ptr [0x58960610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 54h]
        push edx
        push 1
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F3 03 2F 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0x2f
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ca589
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 60h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [edx + ecx + 10h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 10h]
        mov dword ptr [ebp - 64h], ecx
        push 26ach
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 B9 B8 FB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xb8
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 32 6A 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x6a
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 62: je 0x584ca647
        __asm _emit 0x74
        __asm _emit 0x62
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 1A FC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x1a
        __asm _emit 0xfc
        __asm _emit 0xff
        add eax, 50h
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF C3 FB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc3
        __asm _emit 0xfb
        __asm _emit 0xff
        add eax, 0b4h
        mov dword ptr [ebp - 70h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 68h], eax
        push 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 B4 A4 FB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xa4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 78h], ecx
        mov edx, dword ptr [ebp - 6ch]
        push edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        push 2
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 2E 03 2F 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x2f
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ca64e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 7ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [edx + ecx + 10h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 10h]
        mov dword ptr [ebp - 80h], eax
        push 26ach
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 F4 B7 FB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb7
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 70 69 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x69
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x584ca72b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 19 FC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x19
        __asm _emit 0xfc
        __asm _emit 0xff
        add eax, 46h
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 C2 FB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xc2
        __asm _emit 0xfb
        __asm _emit 0xff
        add eax, 0ah
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 84h], edx
        push 2
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 34 A4 FB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xa4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes A1 10 06 96 58: mov eax, dword ptr [0x58960610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 94h], eax
        push 2710h
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        mov edx, dword ptr [ebp - 8ch]
        push edx
        mov eax, dword ptr [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 FA 7B FB FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ca732
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 98h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 98h]
        mov dword ptr [edx + ecx + 8], eax
        push 54h
        ; Exact mapped bytes E8 A6 68 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x68
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x584ca7f5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 19 FC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x19
        __asm _emit 0xfc
        __asm _emit 0xff
        add eax, 46h
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C C2 FB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc2
        __asm _emit 0xfb
        __asm _emit 0xff
        add eax, 0ah
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 9ch], edx
        push 3
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 6A A3 FB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xa3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes A1 10 06 96 58: mov eax, dword ptr [0x58960610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ach], eax
        push 2710h
        mov ecx, dword ptr [ebp - 0a0h]
        push ecx
        mov edx, dword ptr [ebp - 0a4h]
        push edx
        mov eax, dword ptr [ebp - 0a8h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 30 7B FB FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ca7fc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0b0h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0b0h]
        mov dword ptr [ecx + eax + 8], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 8]
        mov dword ptr [ebp - 0b4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 6A AD 2E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xad
        __asm _emit 0x2e
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 8]
        mov dword ptr [ebp - 0b8h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 45 AD 2E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xad
        __asm _emit 0x2e
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x584ca87e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 7
        ; Exact mapped bytes 0F 8D E6 01 00 00: jge 0x584caa6e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 75 67 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x67
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 4], 4
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x584ca931
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 17 FC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x17
        __asm _emit 0xfc
        __asm _emit 0xff
        add eax, 12ch
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 C0 FB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xc0
        __asm _emit 0xfb
        __asm _emit 0xff
        add eax, 190h
        mov dword ptr [ebp - 0c4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0bch], edx
        mov eax, dword ptr [ebp - 14h]
        lea ecx, [eax + eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 2F A2 FB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xa2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes 8B 15 10 06 96 58: mov edx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0cch], edx
        push 2710h
        mov eax, dword ptr [ebp - 0c0h]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        push ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        mov eax, dword ptr [ebp - 0cch]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 F4 79 FB FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x79
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ca938
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0d0h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0d0h]
        mov dword ptr [eax + edx*4 + 18h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 18h]
        mov dword ptr [ebp - 0d4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 38 AC 2E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xac
        __asm _emit 0x2e
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 84 66 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov dword ptr [ebp - 4], 5
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x584caa21
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 17 FC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x17
        __asm _emit 0xfc
        __asm _emit 0xff
        add eax, 12ch
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 C0 FB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc0
        __asm _emit 0xfb
        __asm _emit 0xff
        add eax, 190h
        mov dword ptr [ebp - 0e0h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0d8h], eax
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [ecx + ecx + 5]
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 3E A1 FB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xa1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes A1 10 06 96 58: mov eax, dword ptr [0x58960610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e8h], eax
        push 2710h
        mov ecx, dword ptr [ebp - 0dch]
        push ecx
        mov edx, dword ptr [ebp - 0e0h]
        push edx
        mov eax, dword ptr [ebp - 0e4h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 04 79 FB FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x79
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x584caa28
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0ech], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ech]
        mov dword ptr [ecx + eax*4 + 34h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 34h]
        mov dword ptr [ebp - 0f0h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 48 AB 2E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xab
        __asm _emit 0x2e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 07 FE FF FF: jmp 0x584ca875
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 64h], 1
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 8]
        mov dword ptr [ebp - 0f4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 F6 B4 FB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xb4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 8]
        mov dword ptr [ebp - 0f8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 D4 B4 FB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 10h]
        mov dword ptr [ebp - 0fch], edx
        push 0
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 B2 B4 FB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xb4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 10h]
        mov dword ptr [ebp - 100h], edx
        push 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 90 B4 FB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xb4
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x584cab13
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 7
        ; Exact mapped bytes 7D 3D: jge 0x584cab56
        __asm _emit 0x7d
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 18h]
        mov dword ptr [ebp - 104h], eax
        push 0
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 5A B4 FB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 34h]
        mov dword ptr [ebp - 108h], eax
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 3D B4 FB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B4: jmp 0x584cab0a
        __asm _emit 0xeb
        __asm _emit 0xb4
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
        ret
    }
}
