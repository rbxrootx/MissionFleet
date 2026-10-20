// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B3530 .. +0x5C8 bytes.
extern "C" __declspec(naked) void FUN_586b3530_586B3530() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888b733h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0a0h
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
        ; Exact mapped bytes E8 84 81 EB FF: call 0x5856b700
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b0c20h
        push 54h
        ; Exact mapped bytes E8 71 DA 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xda
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 35: je 0x586b35d8
        __asm _emit 0x74
        __asm _emit 0x35
        push 98h
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D 15 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x15
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 4D ED DC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xed
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586b35df
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ecx + 84h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 68h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 A2 1F 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x1f
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 EE D9 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xd9
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 35: je 0x586b365b
        __asm _emit 0x74
        __asm _emit 0x35
        push 99h
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA 14 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x14
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 6ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 CA EC DC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xec
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b3662
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 70h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [edx + 88h], eax
        push 54h
        ; Exact mapped bytes E8 85 D9 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 35: je 0x586b36c4
        __asm _emit 0x74
        __asm _emit 0x35
        push 97h
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 14 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x14
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 61 EC DC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xec
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586b36cb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [ecx + 8ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 7ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 B6 1E 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x1e
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        push 70h
        ; Exact mapped bytes E8 02 D9 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xd9
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 46: je 0x586b3758
        __asm _emit 0x74
        __asm _emit 0x46
        push 1e1e1eh
        push 0
        push 0dcdcdch
        mov edx, dword ptr [ebp + 10h]
        add edx, 14h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 130h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 4
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 8ch
        push edx
        ; Exact mapped bytes A1 34 20 96 58: mov eax, dword ptr [0x58962034]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 5D EC DC FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xec
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b375f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 80h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [eax + 0b4h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 84h], eax
        push 3e8h
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 EC 26 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x26
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586b37a7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 7
        ; Exact mapped bytes 0F 8D B9 00 00 00: jge 0x586b386a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 184h
        ; Exact mapped bytes E8 49 D8 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xd8
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 4F: je 0x586b381a
        __asm _emit 0x74
        __asm _emit 0x4f
        push 1e1e1eh
        push 0
        push 0aaaaaah
        imul edx, dword ptr [ebp - 14h], 0ch
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 41h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0a4h
        push edx
        imul eax, dword ptr [ebp - 14h], 0ch
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 36h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 40h
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 EB A7 E1 FF: call 0x584ce000
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xa7
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586b3821
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [edx + ecx*4 + 90h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 90h]
        mov dword ptr [ebp - 8ch], eax
        push 3e8h
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 1C 26 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x26
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 34 FF FF FF: jmp 0x586b379e
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0fch
        ; Exact mapped bytes E8 90 D7 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xd7
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 3E: je 0x586b38c2
        __asm _emit 0x74
        __asm _emit 0x3e
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F 12 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x12
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0a1h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 34h
        push edx
        push 3
        mov eax, dword ptr [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 B3 70 10 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x70
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b38c9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 94h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [edx + ecx + 0ach], eax
        push 0fch
        ; Exact mapped bytes E8 0C D7 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xd7
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 3E: je 0x586b3946
        __asm _emit 0x74
        __asm _emit 0x3e
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 11 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x11
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0afh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 34h
        push edx
        push 3
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 2F 70 10 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x70
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586b394d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 9ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [ecx + eax + 0ach], edx
        push 184h
        ; Exact mapped bytes E8 88 D6 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xd6
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 47: je 0x586b39d3
        __asm _emit 0x74
        __asm _emit 0x47
        push 1e1e1eh
        push 0
        push 0fafafah
        mov eax, dword ptr [ebp + 10h]
        add eax, 0cah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 7ch
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0adh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 33h
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 32 A6 E1 FF: call 0x584ce000
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa6
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b39da
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ecx + 190h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 190h]
        mov dword ptr [ebp - 0a4h], ecx
        push 3e8h
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 6B 24 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x24
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 184h
        ; Exact mapped bytes E8 E4 D5 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xd5
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 47: je 0x586b3a77
        __asm _emit 0x74
        __asm _emit 0x47
        push 1e1e1eh
        push 0
        push 0fafafah
        mov edx, dword ptr [ebp + 10h]
        add edx, 0e6h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 7ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0c9h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 33h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 8E A5 E1 FF: call 0x584ce000
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xa5
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586b3a7e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 0a8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [eax + 194h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 194h]
        mov dword ptr [ebp - 0ach], eax
        push 3e8h
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 C7 23 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x23
        __asm _emit 0xdd
        __asm _emit 0xff
        push 0d4h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0bch
        push ecx
        ; Exact mapped bytes E8 41 93 19 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x93
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 0ch
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B4 24 DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x24
        __asm _emit 0xdd
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
