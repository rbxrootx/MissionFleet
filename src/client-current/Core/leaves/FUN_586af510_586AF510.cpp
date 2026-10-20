// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AF510 .. +0xEFF bytes.
extern "C" __declspec(naked) void FUN_586af510_586AF510() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888b59fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 190h
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
        mov dword ptr [ebp - 14h], ecx
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
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 74 2D DD FF: call 0x584822d0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x2d
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 588b0b84h
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586af57e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 0F 8D DF 00 00 00: jge 0x586af667
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 75 1A 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x1a
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 37: je 0x586af5d6
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes 8B 0D 9C 07 96 58: mov ecx, dword ptr [0x5896079c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 55 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x55
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 4F 2D DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x2d
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586af5dd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 8ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [eax + edx*4 + 50h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 50h]
        mov dword ptr [ebp - 90h], ecx
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 C9 68 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x68
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 23: jne 0x586af641
        __asm _emit 0x75
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 50h]
        mov dword ptr [ebp - 94h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 72 5F 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x5f
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 21: jmp 0x586af662
        __asm _emit 0xeb
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 50h]
        mov dword ptr [ebp - 98h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 4F 5F 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x5f
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 0E FF FF FF: jmp 0x586af575
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586af679
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 8D E2 00 00 00: jge 0x586af765
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 7A 19 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x19
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 3A: je 0x586af6d4
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 10h]
        add eax, 3
        push eax
        ; Exact mapped bytes 8B 0D 9C 07 96 58: mov ecx, dword ptr [0x5896079c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 54 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x54
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 51 2C DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x2c
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x586af6db
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 0a0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ecx + eax*4 + 5ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 5ch]
        mov dword ptr [ebp - 0a4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 CB 67 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x67
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 23: jne 0x586af73f
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 5ch]
        mov dword ptr [ebp - 0a8h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 74 5E 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x5e
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 21: jmp 0x586af760
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 5ch]
        mov dword ptr [ebp - 0ach], edx
        push 101h
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 51 5E 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x5e
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 0B FF FF FF: jmp 0x586af670
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586af777
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 8D E2 00 00 00: jge 0x586af863
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 7C 18 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x18
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 3A: je 0x586af7d2
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 5
        push ecx
        ; Exact mapped bytes 8B 0D 9C 07 96 58: mov ecx, dword ptr [0x5896079c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 53 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x53
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 53 2B DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x2b
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586af7d9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 0b4h]
        mov dword ptr [edx + ecx*4 + 64h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 0b8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 CD 66 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x66
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 23: jne 0x586af83d
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 0bch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 76 5D 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x5d
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 21: jmp 0x586af85e
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 0c0h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 53 5D 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x5d
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 0B FF FF FF: jmp 0x586af76e
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586af875
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 8D E2 00 00 00: jge 0x586af961
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 7E 17 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x17
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 3A: je 0x586af8d0
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 10h]
        add edx, 7
        push edx
        ; Exact mapped bytes 8B 0D 9C 07 96 58: mov ecx, dword ptr [0x5896079c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 52 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x52
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 55 2A DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x2a
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x586af8d7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0c8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0c8h]
        mov dword ptr [eax + edx*4 + 6ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 6ch]
        mov dword ptr [ebp - 0cch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 CF 65 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x65
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 23: jne 0x586af93b
        __asm _emit 0x75
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 6ch]
        mov dword ptr [ebp - 0d0h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 78 5C 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x5c
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 21: jmp 0x586af95c
        __asm _emit 0xeb
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 6ch]
        mov dword ptr [ebp - 0d4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 55 5C 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x5c
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 0B FF FF FF: jmp 0x586af86c
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586af973
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 8D E2 00 00 00: jge 0x586afa5f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 80 16 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x16
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 3A: je 0x586af9ce
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 10h]
        add eax, 9
        push eax
        ; Exact mapped bytes 8B 0D 9C 07 96 58: mov ecx, dword ptr [0x5896079c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7A 51 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x51
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0d8h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 57 29 DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x29
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586af9d5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0dch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [ecx + eax*4 + 74h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 74h]
        mov dword ptr [ebp - 0e0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 D1 64 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x64
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 23: jne 0x586afa39
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 74h]
        mov dword ptr [ebp - 0e4h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 7A 5B 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x5b
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 21: jmp 0x586afa5a
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 74h]
        mov dword ptr [ebp - 0e8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 57 5B 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x5b
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 0B FF FF FF: jmp 0x586af96a
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586afa71
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 8D E2 00 00 00: jge 0x586afb5d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 82 15 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 3A: je 0x586afacc
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0bh
        push ecx
        ; Exact mapped bytes 8B 0D 9C 07 96 58: mov ecx, dword ptr [0x5896079c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C 50 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x50
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 59 28 DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x28
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x586afad3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0f0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 0f0h]
        mov dword ptr [edx + ecx*4 + 7ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 7ch]
        mov dword ptr [ebp - 0f4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 D3 63 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x63
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 23: jne 0x586afb37
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 7ch]
        mov dword ptr [ebp - 0f8h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 7C 5A 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x5a
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 21: jmp 0x586afb58
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 7ch]
        mov dword ptr [ebp - 0fch], eax
        push 101h
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 59 5A 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x5a
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 0B FF FF FF: jmp 0x586afa68
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586afb6f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 8D EE 00 00 00: jge 0x586afc67
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 84 14 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 3A: je 0x586afbca
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 10h]
        add edx, 0dh
        push edx
        ; Exact mapped bytes 8B 0D 9C 07 96 58: mov ecx, dword ptr [0x5896079c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E 4F DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x4f
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 5B 27 DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x27
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586afbd1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 104h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 104h]
        mov dword ptr [eax + edx*4 + 84h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 84h]
        mov dword ptr [ebp - 108h], ecx
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 CF 62 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x62
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 26: jne 0x586afc3e
        __asm _emit 0x75
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 84h]
        mov dword ptr [ebp - 10ch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 75 59 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x59
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 24: jmp 0x586afc62
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 84h]
        mov dword ptr [ebp - 110h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 4F 59 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x59
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 FF FE FF FF: jmp 0x586afb66
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586afc79
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 8D EE 00 00 00: jge 0x586afd71
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 7A 13 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x13
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 3A: je 0x586afcd4
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 10h]
        add eax, 0fh
        push eax
        ; Exact mapped bytes 8B 0D 9C 07 96 58: mov ecx, dword ptr [0x5896079c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 4E DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x4e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 51 26 DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x26
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x586afcdb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 118h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 118h]
        mov dword ptr [ecx + eax*4 + 8ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 8ch]
        mov dword ptr [ebp - 11ch], edx
        push 0
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 C5 61 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x61
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 26: jne 0x586afd48
        __asm _emit 0x75
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 8ch]
        mov dword ptr [ebp - 120h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 6B 58 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 24: jmp 0x586afd6c
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 8ch]
        mov dword ptr [ebp - 124h], edx
        push 101h
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 45 58 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 FF FE FF FF: jmp 0x586afc70
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586afd83
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 8D EE 00 00 00: jge 0x586afe7b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 70 12 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 3A: je 0x586afdde
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 11h
        push ecx
        ; Exact mapped bytes 8B 0D 9C 07 96 58: mov ecx, dword ptr [0x5896079c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A 4D DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x4d
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 128h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 47 25 DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x25
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586afde5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 12ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [edx + ecx*4 + 94h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 94h]
        mov dword ptr [ebp - 130h], eax
        push 0
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 BB 60 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x60
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 26: jne 0x586afe52
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 94h]
        mov dword ptr [ebp - 134h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 61 57 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x57
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 24: jmp 0x586afe76
        __asm _emit 0xeb
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 94h]
        mov dword ptr [ebp - 138h], eax
        push 101h
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 3B 57 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x57
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 FF FE FF FF: jmp 0x586afd7a
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586afe8d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 8D EE 00 00 00: jge 0x586aff85
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 66 11 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x11
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 3A: je 0x586afee8
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 10h]
        add edx, 13h
        push edx
        ; Exact mapped bytes 8B 0D 9C 07 96 58: mov ecx, dword ptr [0x5896079c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 4C DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x4c
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 13ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 3D 24 DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x586afeef
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 140h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 140h]
        mov dword ptr [eax + edx*4 + 9ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 9ch]
        mov dword ptr [ebp - 144h], ecx
        push 0
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 B1 5F DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x5f
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 26: jne 0x586aff5c
        __asm _emit 0x75
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 9ch]
        mov dword ptr [ebp - 148h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 57 56 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x56
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 24: jmp 0x586aff80
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 9ch]
        mov dword ptr [ebp - 14ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 31 56 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x56
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 FF FE FF FF: jmp 0x586afe84
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586aff97
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 8D EE 00 00 00: jge 0x586b008f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 5C 10 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x10
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 3A: je 0x586afff2
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 10h]
        add eax, 15h
        push eax
        ; Exact mapped bytes 8B 0D 9C 07 96 58: mov ecx, dword ptr [0x5896079c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 4B DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x4b
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 150h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 33 23 DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x23
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586afff9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 154h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 154h]
        mov dword ptr [ecx + eax*4 + 0a4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 0a4h]
        mov dword ptr [ebp - 158h], edx
        push 0
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 A7 5E DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x5e
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 26: jne 0x586b0066
        __asm _emit 0x75
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 0a4h]
        mov dword ptr [ebp - 15ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 4D 55 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x55
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 24: jmp 0x586b008a
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 0a4h]
        mov dword ptr [ebp - 160h], edx
        push 101h
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 27 55 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x55
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 FF FE FF FF: jmp 0x586aff8e
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586b00a1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 8D ED 00 00 00: jge 0x586b0198
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 52 0F 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x0f
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 39: je 0x586b00fb
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 17h
        push ecx
        ; Exact mapped bytes 8B 0D 9C 07 96 58: mov ecx, dword ptr [0x5896079c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C 4A DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x4a
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        push 40h
        push 264h
        push 0
        mov edx, dword ptr [ebp - 164h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 2A 22 DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x22
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b0102
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 168h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 168h]
        mov dword ptr [eax + edx*4 + 0ach], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 16ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 9E 5D DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x5d
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 26: jne 0x586b016f
        __asm _emit 0x75
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 170h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 44 54 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x54
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 24: jmp 0x586b0193
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 174h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 1E 54 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x54
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 00 FF FF FF: jmp 0x586b0098
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586b01aa
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 8D ED 00 00 00: jge 0x586b02a1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 49 0E 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x0e
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 39: je 0x586b0204
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 10h]
        add eax, 19h
        push eax
        ; Exact mapped bytes 8B 0D 9C 07 96 58: mov ecx, dword ptr [0x5896079c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 49 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x49
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        push 40h
        push 264h
        push 0
        mov ecx, dword ptr [ebp - 178h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 21 21 DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x21
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586b020b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 17ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 17ch]
        mov dword ptr [edx + ecx*4 + 0b4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 0b4h]
        mov dword ptr [ebp - 180h], eax
        push 0
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 95 5C DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 26: jne 0x586b0278
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 0b4h]
        mov dword ptr [ebp - 184h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 3B 53 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x53
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 24: jmp 0x586b029c
        __asm _emit 0xeb
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 0b4h]
        mov dword ptr [ebp - 188h], eax
        push 101h
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 15 53 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x53
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 00 FF FF FF: jmp 0x586b01a1
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586b02b3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 8D F6 00 00 00: jge 0x586b03b3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 40 0D 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 3C: je 0x586b0310
        __asm _emit 0x74
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 10h]
        add edx, 1fh
        push edx
        ; Exact mapped bytes 8B 0D 9C 07 96 58: mov ecx, dword ptr [0x5896079c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A 48 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x48
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 18ch], eax
        push 40h
        push 264h
        push 0
        mov eax, dword ptr [ebp - 18ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 18 20 DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x20
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b031a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 190h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 190h]
        mov dword ptr [ecx + eax*4 + 0bch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 0bch]
        mov dword ptr [ebp - 194h], edx
        push 0
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 83 5B DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x5b
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 26: jne 0x586b038a
        __asm _emit 0x75
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 0bch]
        mov dword ptr [ebp - 198h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 29 52 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x52
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 24: jmp 0x586b03ae
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 0bch]
        mov dword ptr [ebp - 19ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 03 52 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x52
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F7 FE FF FF: jmp 0x586b02aa
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 89 81 CC 00 00 00: mov word ptr [ecx + 0xcc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 89 90 CE 00 00 00: mov word ptr [eax + 0xce], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0c4h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 0c8h], 0
        mov eax, 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 89 81 D0 00 00 00: mov word ptr [ecx + 0xd0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
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
