// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58708420 .. +0x33F bytes.
extern "C" __declspec(naked) void FUN_58708420_58708420() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888d9c0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 64h
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
        ; Exact mapped bytes E8 07 9E D7 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x9e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b3e68h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CD 77 DF FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x77
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 68h], 0
        push 54h
        ; Exact mapped bytes E8 70 8B 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x8b
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 32: je 0x587084d6
        __asm _emit 0x74
        __asm _emit 0x32
        push 6ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F C6 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc6
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 320h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 4F 9E D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x9e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587084dd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ecx + 60h], edx
        push 10ch
        ; Exact mapped bytes E8 0A 8B 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x8b
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 45: je 0x5870854f
        __asm _emit 0x74
        __asm _emit 0x45
        push 646464h
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 3ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0dch
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 21h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 3ch
        push eax
        ; Exact mapped bytes 8B 0D 3C 20 96 58: mov ecx, dword ptr [0x5896203c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 46 78 DC FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58708556
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ecx + 6ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 3ch], ecx
        push 3e8h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 01 D9 D7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xd9
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 40h], eax
        push 10h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 5E 3B DA FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x3b
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        push 0d4h
        ; Exact mapped bytes E8 67 8A 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x8a
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 29: je 0x587085d6
        __asm _emit 0x74
        __asm _emit 0x29
        push 3e8h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0c4h
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 9F C9 E2 FF: call 0x58534f70
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xc9
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587085dd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 44h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [edx + 70h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 50h], edx
        push 16h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7A C4 D7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xc4
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        push 2
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A C4 D7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xc4
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 47 D6 E2 FF: call 0x58535c70
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xd6
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 70h]
        ; Exact mapped bytes E8 AC D5 E2 FF: call 0x58535be0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd5
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 58h], ecx
        push 8ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 C4 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        push 0
        push 0
        mov edx, dword ptr [ebp - 54h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 90 D6 E2 FF: call 0x58535cf0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xd6
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 60h], ecx
        push 8dh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 C4 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xc4
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        push 0
        push 0
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 04 D7 E2 FF: call 0x58535d90
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xd7
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 68h], ecx
        push 8eh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B C4 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xc4
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 64h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 D6 D5 E2 FF: call 0x58535c90
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xd5
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 6ch], ecx
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 0F D7 E2 FF: call 0x58535de0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 70h], eax
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 EC F6 D7 FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf6
        __asm _emit 0xd7
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F2 D6 D7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xd6
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 7ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 78h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58708714
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 7D 1E: jge 0x58708738
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 8
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 80h]
        mov ecx, 1
        imul edx, ecx, 0
        mov byte ptr [eax + edx], 0
        ; Exact mapped bytes EB D3: jmp 0x5870870b
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 20h]
        mov dword ptr [eax + 2080h], ecx
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
