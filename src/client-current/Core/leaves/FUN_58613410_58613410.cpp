// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58613410 .. +0x881 bytes.
extern "C" __declspec(naked) void FUN_58613410_58613410() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58886ba8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0f8h
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
        ; Exact mapped bytes 0F BF 45 18: movsx eax, word ptr [ebp + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x18
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 18 EE E6 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xee
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 588ae108h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 60h], eax
        push 54h
        ; Exact mapped bytes E8 8C DB 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xdb
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 32: je 0x586134ba
        __asm _emit 0x74
        __asm _emit 0x32
        push 5
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8E 16 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x16
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes 0F BF 4D 18: movsx ecx, word ptr [ebp + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x18
        sub ecx, 9
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6B EE E6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xee
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586134c1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ecx + 64h], edx
        push 54h
        ; Exact mapped bytes E8 23 DB 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xdb
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 38: je 0x58613529
        __asm _emit 0x74
        __asm _emit 0x38
        push 2ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 25 16 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x16
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes 0F BF 45 18: movsx eax, word ptr [ebp + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x18
        sub eax, 0ah
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 FC ED E6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xed
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58613530
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 8ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [eax + 68h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 90h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 4B 20 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x20
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 97 DA 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xda
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 38: je 0x586135b5
        __asm _emit 0x74
        __asm _emit 0x38
        push 6
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 99 15 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x15
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes 0F BF 4D 18: movsx ecx, word ptr [ebp + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x18
        sub ecx, 7
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 70 ED E6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xed
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586135bc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 98h]
        mov dword ptr [ecx + 6ch], edx
        push 54h
        ; Exact mapped bytes E8 28 DA 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xda
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 38: je 0x58613624
        __asm _emit 0x74
        __asm _emit 0x38
        push 7
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2A 15 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x15
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes 0F BF 45 18: movsx eax, word ptr [ebp + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x18
        sub eax, 8
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 01 ED E6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xed
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861362b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0a0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0a0h]
        mov dword ptr [eax + 70h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 0a4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 50 1F 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x1f
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        push 94h
        ; Exact mapped bytes E8 99 D9 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd9
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 43: je 0x586136be
        __asm _emit 0x74
        __asm _emit 0x43
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 96h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 190h
        push edx
        mov eax, dword ptr [ebp + 14h]
        add eax, 1eh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0ch
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 17 CC 1A 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xcc
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586136c5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0a8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0a8h]
        mov dword ptr [ecx + eax + 74h], edx
        push 94h
        ; Exact mapped bytes E8 13 D9 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd9
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 44: je 0x58613745
        __asm _emit 0x74
        __asm _emit 0x44
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 14h]
        add eax, 96h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 146h
        push ecx
        mov edx, dword ptr [ebp + 14h]
        add edx, 1eh
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0aeh
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 90 CB 1A 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xcb
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861374c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ach]
        mov dword ptr [edx + ecx + 74h], eax
        push 94h
        ; Exact mapped bytes E8 8C D8 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xd8
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 46: je 0x586137ce
        __asm _emit 0x74
        __asm _emit 0x46
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 96h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 121h
        push edx
        mov eax, dword ptr [ebp + 14h]
        add eax, 1eh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0e1h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 07 CB 1A 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xcb
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586137d5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0b0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0b0h]
        mov dword ptr [eax + edx + 74h], ecx
        push 94h
        ; Exact mapped bytes E8 04 D8 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xd8
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 44: je 0x58613854
        __asm _emit 0x74
        __asm _emit 0x44
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 14h]
        add edx, 96h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0afh
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 1eh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 8fh
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 81 CA 1A 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xca
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861385b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0b4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0b4h]
        mov dword ptr [edx + ecx + 74h], eax
        push 94h
        ; Exact mapped bytes E8 7D D7 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd7
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 46: je 0x586138dd
        __asm _emit 0x74
        __asm _emit 0x46
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 96h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 15eh
        push edx
        mov eax, dword ptr [ebp + 14h]
        add eax, 1eh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 116h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 F8 C9 1A 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586138e4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 0b8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0b8h]
        mov dword ptr [eax + edx + 74h], ecx
        push 94h
        ; Exact mapped bytes E8 F4 D6 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xd6
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 44: je 0x58613964
        __asm _emit 0x74
        __asm _emit 0x44
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 14h]
        add edx, 96h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 190h
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 1eh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 15dh
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 71 C9 1A 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861396b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 0bch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0bch]
        mov dword ptr [edx + ecx + 74h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5861399f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 6
        ; Exact mapped bytes 0F 8D 9A 00 00 00: jge 0x58613a43
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 74h]
        mov dword ptr [ebp - 0c0h], ecx
        push 0dh
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 2A BA E8 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xba
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 74h]
        mov dword ptr [ebp - 0c8h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 74h]
        ; Exact mapped bytes E8 CB 10 F2 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x10
        __asm _emit 0xf2
        __asm _emit 0xff
        imul ecx, eax, 5
        mov dword ptr [ebp - 0c4h], ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 50 34 EA FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x34
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 74h]
        mov dword ptr [ebp - 0cch], edx
        movzx eax, word ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 60 24 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 74h]
        mov dword ptr [ebp - 0d0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 A3 23 E7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x23
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 53 FF FF FF: jmp 0x58613996
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 B7 D5 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xd5
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 67: je 0x58613ac4
        __asm _emit 0x74
        __asm _emit 0x67
        push 7
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 69 10 E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x10
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d8h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0dch], edx
        movzx eax, word ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 9eh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 122h
        push edx
        mov eax, dword ptr [ebp - 0d4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0d8h]
        push edx
        mov eax, dword ptr [ebp - 0dch]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 21 82 EB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x82
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58613acb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 0e0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0e0h]
        mov dword ptr [edx + 8ch], eax
        push 0ach
        ; Exact mapped bytes E8 13 D5 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd5
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 67: je 0x58613b68
        __asm _emit 0x74
        __asm _emit 0x67
        push 8
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C5 0F E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x0f
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e8h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ech], edx
        movzx eax, word ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 9eh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 154h
        push edx
        mov eax, dword ptr [ebp - 0e4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0e8h]
        push edx
        mov eax, dword ptr [ebp - 0ech]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 7D 81 EB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x81
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x58613b6f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 0f0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0f0h]
        mov dword ptr [edx + 90h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 0f4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 06 1A 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x1a
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 0f8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 E7 19 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x19
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 33 D4 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd4
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 3E: je 0x58613c1f
        __asm _emit 0x74
        __asm _emit 0x3e
        push 22h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 35 0F E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x0f
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes 0F BF 55 18: movsx edx, word ptr [ebp + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x18
        sub edx, 1
        push edx
        mov eax, dword ptr [ebp + 14h]
        add eax, 38h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 5
        push ecx
        mov edx, dword ptr [ebp - 0fch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 06 E7 E6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xe7
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58613c26
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 100h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 100h]
        mov dword ptr [edx + 9ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 104h], edx
        push 101h
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 4F 19 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x19
        __asm _emit 0x1a
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 25 23 E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x23
        __asm _emit 0xe7
        __asm _emit 0xff
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EB 20 E7 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x20
        __asm _emit 0xe7
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
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
