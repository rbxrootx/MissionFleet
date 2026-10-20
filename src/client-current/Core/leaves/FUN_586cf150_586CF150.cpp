// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586CF150 .. +0x95C bytes.
extern "C" __declspec(naked) void FUN_586cf150_586CF150() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888c22ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 130h
        push esi
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
        ; Exact mapped bytes E8 63 C5 E9 FF: call 0x5856b700
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc5
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b2068h
        push 54h
        ; Exact mapped bytes E8 50 1E 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x1e
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 38: je 0x586cf1fc
        __asm _emit 0x74
        __asm _emit 0x38
        push 20fh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C 59 DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x59
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        push 64h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 16h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 2
        push edx
        mov eax, dword ptr [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 29 31 DB FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x31
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586cf203
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 6ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [eax + 84h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 70h], eax
        push 0b4h
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 0E 63 0E 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x63
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 74h], edx
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 58 6B DB FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x6b
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 B4 1D 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x1d
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 4A: je 0x586cf2aa
        __asm _emit 0x74
        __asm _emit 0x4a
        push 20eh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 58 DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x58
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 7ch], ecx
        push 82h
        mov edx, dword ptr [ebp + 10h]
        add edx, 11ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 2
        push eax
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 7B 30 DB FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x30
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x586cf2b1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ecx + 8ch], edx
        push 54h
        ; Exact mapped bytes E8 36 1D 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x1d
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 4D: je 0x586cf32b
        __asm _emit 0x74
        __asm _emit 0x4d
        push 210h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 58 DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x58
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 88h], ecx
        push 63h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0ah
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 FA 2F DB FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x2f
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586cf332
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ecx + 90h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 90h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 43 62 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x62
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 94h], eax
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 B7 6A DB FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x6a
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 73 1C 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x1c
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 7C: je 0x586cf41d
        __asm _emit 0x74
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 84h]
        ; Exact mapped bytes E8 01 CD DB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xcd
        __asm _emit 0xdb
        __asm _emit 0xff
        add eax, 11ch
        mov dword ptr [ebp - 98h], eax
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 84h]
        ; Exact mapped bytes E8 E8 CC DB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xdb
        __asm _emit 0xff
        add eax, 10ch
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0a0h], eax
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 78h
        push edx
        mov eax, dword ptr [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0fh
        push ecx
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 98 2F DB FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x2f
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x586cf424
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0a4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0a4h]
        mov dword ptr [edx + 94h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 0a8h], edx
        push 8ch
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 21 6A DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x6a
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 9D 1B 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x1b
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x586cf50f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes E8 27 CC DB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xcc
        __asm _emit 0xdb
        __asm _emit 0xff
        add eax, 11ch
        mov dword ptr [ebp - 0ach], eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 84h]
        ; Exact mapped bytes E8 0E CC DB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xcc
        __asm _emit 0xdb
        __asm _emit 0xff
        add eax, 10ch
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 0b8h], ecx
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp - 0ach]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0d2h
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 84h
        push edx
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 0b8h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 A6 2E DB FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x2e
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586cf516
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0bch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0bch]
        mov dword ptr [edx + ecx + 11ch], eax
        push 70h
        ; Exact mapped bytes E8 C2 1A 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x1a
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x586cf5e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 84h]
        ; Exact mapped bytes E8 4C CB DB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xcb
        __asm _emit 0xdb
        __asm _emit 0xff
        add eax, 11ch
        mov dword ptr [ebp - 0c0h], eax
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 84h]
        ; Exact mapped bytes E8 33 CB DB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xcb
        __asm _emit 0xdb
        __asm _emit 0xff
        add eax, 10ch
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0c8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 0cch], edx
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp - 0c0h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0d2h
        push ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0aah
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 0cch]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 CC 2D DB FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x2d
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x586cf5f0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0d0h]
        mov dword ptr [edx + ecx + 11ch], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 11ch]
        mov dword ptr [ebp - 0d4h], ecx
        push 2710h
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 43 68 DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x68
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 11ch]
        mov dword ptr [ebp - 0d8h], ecx
        push 2710h
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 1B 68 DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x68
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586cf678
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 0F 8D 51 03 00 00: jge 0x586cf9d3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x51
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 7B 19 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x19
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x586cf738
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes E8 05 CA DB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xca
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 4
        lea edx, [eax + ecx + 14h]
        mov dword ptr [ebp - 0dch], edx
        mov esi, dword ptr [ebp - 14h]
        shl esi, 4
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes E8 E1 C9 DB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc9
        __asm _emit 0xdb
        __asm _emit 0xff
        lea ecx, [eax + esi + 4]
        mov dword ptr [ebp - 0e0h], ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 0e8h], ecx
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp - 0dch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 8ch
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 8
        push edx
        mov eax, dword ptr [ebp - 0e4h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 0e8h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 7D 2C DB FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x2c
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586cf73f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0ech], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ech]
        mov dword ptr [ecx + eax*4 + 9ch], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 9ch]
        mov dword ptr [ebp - 0f0h], edx
        push 2710h
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 FE 66 DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x66
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 9ch]
        mov dword ptr [ebp - 0f4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 EE 67 DB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x67
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 57 18 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x18
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 6D: je 0x586cf82a
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes E8 E5 C8 DB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xc8
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 4
        lea edx, [eax + ecx + 6]
        mov dword ptr [ebp - 0f8h], edx
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 52 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 100h], ecx
        mov edx, dword ptr [ebp - 0f8h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 8ch
        push eax
        push 4
        mov ecx, dword ptr [ebp - 0fch]
        push ecx
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 4B B1 0E 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xb1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x586cf831
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 104h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [edx + ecx*4 + 124h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 124h]
        mov dword ptr [ebp - 108h], eax
        push 2710h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 0C 66 DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x66
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 124h]
        mov dword ptr [ebp - 10ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 19 5D 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x5d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 124h]
        mov dword ptr [ebp - 110h], eax
        push 0
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 D9 66 DB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x66
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 42 17 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x17
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 6E: je 0x586cf940
        __asm _emit 0x74
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 84h]
        ; Exact mapped bytes E8 D0 C7 DB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xc7
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        shl edx, 4
        lea eax, [eax + edx + 6]
        mov dword ptr [ebp - 114h], eax
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 51 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x51
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 11ch], edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0aah
        push ecx
        push 4
        mov edx, dword ptr [ebp - 118h]
        push edx
        mov eax, dword ptr [ebp - 11ch]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 35 B0 0E 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xb0
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586cf947
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 120h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 120h]
        mov dword ptr [eax + edx*4 + 1a4h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 1a4h]
        mov dword ptr [ebp - 124h], ecx
        push 2710h
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 F6 64 DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x64
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 1a4h]
        mov dword ptr [ebp - 128h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 03 5C 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x5c
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 1a4h]
        mov dword ptr [ebp - 12ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 C3 65 DB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x65
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9C FC FF FF: jmp 0x586cf66f
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 27 16 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x16
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 66: je 0x586cfa53
        __asm _emit 0x74
        __asm _emit 0x66
        push 4
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 50 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x50
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 134h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 138h], eax
        push 7d0h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 132h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp - 130h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 134h]
        push edx
        mov eax, dword ptr [ebp - 138h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 92 C2 DF FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xc2
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x586cfa5a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 13ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 13ch]
        mov dword ptr [edx + 224h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 228h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 22ch], 0
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
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
