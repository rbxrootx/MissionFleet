// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E9880 .. +0x752 bytes.
extern "C" __declspec(naked) void FUN_584e9880_584E9880() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f7a3h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 128h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], ecx
        mov dword ptr [ebp - 60h], 0
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 09: jmp 0x584e98c8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 58h]
        add eax, 1
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 2
        ; Exact mapped bytes 0F 84 E6 06 00 00: je 0x584e9fb8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 54h]
        movzx edx, byte ptr [ecx + 78h]
        sub edx, 1
        imul eax, edx, 418h
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + 6ch]
        add edx, eax
        mov eax, dword ptr [ebp - 58h]
        lea ecx, [edx + eax*8 + 404h]
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [ebp - 54h]
        cmp dword ptr [eax + edx*4 + 64h], 0
        ; Exact mapped bytes 0F 85 1B 01 00 00: jne 0x584e9a23
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 F5 76 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x76
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 62: je 0x584e9984
        __asm _emit 0x74
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 128h], edx
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 12ch], ecx
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 0fch], eax
        push 2
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 7D B1 F9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xb1
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        push 7cffh
        mov ecx, dword ptr [ebp - 128h]
        push ecx
        mov edx, dword ptr [ebp - 12ch]
        push edx
        mov eax, dword ptr [ebp - 130h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 91 CE F9 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xce
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x584e998b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 8ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ecx + eax*4 + 64h], edx
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 90h], edx
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 88 5B FB FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x5b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 94h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 C8 BB 2C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xbb
        __asm _emit 0x2c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 98h], edx
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 3B C4 F9 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc4
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 9ch], edx
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 7E C3 F9 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xc3
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        cmp dword ptr [ecx + eax*4 + 5ch], 0
        ; Exact mapped bytes 0F 85 38 01 00 00: jne 0x584e9b6c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 C9 75 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x75
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 62: je 0x584e9ab0
        __asm _emit 0x74
        __asm _emit 0x62
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0a8h], edx
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 0a0h], ecx
        push 3
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 51 B0 F9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xb0
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        push 7d00h
        mov edx, dword ptr [ebp - 0a4h]
        push edx
        mov eax, dword ptr [ebp - 0a8h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        push ecx
        mov edx, dword ptr [ebp - 54h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 65 CD F9 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xcd
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x584e9ab7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 0b0h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [ebp - 0b0h]
        mov dword ptr [edx + ecx*4 + 5ch], eax
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx + ecx*4 + 5ch]
        mov dword ptr [ebp - 0b4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 5C 5A FB FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x5a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx + ecx*4 + 5ch]
        mov dword ptr [ebp - 0b8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 9C BA 2C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xba
        __asm _emit 0x2c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx + ecx*4 + 5ch]
        mov dword ptr [ebp - 0bch], eax
        push 0
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 0F C3 F9 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc3
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx + ecx*4 + 5ch]
        mov dword ptr [ebp - 0c0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 52 C2 F9 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc2
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx + ecx*4 + 5ch]
        mov dword ptr [ebp - 0c4h], eax
        push 64h
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 D5 B9 2C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xb9
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 60h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 0D: jne 0x584e9b81
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 60h]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x584e9c8b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ecx + eax*4 + 5ch]
        ; Exact mapped bytes E8 10 CE F9 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xce
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + edx*4 + 5ch]
        mov dword ptr [ebp - 0c8h], ecx
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 FF BA 2C 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xba
        __asm _emit 0x2c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx + ecx*4 + 5ch]
        mov dword ptr [ebp - 0cch], eax
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 5D BB 2C 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xbb
        __asm _emit 0x2c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + eax*4 + 5ch]
        mov dword ptr [ebp - 0d0h], edx
        push 1
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 F0 C2 F9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xc2
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + eax*4 + 5ch]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 6D 51 FC FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x51
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ecx + eax*4 + 64h]
        ; Exact mapped bytes E8 8E CD F9 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xcd
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + edx*4 + 64h]
        mov dword ptr [ebp - 0d4h], ecx
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 7D BA 2C 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xba
        __asm _emit 0x2c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 0d8h], eax
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 DB BA 2C 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xba
        __asm _emit 0x2c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 0dch], edx
        push 1
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 6E C2 F9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc2
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 EB 50 FC FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 28 03 00 00: jmp 0x584e9fb3
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 58h], 1
        ; Exact mapped bytes 75 40: jne 0x584e9cd1
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + eax*4 + 5ch]
        mov dword ptr [ebp - 0e0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 32 C2 F9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xc2
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 0e4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 15 C2 F9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xc2
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E7 02 00 00: jmp 0x584e9fb8
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        movzx ecx, byte ptr [eax + 78h]
        sub ecx, 1
        imul edx, ecx, 418h
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 6ch]
        mov edx, dword ptr [ecx + edx + 414h]
        mov dword ptr [ebp - 5ch], edx
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 0F 84 09 02 00 00: je 0x584e9f04
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 09 AA FD FF: call 0x584c4710
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esi, eax
        lea ecx, [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 FB A9 FD FF: call 0x584c4710
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xa9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [esi + 8]
        sub edx, dword ptr [eax]
        mov eax, edx
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 64h], eax
        lea eax, [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 E0 A9 FD FF: call 0x584c4710
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xa9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esi, eax
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 D2 A9 FD FF: call 0x584c4710
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xa9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0ch]
        sub edx, dword ptr [eax + 4]
        mov eax, edx
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 68h], eax
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ecx + eax*4 + 5ch]
        ; Exact mapped bytes E8 43 CC F9 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xcc
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + edx*4 + 5ch]
        mov dword ptr [ebp - 0ech], ecx
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 7E 08: jle 0x584e9d7b
        __asm _emit 0x7e
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 7ch], edx
        ; Exact mapped bytes EB 07: jmp 0x584e9d82
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0ah
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 36 CC F9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xcc
        __asm _emit 0xf9
        __asm _emit 0xff
        add eax, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 0e8h], eax
        mov eax, dword ptr [ebp - 0e8h]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 0B B9 2C 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xb9
        __asm _emit 0x2c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx + ecx*4 + 5ch]
        mov dword ptr [ebp - 0f4h], eax
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 7E 08: jle 0x584e9dc3
        __asm _emit 0x7e
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 80h], ecx
        ; Exact mapped bytes EB 07: jmp 0x584e9dca
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0ah
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 DE 22 FA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x22
        __asm _emit 0xfa
        __asm _emit 0xff
        add eax, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 0f0h], eax
        mov edx, dword ptr [ebp - 0f0h]
        push edx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 43 B9 2C 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xb9
        __asm _emit 0x2c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + eax*4 + 5ch]
        mov dword ptr [ebp - 0f8h], edx
        push 1
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 D6 C0 F9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc0
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + eax*4 + 5ch]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 53 4F FC FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x4f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ecx + eax*4 + 64h]
        ; Exact mapped bytes E8 74 CB F9 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xcb
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + edx*4 + 64h]
        mov dword ptr [ebp - 100h], ecx
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 7E 0B: jle 0x584e9e4d
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 84h], edx
        ; Exact mapped bytes EB 0A: jmp 0x584e9e57
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0ah
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 61 CB F9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xcb
        __asm _emit 0xf9
        __asm _emit 0xff
        add eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 118h], eax
        mov eax, dword ptr [ebp - 118h]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 33 B8 2C 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xb8
        __asm _emit 0x2c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 108h], eax
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 7E 0B: jle 0x584e9e9e
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 88h], ecx
        ; Exact mapped bytes EB 0A: jmp 0x584e9ea8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0ah
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 00 22 FA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x22
        __asm _emit 0xfa
        __asm _emit 0xff
        add eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 104h], eax
        mov edx, dword ptr [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 62 B8 2C 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xb8
        __asm _emit 0x2c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 10ch], edx
        push 1
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 F5 BF F9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xbf
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 72 4E FC FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x584e9fb3
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + eax*4 + 5ch]
        mov dword ptr [ebp - 110h], edx
        push -64h
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 8F B7 2C 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xb7
        __asm _emit 0x2c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + eax*4 + 5ch]
        mov dword ptr [ebp - 114h], edx
        push -64h
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 F2 B7 2C 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xb7
        __asm _emit 0x2c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 134h], edx
        push -64h
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 55 B7 2C 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xb7
        __asm _emit 0x2c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 11ch], edx
        push -64h
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 B8 B7 2C 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x2c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + eax*4 + 5ch]
        mov dword ptr [ebp - 120h], edx
        push 0
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 4B BF F9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xbf
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 124h], edx
        push 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 2E BF F9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xbf
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 07 F9 FF FF: jmp 0x584e98bf
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
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
        pop esi
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 82 70 34 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x70
        __asm _emit 0x34
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
