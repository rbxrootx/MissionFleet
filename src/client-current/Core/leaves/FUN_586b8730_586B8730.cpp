// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B8730 .. +0x32C7 bytes.
extern "C" __declspec(naked) void FUN_586b8730_586B8730() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888bd97h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 564h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], ecx
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
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F1 9A DC FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x9a
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [eax], 588b1d80h
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 98h
        ; Exact mapped bytes E8 33 ED DC FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xed
        __asm _emit 0xdc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 0a4h
        ; Exact mapped bytes E8 21 ED DC FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xed
        __asm _emit 0xdc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 64h
        ; Exact mapped bytes 66 89 4D C0: mov word ptr [ebp - 0x40], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 0c8h
        ; Exact mapped bytes 66 89 55 C4: mov word ptr [ebp - 0x3c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xc4
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 12ch
        ; Exact mapped bytes 66 89 45 CC: mov word ptr [ebp - 0x34], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xcc
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 190h
        ; Exact mapped bytes 66 89 4D C8: mov word ptr [ebp - 0x38], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc8
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 1f4h
        ; Exact mapped bytes 66 89 95 E0 FB FF FF: mov word ptr [ebp - 0x420], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xe0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 05 88 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 38: je 0x586b8847
        __asm _emit 0x74
        __asm _emit 0x38
        push 1
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 C3 DC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xc3
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 210h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 DE 9A DC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x9a
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586b884e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 214h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 214h]
        mov dword ptr [eax + 0bch], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 218h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 27 CD 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xcd
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 73 87 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x87
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 38: je 0x586b88d9
        __asm _emit 0x74
        __asm _emit 0x38
        push 0
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 C2 DC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 21ch]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 4C 9A DC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x9a
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b88e0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 220h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 220h]
        mov dword ptr [ecx + 0c0h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 224h], ecx
        push 0
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 88 D4 DC FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xd4
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 228h], eax
        push 0f0h
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 09 CC 0F 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xcc
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 C5 86 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x86
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 38: je 0x586b8987
        __asm _emit 0x74
        __asm _emit 0x38
        push 3
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 C1 DC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xc1
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 22ch]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 9E 99 DC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x99
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586b898e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 230h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 230h]
        mov dword ptr [ecx + 0c4h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 234h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 E7 CB 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xcb
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 33 86 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x86
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 38: je 0x586b8a19
        __asm _emit 0x74
        __asm _emit 0x38
        push 2
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 C1 DC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xc1
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 238h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 0C 99 DC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x99
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b8a20
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 23ch], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 23ch]
        mov dword ptr [edx + 0c8h], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 240h], edx
        push 101h
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 55 CB 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xcb
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x586b8a6e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 30h]
        add eax, 1
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 3
        ; Exact mapped bytes 0F 8D 85 01 00 00: jge 0x586b8bfd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 85 85 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 3E: je 0x586b8acd
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 30h]
        lea edx, [ecx + ecx + 5]
        push edx
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E C0 DC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xc0
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 244h], eax
        movzx eax, word ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 244h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 58 98 DC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x98
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586b8ad4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 248h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 248h]
        mov dword ptr [ecx + eax*4 + 124h], edx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + eax*4 + 124h]
        mov dword ptr [ebp - 24ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 99 CA 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xca
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 E5 84 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 3E: je 0x586b8b6d
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 30h]
        lea ecx, [eax + eax + 4]
        push ecx
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE BF DC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xbf
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], eax
        movzx edx, word ptr [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 250h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 B8 97 DC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x97
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b8b74
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 254h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 254h]
        mov dword ptr [eax + edx*4 + 130h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + edx*4 + 130h]
        mov dword ptr [ebp - 258h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 F9 C9 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xc9
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + edx*4 + 124h]
        mov dword ptr [ebp - 25ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 09 D3 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xd3
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + edx*4 + 130h]
        mov dword ptr [ebp - 260h], ecx
        push 0
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 E9 D2 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 68 FE FF FF: jmp 0x586b8a65
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + eax + 124h]
        mov dword ptr [ebp - 264h], edx
        push 1
        mov ecx, dword ptr [ebp - 264h]
        ; Exact mapped bytes E8 BE D2 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xd2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + ecx + 130h]
        mov dword ptr [ebp - 268h], eax
        push 1
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 99 D2 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd2
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 B2 83 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x83
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 42: je 0x586b8ca4
        __asm _emit 0x74
        __asm _emit 0x42
        push 0
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 BE DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xbe
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 26ch], eax
        movzx ecx, word ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 58h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 25h
        push eax
        mov ecx, dword ptr [ebp - 26ch]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 41 30 E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x30
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586b8cab
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 270h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 270h]
        mov dword ptr [eax + edx + 13ch], ecx
        push 0ach
        ; Exact mapped bytes E8 2A 83 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x83
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 45: je 0x586b8d2f
        __asm _emit 0x74
        __asm _emit 0x45
        push 0
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 BD DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xbd
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 274h], eax
        movzx edx, word ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 74h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 25h
        push ecx
        mov edx, dword ptr [ebp - 274h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 B9 2F E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x2f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b8d39
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 278h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 278h]
        mov dword ptr [eax + edx + 13ch], ecx
        push 0ach
        ; Exact mapped bytes E8 99 82 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x82
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 4A: je 0x586b8dcb
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 BD DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xbd
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 27ch], eax
        movzx edx, word ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 90h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 25h
        push ecx
        mov edx, dword ptr [ebp - 27ch]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 1D 2F E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x2f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b8dd5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 280h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 280h]
        mov dword ptr [eax + edx + 13ch], ecx
        push 0ach
        ; Exact mapped bytes E8 FE 81 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x81
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 4A: je 0x586b8e66
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 BC DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xbc
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 284h], eax
        movzx edx, word ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0ach
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 25h
        push ecx
        mov edx, dword ptr [ebp - 284h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 82 2E E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x2e
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b8e70
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 288h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 288h]
        mov dword ptr [ecx + eax + 13ch], edx
        push 0ach
        ; Exact mapped bytes E8 62 81 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x81
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 4B: je 0x586b8f03
        __asm _emit 0x74
        __asm _emit 0x4b
        push 0
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B BC DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xbc
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 28ch], eax
        movzx eax, word ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0c8h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 25h
        push edx
        mov eax, dword ptr [ebp - 28ch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 E5 2D E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x2d
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b8f0d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 290h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 290h]
        mov dword ptr [ecx + eax + 13ch], edx
        push 0ach
        ; Exact mapped bytes E8 C5 80 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x80
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 4B: je 0x586b8fa0
        __asm _emit 0x74
        __asm _emit 0x4b
        push 0
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E BB DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xbb
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], eax
        movzx eax, word ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0e4h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 25h
        push edx
        mov eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 48 2D E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x2d
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b8faa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 298h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, 4
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 298h]
        mov dword ptr [edx + ecx + 13ch], eax
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x586b8fe4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 1
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 6
        ; Exact mapped bytes 0F 8D B8 01 00 00: jge 0x586b91a6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 0F 80 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x80
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 4C: je 0x586b9057
        __asm _emit 0x74
        __asm _emit 0x4c
        push 0bh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 BB DC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xbb
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 29ch], eax
        ; Exact mapped bytes 0F BF 55 CC: movsx edx, word ptr [ebp - 0x34]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xcc
        add edx, 0ah
        push edx
        imul eax, dword ptr [ebp - 30h], 1ch
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 58h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 25h
        push eax
        mov ecx, dword ptr [ebp - 29ch]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 D1 92 DC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x92
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b9061
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov eax, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 2a0h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 2a0h]
        mov dword ptr [edx + ecx*4 + 154h], eax
        push 54h
        ; Exact mapped bytes E8 79 7F 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x7f
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 4C: je 0x586b90ed
        __asm _emit 0x74
        __asm _emit 0x4c
        push 0ch
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 BA DC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xba
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 2a4h], eax
        ; Exact mapped bytes 0F BF 4D CC: movsx ecx, word ptr [ebp - 0x34]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xcc
        add ecx, 0ah
        push ecx
        imul edx, dword ptr [ebp - 30h], 1ch
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 58h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 25h
        push edx
        mov eax, dword ptr [ebp - 2a4h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 3B 92 DC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x92
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b90f7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov edx, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 2a8h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 2a8h]
        mov dword ptr [ecx + eax*4 + 16ch], edx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + eax*4 + 154h]
        mov dword ptr [ebp - 2ach], edx
        push 0
        mov ecx, dword ptr [ebp - 2ach]
        ; Exact mapped bytes E8 A6 CD DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xcd
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + eax*4 + 154h]
        mov dword ptr [ebp - 2b0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 53 C4 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xc4
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + eax*4 + 16ch]
        mov dword ptr [ebp - 2b4h], edx
        push 0
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 63 CD DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xcd
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + eax*4 + 16ch]
        mov dword ptr [ebp - 2b8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 10 C4 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xc4
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 35 FE FF FF: jmp 0x586b8fdb
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x586b91b8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 30h]
        add eax, 1
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 9
        ; Exact mapped bytes 0F 8D 9E 00 00 00: jge 0x586b9260
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 3B 7E 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x7e
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 4F: je 0x586b922e
        __asm _emit 0x74
        __asm _emit 0x4f
        push 14h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 B9 DC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb9
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 2bch], eax
        movzx ecx, word ptr [ebp - 40h]
        push ecx
        imul edx, dword ptr [ebp - 30h], 1ch
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 0c8h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0bah
        push edx
        mov eax, dword ptr [ebp - 2bch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 FA 90 DC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x90
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b9238
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov edx, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 2c0h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 2c0h]
        mov dword ptr [ecx + eax*4 + 0cch], edx
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x586b91af
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 8B 0D 48 20 96 58: mov ecx, dword ptr [0x58962048]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [eax + 0b4h], ecx
        mov edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [edx + 0b8h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [ebp + edx - 28h], 4fh
        mov eax, 4
        shl eax, 0
        mov dword ptr [ebp + eax - 28h], 4fh
        mov ecx, 4
        shl ecx, 1
        mov dword ptr [ebp + ecx - 28h], 4fh
        mov edx, 4
        imul eax, edx, 3
        mov dword ptr [ebp + eax - 28h], 4fh
        mov ecx, 4
        shl ecx, 2
        mov dword ptr [ebp + ecx - 28h], 4fh
        mov edx, 4
        imul eax, edx, 5
        mov dword ptr [ebp + eax - 28h], 4fh
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x586b92ee
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 1
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 6
        ; Exact mapped bytes 0F 8D 97 01 00 00: jge 0x586b948f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 05 7D 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x7d
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 59: je 0x586b936e
        __asm _emit 0x74
        __asm _emit 0x59
        push 0
        push 0
        push 0ffffffh
        imul edx, dword ptr [ebp - 30h], 1ch
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 73h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0beh
        push edx
        imul eax, dword ptr [ebp - 30h], 1ch
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 5fh]
        push edx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp + eax*4 - 28h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 0b4h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 4A 90 DC FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x90
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b9378
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov edx, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 2c4h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 2c4h]
        mov dword ptr [ecx + eax*4 + 0f4h], edx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + eax*4 + 0f4h]
        mov dword ptr [ebp - 2c8h], edx
        ; Exact mapped bytes 0F BF 45 C8: movsx eax, word ptr [ebp - 0x38]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xc8
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 BF CA DC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xca
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 3B 7C 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x7c
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 5A: je 0x586b9439
        __asm _emit 0x74
        __asm _emit 0x5a
        push 0
        push 0
        push 0
        imul ecx, dword ptr [ebp - 30h], 1ch
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 74h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0bfh
        push ecx
        imul edx, dword ptr [ebp - 30h], 1ch
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 60h]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp + edx*4 - 28h]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 1]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 0b4h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 7F 8F DC FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x8f
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b9443
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov eax, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 2cch], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 2cch]
        mov dword ptr [edx + ecx*4 + 10ch], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + ecx*4 + 10ch]
        mov dword ptr [ebp - 2d0h], eax
        movzx ecx, word ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 2d0h]
        ; Exact mapped bytes E8 F7 C9 DC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xc9
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 56 FE FF FF: jmp 0x586b92e5
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + eax + 0f4h]
        mov dword ptr [ebp - 2d8h], edx
        push 588b1388h
        ; Exact mapped bytes E8 3F 8B E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x8b
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 2d4h], eax
        mov eax, dword ptr [ebp - 2d4h]
        push eax
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 D4 CB DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xcb
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + ecx + 0f4h]
        mov dword ptr [ebp - 2e0h], eax
        push 588b13a0h
        ; Exact mapped bytes E8 02 8B E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x8b
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 2dch], eax
        mov ecx, dword ptr [ebp - 2dch]
        push ecx
        mov ecx, dword ptr [ebp - 2e0h]
        ; Exact mapped bytes E8 97 CB DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xcb
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + edx + 0f4h]
        mov dword ptr [ebp - 2e8h], ecx
        push 588b13b4h
        ; Exact mapped bytes E8 C6 8A E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x8a
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 2e4h], eax
        mov edx, dword ptr [ebp - 2e4h]
        push edx
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 5B CB DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xcb
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + ecx + 0f4h]
        mov dword ptr [ebp - 2f0h], eax
        push 588b13cch
        ; Exact mapped bytes E8 89 8A E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 2ech], eax
        mov ecx, dword ptr [ebp - 2ech]
        push ecx
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 1E CB DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xcb
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + edx + 0f4h]
        mov dword ptr [ebp - 2f8h], ecx
        push 588b13e0h
        ; Exact mapped bytes E8 4C 8A E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x8a
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 2f4h], eax
        mov edx, dword ptr [ebp - 2f4h]
        push edx
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 E1 CA DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xca
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + ecx + 0f4h]
        mov dword ptr [ebp - 300h], eax
        push 588b13f4h
        ; Exact mapped bytes E8 0F 8A E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x8a
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 2fch], eax
        mov ecx, dword ptr [ebp - 2fch]
        push ecx
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 A4 CA DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xca
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + eax + 0f4h]
        mov dword ptr [ebp - 304h], edx
        push 0
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 6F C9 DC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc9
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + ecx + 10ch]
        mov dword ptr [ebp - 30ch], eax
        push 588b140ch
        ; Exact mapped bytes E8 AD 89 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x89
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 308h], eax
        mov ecx, dword ptr [ebp - 308h]
        push ecx
        mov ecx, dword ptr [ebp - 30ch]
        ; Exact mapped bytes E8 42 CA DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xca
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + edx + 10ch]
        mov dword ptr [ebp - 314h], ecx
        push 588b1424h
        ; Exact mapped bytes E8 70 89 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x89
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 310h], eax
        mov edx, dword ptr [ebp - 310h]
        push edx
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 05 CA DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xca
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + eax + 10ch]
        mov dword ptr [ebp - 31ch], edx
        push 588b1438h
        ; Exact mapped bytes E8 34 89 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x89
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 318h], eax
        mov eax, dword ptr [ebp - 318h]
        push eax
        mov ecx, dword ptr [ebp - 31ch]
        ; Exact mapped bytes E8 C9 C9 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xc9
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + edx + 10ch]
        mov dword ptr [ebp - 324h], ecx
        push 588b1450h
        ; Exact mapped bytes E8 F7 88 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x88
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 320h], eax
        mov edx, dword ptr [ebp - 320h]
        push edx
        mov ecx, dword ptr [ebp - 324h]
        ; Exact mapped bytes E8 8C C9 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc9
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + eax + 10ch]
        mov dword ptr [ebp - 32ch], edx
        push 588b1464h
        ; Exact mapped bytes E8 BA 88 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x88
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 328h], eax
        mov eax, dword ptr [ebp - 328h]
        push eax
        mov ecx, dword ptr [ebp - 32ch]
        ; Exact mapped bytes E8 4F C9 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xc9
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + edx + 10ch]
        mov dword ptr [ebp - 334h], ecx
        push 588b1478h
        ; Exact mapped bytes E8 7D 88 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x88
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 330h], eax
        mov edx, dword ptr [ebp - 330h]
        push edx
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 12 C9 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc9
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 6
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + ecx + 10ch]
        mov dword ptr [ebp - 338h], eax
        push 0
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 DD C7 DC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xc7
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 46 78 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 4A: je 0x586b981e
        __asm _emit 0x74
        __asm _emit 0x4a
        push 4
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF B2 DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xb2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 33ch], eax
        movzx ecx, word ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 12h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 2b2h
        push eax
        mov ecx, dword ptr [ebp - 33ch]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 CA 24 E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x24
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b9828
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 340h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 340h]
        mov dword ptr [ecx + 184h], edx
        push 0ach
        ; Exact mapped bytes E8 B3 77 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x77
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 4B: je 0x586b98b2
        __asm _emit 0x74
        __asm _emit 0x4b
        push 5
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C B2 DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xb2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 344h], eax
        movzx eax, word ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 12h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 31eh
        push edx
        mov eax, dword ptr [ebp - 344h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 36 24 E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x24
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b98bc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 348h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 348h]
        mov dword ptr [eax + 188h], ecx
        push 0ach
        ; Exact mapped bytes E8 1F 77 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x77
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 4B: je 0x586b9946
        __asm _emit 0x74
        __asm _emit 0x4b
        push 0ch
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 B1 DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xb1
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 34ch], eax
        movzx edx, word ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 4ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 153h
        push ecx
        mov edx, dword ptr [ebp - 34ch]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 A2 23 E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x23
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b9950
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov ecx, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 350h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 350h]
        mov dword ptr [edx + 190h], eax
        push 0ach
        ; Exact mapped bytes E8 8B 76 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 4D: je 0x586b99dc
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0dh
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 B1 DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb1
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 354h], eax
        movzx ecx, word ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1c4h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 153h
        push eax
        mov ecx, dword ptr [ebp - 354h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 0C 23 E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x23
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b99e6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov eax, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 358h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 358h]
        mov dword ptr [ecx + 194h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 190h]
        mov dword ptr [ebp - 35ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes E8 8C BB 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xbb
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 194h]
        mov dword ptr [ebp - 360h], eax
        push 101h
        mov ecx, dword ptr [ebp - 360h]
        ; Exact mapped bytes E8 6D BB 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xbb
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 190h]
        mov dword ptr [ebp - 364h], edx
        push 0
        mov ecx, dword ptr [ebp - 364h]
        ; Exact mapped bytes E8 E1 C3 DC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc3
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 194h]
        mov dword ptr [ebp - 368h], ecx
        push 0
        mov ecx, dword ptr [ebp - 368h]
        ; Exact mapped bytes E8 C5 C3 DC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xc3
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 81 75 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x75
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 47: je 0x586b9ae0
        __asm _emit 0x74
        __asm _emit 0x47
        push 0bh
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A B0 DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xb0
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 36ch], eax
        movzx edx, word ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 5ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 153h
        push ecx
        mov edx, dword ptr [ebp - 36ch]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 38 CD DC FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xcd
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b9aea
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov ecx, dword ptr [ebp - 0f4h]
        mov dword ptr [ebp - 370h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 370h]
        mov dword ptr [edx + 198h], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 198h]
        mov dword ptr [ebp - 374h], edx
        push 0
        mov ecx, dword ptr [ebp - 374h]
        ; Exact mapped bytes E8 2B 5A DE FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x5a
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 198h]
        mov dword ptr [ebp - 378h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 378h]
        ; Exact mapped bytes E8 6C BA 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xba
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 198h]
        mov dword ptr [ebp - 37ch], eax
        push 0
        mov ecx, dword ptr [ebp - 37ch]
        ; Exact mapped bytes E8 E0 C2 DC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xc2
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        push 94h
        ; Exact mapped bytes E8 99 74 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x74
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f8h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 4F: je 0x586b9bd0
        __asm _emit 0x74
        __asm _emit 0x4f
        push 323232h
        push 0
        push 0ecc282h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1ach
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 140h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 5ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0beh
        push ecx
        ; Exact mapped bytes 8B 15 3C 20 96 58: mov edx, dword ptr [0x5896203c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 D8 A4 E6 FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xa4
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b9bda
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0
        mov ecx, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 380h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 380h]
        mov dword ptr [edx + 18ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 18ch]
        mov dword ptr [ebp - 384h], edx
        push 14h
        mov ecx, dword ptr [ebp - 384h]
        ; Exact mapped bytes E8 DB 57 DE FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x57
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 18ch]
        mov dword ptr [ebp - 38ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [edx + 18ch]
        ; Exact mapped bytes E8 7E AE E7 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xae
        __asm _emit 0xe7
        __asm _emit 0xff
        imul eax, eax, 12h
        mov dword ptr [ebp - 388h], eax
        mov ecx, dword ptr [ebp - 388h]
        push ecx
        mov ecx, dword ptr [ebp - 38ch]
        ; Exact mapped bytes E8 03 D2 DF FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xd2
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 18ch]
        mov dword ptr [ebp - 390h], eax
        movzx ecx, word ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 14 C2 DC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xc2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 18ch]
        mov dword ptr [ebp - 394h], eax
        push 0
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 58 C1 DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc1
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 18ch]
        mov dword ptr [ebp - 398h], edx
        push 0ffffffh
        mov ecx, dword ptr [ebp - 398h]
        ; Exact mapped bytes E8 19 2F E9 FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x2f
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 55 73 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x73
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 2F: je 0x586b9cf4
        __asm _emit 0x74
        __asm _emit 0x2f
        movzx eax, word ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 58h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 17ah
        push edx
        push 0
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 34 86 DC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b9cfe
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        mov ecx, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 39ch], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 39ch]
        mov dword ptr [edx + 0f0h], eax
        push 70h
        ; Exact mapped bytes E8 E0 72 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x72
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 108h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 4B: je 0x586b9d85
        __asm _emit 0x74
        __asm _emit 0x4b
        push 0
        push 0
        push 0ecc282h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 6eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 30ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 5fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1e5h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 33 86 DC FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b9d8f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 3a0h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 3a0h]
        mov dword ptr [edx + 19ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 19ch]
        mov dword ptr [ebp - 3a4h], edx
        movzx eax, word ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3a4h]
        ; Exact mapped bytes E8 B3 C0 DC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xc0
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        push 94h
        ; Exact mapped bytes E8 2C 72 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x72
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 4C: je 0x586b9e3a
        __asm _emit 0x74
        __asm _emit 0x4c
        push 0
        push 0
        push 969696h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0ach
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 316h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 6eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1e5h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 9E 64 10 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x64
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b9e44
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 3a8h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 3a8h]
        mov dword ptr [edx + 1a0h], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 1a0h]
        mov dword ptr [ebp - 3ach], edx
        movzx eax, word ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ach]
        ; Exact mapped bytes E8 FE BF DC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xbf
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 1a0h]
        mov dword ptr [ebp - 3b0h], edx
        push 0ffffffh
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 1F 2D E9 FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x2d
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 58 71 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x71
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 4B: je 0x586b9f0d
        __asm _emit 0x74
        __asm _emit 0x4b
        push 0ch
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 AC DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xac
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 3b4h], eax
        movzx eax, word ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 4ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 31fh
        push edx
        mov eax, dword ptr [ebp - 3b4h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 DB 1D E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x1d
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b9f17
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov edx, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 3b8h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 3b8h]
        mov dword ptr [eax + 1a4h], ecx
        push 0ach
        ; Exact mapped bytes E8 C4 70 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 4D: je 0x586b9fa3
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0dh
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D AB DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xab
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 3bch], eax
        movzx edx, word ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0b4h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 31fh
        push ecx
        mov edx, dword ptr [ebp - 3bch]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 45 1D E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x1d
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586b9fad
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 3c0h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 3c0h]
        mov dword ptr [edx + 1a8h], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 1a4h]
        mov dword ptr [ebp - 3c4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 C5 B5 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xb5
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 1a8h]
        mov dword ptr [ebp - 3c8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3c8h]
        ; Exact mapped bytes E8 A6 B5 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xb5
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 1a4h]
        mov dword ptr [ebp - 3cch], eax
        push 0
        mov ecx, dword ptr [ebp - 3cch]
        ; Exact mapped bytes E8 1A BE DC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xbe
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 1a8h]
        mov dword ptr [ebp - 3d0h], edx
        push 0
        mov ecx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes E8 FE BD DC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xbd
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 BA 6F 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x6f
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 47: je 0x586ba0a7
        __asm _emit 0x74
        __asm _emit 0x47
        push 0bh
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 AA DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xaa
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 3d4h], eax
        movzx eax, word ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 58h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 31fh
        push edx
        mov eax, dword ptr [ebp - 3d4h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 71 C7 DC FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc7
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ba0b1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 3d8h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 3d8h]
        mov dword ptr [eax + 1ach], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 1ach]
        mov dword ptr [ebp - 3dch], eax
        push 0
        mov ecx, dword ptr [ebp - 3dch]
        ; Exact mapped bytes E8 64 54 DE FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x54
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 1ach]
        mov dword ptr [ebp - 3e0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes E8 A5 B4 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xb4
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 1ach]
        mov dword ptr [ebp - 3e4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes E8 19 BD DC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xbd
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x586ba13a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 30h]
        add edx, 1
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 0bh
        ; Exact mapped bytes 0F 8D D0 00 00 00: jge 0x586ba214
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 B9 6E 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x6e
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 5D: je 0x586ba1be
        __asm _emit 0x74
        __asm _emit 0x5d
        push 0
        push 0
        push 0ffffffh
        imul eax, dword ptr [ebp - 30h], 14h
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 0ech]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 316h
        push eax
        imul ecx, dword ptr [ebp - 30h], 14h
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 0d8h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 181h
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 0b8h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 FA 81 DC FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x81
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ba1c8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov edx, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 3e8h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 3e8h]
        mov dword ptr [ecx + eax*4 + 1b0h], edx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + eax*4 + 1b0h]
        mov dword ptr [ebp - 3ech], edx
        movzx eax, word ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ech]
        ; Exact mapped bytes E8 72 BC DC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xbc
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1D FF FF FF: jmp 0x586ba131
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0ah
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 3f0h], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1cah
        push edx
        mov ecx, dword ptr [ebp - 3f0h]
        ; Exact mapped bytes E8 EF B4 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xb4
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 B8 6D 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x6d
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 46: je 0x586ba2a8
        __asm _emit 0x74
        __asm _emit 0x46
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 A8 DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xa8
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 3f4h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 0d8h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 23eh
        push ecx
        push 5
        mov edx, dword ptr [ebp - 3f4h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 D0 06 10 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x06
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ba2b2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov ecx, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 3f8h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 3f8h]
        mov dword ptr [edx + 24ch], eax
        push 0fch
        ; Exact mapped bytes E8 29 6D 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x6d
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 47: je 0x586ba338
        __asm _emit 0x74
        __asm _emit 0x47
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 A7 DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xa7
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 3fch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0f0h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 23eh
        push edx
        push 5
        mov eax, dword ptr [ebp - 3fch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 40 06 10 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ba342
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov edx, dword ptr [ebp - 144h]
        mov dword ptr [ebp - 400h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 400h]
        mov dword ptr [eax + 250h], ecx
        push 54h
        ; Exact mapped bytes E8 9C 6C 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x6c
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 74 4C: je 0x586ba3ca
        __asm _emit 0x74
        __asm _emit 0x4c
        push 15h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 A7 DC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xa7
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 404h], eax
        ; Exact mapped bytes 0F BF 55 C4: movsx edx, word ptr [ebp - 0x3c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xc4
        add edx, 0ah
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0d4h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 232h
        push ecx
        mov edx, dword ptr [ebp - 404h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 5E 7F DC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x7f
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ba3d4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 0
        mov ecx, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 408h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 408h]
        mov dword ptr [ecx + eax + 1dch], edx
        push 54h
        ; Exact mapped bytes E8 01 6C 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x6c
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 150h], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 150h], 0
        ; Exact mapped bytes 74 4D: je 0x586ba466
        __asm _emit 0x74
        __asm _emit 0x4d
        push 16h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA A6 DC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xa6
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 40ch], eax
        ; Exact mapped bytes 0F BF 45 C4: movsx eax, word ptr [ebp - 0x3c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xc4
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0d4h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 243h
        push edx
        mov eax, dword ptr [ebp - 40ch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 C2 7E DC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x7e
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ba470
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 154h], 0
        mov edx, dword ptr [ebp - 154h]
        mov dword ptr [ebp - 410h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 410h]
        mov dword ptr [ecx + eax + 1dch], edx
        push 54h
        ; Exact mapped bytes E8 65 6B 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x6b
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 158h], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 158h], 0
        ; Exact mapped bytes 74 4D: je 0x586ba502
        __asm _emit 0x74
        __asm _emit 0x4d
        push 17h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E A6 DC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xa6
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 414h], eax
        ; Exact mapped bytes 0F BF 45 C4: movsx eax, word ptr [ebp - 0x3c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xc4
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0d4h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 253h
        push edx
        mov eax, dword ptr [ebp - 414h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 26 7E DC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x7e
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ba50c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 15ch], 0
        mov edx, dword ptr [ebp - 15ch]
        mov dword ptr [ebp - 418h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 418h]
        mov dword ptr [ecx + eax + 1dch], edx
        push 54h
        ; Exact mapped bytes E8 CA 6A 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x6a
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 160h], eax
        mov byte ptr [ebp - 4], 26h
        cmp dword ptr [ebp - 160h], 0
        ; Exact mapped bytes 74 4D: je 0x586ba59d
        __asm _emit 0x74
        __asm _emit 0x4d
        push 15h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 A5 DC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xa5
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 41ch], eax
        ; Exact mapped bytes 0F BF 45 C4: movsx eax, word ptr [ebp - 0x3c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xc4
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0e8h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 232h
        push edx
        mov eax, dword ptr [ebp - 41ch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 8B 7D DC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ba5a7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 164h], 0
        mov edx, dword ptr [ebp - 164h]
        mov dword ptr [ebp - 4c8h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 4c8h]
        mov dword ptr [edx + ecx + 1e8h], eax
        push 54h
        ; Exact mapped bytes E8 2E 6A 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x6a
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 168h], eax
        mov byte ptr [ebp - 4], 27h
        cmp dword ptr [ebp - 168h], 0
        ; Exact mapped bytes 74 4C: je 0x586ba638
        __asm _emit 0x74
        __asm _emit 0x4c
        push 16h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 A5 DC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xa5
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 424h], eax
        ; Exact mapped bytes 0F BF 4D C4: movsx ecx, word ptr [ebp - 0x3c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xc4
        add ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0e8h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 243h
        push eax
        mov ecx, dword ptr [ebp - 424h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 F0 7C DC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x7c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ba642
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 16ch], 0
        mov eax, dword ptr [ebp - 16ch]
        mov dword ptr [ebp - 428h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 428h]
        mov dword ptr [edx + ecx + 1e8h], eax
        push 54h
        ; Exact mapped bytes E8 93 69 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x69
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 170h], eax
        mov byte ptr [ebp - 4], 28h
        cmp dword ptr [ebp - 170h], 0
        ; Exact mapped bytes 74 4C: je 0x586ba6d3
        __asm _emit 0x74
        __asm _emit 0x4c
        push 17h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C A4 DC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa4
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 42ch], eax
        ; Exact mapped bytes 0F BF 4D C4: movsx ecx, word ptr [ebp - 0x3c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xc4
        add ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0e8h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 253h
        push eax
        mov ecx, dword ptr [ebp - 42ch]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 55 7C DC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x7c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ba6dd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 174h], 0
        mov eax, dword ptr [ebp - 174h]
        mov dword ptr [ebp - 430h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 430h]
        mov dword ptr [edx + ecx + 1e8h], eax
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x586ba716
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 1
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 9
        ; Exact mapped bytes 0F 8D FB 00 00 00: jge 0x586ba81b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 DD 68 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x68
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 178h], eax
        mov byte ptr [ebp - 4], 29h
        cmp dword ptr [ebp - 178h], 0
        ; Exact mapped bytes 74 53: je 0x586ba790
        __asm _emit 0x74
        __asm _emit 0x53
        push 16h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 A3 DC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xa3
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 434h], eax
        ; Exact mapped bytes 0F BF 55 C4: movsx edx, word ptr [ebp - 0x3c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xc4
        add edx, 0ah
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0d8h
        push eax
        mov ecx, dword ptr [ebp - 30h]
        shl ecx, 4
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 1deh]
        push eax
        mov ecx, dword ptr [ebp - 434h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 98 7B DC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x7b
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ba79a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 17ch], 0
        mov eax, dword ptr [ebp - 17ch]
        mov dword ptr [ebp - 438h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 438h]
        mov dword ptr [edx + ecx*4 + 1f4h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + ecx*4 + 1f4h]
        mov dword ptr [ebp - 43ch], eax
        push 0
        mov ecx, dword ptr [ebp - 43ch]
        ; Exact mapped bytes E8 03 B7 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xb7
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + ecx*4 + 1f4h]
        mov dword ptr [ebp - 444h], eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B8 18 DD FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x18
        __asm _emit 0xdd
        __asm _emit 0xff
        add eax, 1c9h
        mov dword ptr [ebp - 440h], eax
        mov ecx, dword ptr [ebp - 440h]
        push ecx
        mov ecx, dword ptr [ebp - 444h]
        ; Exact mapped bytes E8 1B AF 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xaf
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F2 FE FF FF: jmp 0x586ba70d
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + eax + 1f4h]
        mov dword ptr [ebp - 44ch], edx
        push 15h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 A2 DC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xa2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 448h], eax
        mov eax, dword ptr [ebp - 448h]
        push eax
        mov ecx, dword ptr [ebp - 44ch]
        ; Exact mapped bytes E8 D8 B6 DC FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xb6
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 3
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + ecx + 1f4h]
        mov dword ptr [ebp - 454h], eax
        push 17h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 A2 DC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xa2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 450h], eax
        mov ecx, dword ptr [ebp - 450h]
        push ecx
        mov ecx, dword ptr [ebp - 454h]
        ; Exact mapped bytes E8 9B B6 DC FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xb6
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 67 67 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x67
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 180h], eax
        mov byte ptr [ebp - 4], 2ah
        cmp dword ptr [ebp - 180h], 0
        ; Exact mapped bytes 74 4E: je 0x586ba901
        __asm _emit 0x74
        __asm _emit 0x4e
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 1b4h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 316h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1a0h
        push ecx
        push 235h
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 0b8h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 B7 7A DC FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x7a
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ba90b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 184h], 0
        mov edx, dword ptr [ebp - 184h]
        mov dword ptr [ebp - 458h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 458h]
        mov dword ptr [eax + 21ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 21ch]
        mov dword ptr [ebp - 45ch], eax
        movzx ecx, word ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 45ch]
        ; Exact mapped bytes E8 37 B5 DC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xb5
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 21ch]
        mov dword ptr [ebp - 460h], eax
        push 235h
        mov ecx, dword ptr [ebp - 460h]
        ; Exact mapped bytes E8 48 AD 0F 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xad
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 21ch]
        mov dword ptr [ebp - 464h], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 1cah
        push eax
        mov ecx, dword ptr [ebp - 464h]
        ; Exact mapped bytes E8 A5 AD 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xad
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 24ch]
        mov dword ptr [ebp - 468h], edx
        ; Exact mapped bytes 0F BF 45 C8: movsx eax, word ptr [ebp - 0x38]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xc8
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 468h]
        ; Exact mapped bytes E8 D3 B4 DC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xb4
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 250h]
        mov dword ptr [ebp - 46ch], edx
        ; Exact mapped bytes 0F BF 45 C8: movsx eax, word ptr [ebp - 0x38]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xc8
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 46ch]
        ; Exact mapped bytes E8 B1 B4 DC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb4
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x586ba9e2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 1
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 3
        ; Exact mapped bytes 7D 43: jge 0x586baa2b
        __asm _emit 0x7d
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + edx*4 + 1dch]
        mov dword ptr [ebp - 470h], ecx
        push 0
        mov ecx, dword ptr [ebp - 470h]
        ; Exact mapped bytes E8 D8 B4 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xb4
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + edx*4 + 1e8h]
        mov dword ptr [ebp - 474h], ecx
        push 0
        mov ecx, dword ptr [ebp - 474h]
        ; Exact mapped bytes E8 B8 B4 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xb4
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AE: jmp 0x586ba9d9
        __asm _emit 0xeb
        __asm _emit 0xae
        push 94h
        ; Exact mapped bytes E8 CF 65 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x65
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 188h], eax
        mov byte ptr [ebp - 4], 2bh
        cmp dword ptr [ebp - 188h], 0
        ; Exact mapped bytes 74 50: je 0x586baa9b
        __asm _emit 0x74
        __asm _emit 0x50
        push 323232h
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 190h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1a7h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 10eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 189h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 3D 58 10 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 18ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586baaa5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 18ch], 0
        mov edx, dword ptr [ebp - 18ch]
        mov dword ptr [ebp - 478h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 478h]
        mov dword ptr [edx + ecx + 22ch], eax
        push 94h
        ; Exact mapped bytes E8 2D 65 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x65
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 190h], eax
        mov byte ptr [ebp - 4], 2ch
        cmp dword ptr [ebp - 190h], 0
        ; Exact mapped bytes 74 51: je 0x586bab3e
        __asm _emit 0x74
        __asm _emit 0x51
        push 323232h
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 190h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1c8h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 10eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1a7h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 9A 57 10 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x57
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 1d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586bab48
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d0h], 0
        mov ecx, dword ptr [ebp - 1d0h]
        mov dword ptr [ebp - 47ch], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 47ch]
        mov dword ptr [eax + edx + 22ch], ecx
        push 94h
        ; Exact mapped bytes E8 8A 64 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x64
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 198h], eax
        mov byte ptr [ebp - 4], 2dh
        cmp dword ptr [ebp - 198h], 0
        ; Exact mapped bytes 74 50: je 0x586babe0
        __asm _emit 0x74
        __asm _emit 0x50
        push 323232h
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 190h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 230h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 10eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1c8h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 F8 56 10 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 19ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586babea
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 19ch], 0
        mov edx, dword ptr [ebp - 19ch]
        mov dword ptr [ebp - 480h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 480h]
        mov dword ptr [ecx + eax + 22ch], edx
        push 94h
        ; Exact mapped bytes E8 E9 63 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1a0h], eax
        mov byte ptr [ebp - 4], 2eh
        cmp dword ptr [ebp - 1a0h], 0
        ; Exact mapped bytes 74 50: je 0x586bac81
        __asm _emit 0x74
        __asm _emit 0x50
        push 323232h
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 190h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2b4h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 10eh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 230h
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 57 56 10 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x56
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586bac8b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a4h], 0
        mov eax, dword ptr [ebp - 1a4h]
        mov dword ptr [ebp - 484h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 484h]
        mov dword ptr [eax + edx + 22ch], ecx
        push 94h
        ; Exact mapped bytes E8 47 63 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x63
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1a8h], eax
        mov byte ptr [ebp - 4], 2fh
        cmp dword ptr [ebp - 1a8h], 0
        ; Exact mapped bytes 74 50: je 0x586bad23
        __asm _emit 0x74
        __asm _emit 0x50
        push 323232h
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 190h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 312h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 10eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 2b4h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 B5 55 10 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x55
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 1ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x586bad2d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ach], 0
        mov edx, dword ptr [ebp - 1ach]
        mov dword ptr [ebp - 488h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 488h]
        mov dword ptr [ecx + eax + 22ch], edx
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x586bad67
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 30h]
        add eax, 1
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0ah
        ; Exact mapped bytes 0F 8D C4 00 00 00: jge 0x586bae35
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 8C 62 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x62
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1b0h], eax
        mov byte ptr [ebp - 4], 30h
        cmp dword ptr [ebp - 1b0h], 0
        ; Exact mapped bytes 74 54: je 0x586bade2
        __asm _emit 0x74
        __asm _emit 0x54
        push 0
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 9D DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x9d
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 48ch], eax
        ; Exact mapped bytes 0F BF 4D C8: movsx ecx, word ptr [ebp - 0x38]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xc8
        add ecx, 14h
        push ecx
        mov edx, dword ptr [ebp - 30h]
        shl edx, 4
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 10ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 18ch
        push edx
        mov eax, dword ptr [ebp - 48ch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 36 BA DC FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xba
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 1b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586badec
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b4h], 0
        mov edx, dword ptr [ebp - 1b4h]
        mov dword ptr [ebp - 490h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 490h]
        mov dword ptr [ecx + eax*4 + 258h], edx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + eax*4 + 258h]
        mov dword ptr [ebp - 494h], edx
        push 0
        mov ecx, dword ptr [ebp - 494h]
        ; Exact mapped bytes E8 B1 B0 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb0
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 29 FF FF FF: jmp 0x586bad5e
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x586bae47
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 30h]
        add eax, 1
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 5
        ; Exact mapped bytes 0F 8D 08 01 00 00: jge 0x586baf59
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + ecx*4 + 22ch]
        mov dword ptr [ebp - 498h], eax
        push 10h
        mov ecx, dword ptr [ebp - 498h]
        ; Exact mapped bytes E8 7F 45 DE FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + ecx*4 + 22ch]
        mov dword ptr [ebp - 49ch], eax
        push 0ffffffh
        push -1
        push 588b1490h
        mov ecx, dword ptr [ebp - 49ch]
        ; Exact mapped bytes E8 85 56 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [edx + ecx*4 + 22ch]
        ; Exact mapped bytes E8 13 5A 10 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x5a
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + eax*4 + 22ch]
        mov dword ptr [ebp - 4a4h], edx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ecx + eax*4 + 22ch]
        ; Exact mapped bytes E8 DE 9B E7 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x9b
        __asm _emit 0xe7
        __asm _emit 0xff
        imul edx, eax, 0ah
        mov dword ptr [ebp - 4a0h], edx
        mov eax, dword ptr [ebp - 4a0h]
        push eax
        mov ecx, dword ptr [ebp - 4a4h]
        ; Exact mapped bytes E8 63 BF DF FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xbf
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + ecx*4 + 22ch]
        mov dword ptr [ebp - 4a8h], eax
        movzx ecx, word ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 4a8h]
        ; Exact mapped bytes E8 70 AF DC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xaf
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + edx*4 + 22ch]
        mov dword ptr [ebp - 4ach], ecx
        push 0
        mov ecx, dword ptr [ebp - 4ach]
        ; Exact mapped bytes E8 B0 AE DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xae
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + edx*4 + 22ch]
        mov dword ptr [ebp - 4b0h], ecx
        push 0ecc282h
        mov ecx, dword ptr [ebp - 4b0h]
        ; Exact mapped bytes E8 6D 1C E9 FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x1c
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E5 FE FF FF: jmp 0x586bae3e
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 A1 60 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1b8h], eax
        mov byte ptr [ebp - 4], 31h
        cmp dword ptr [ebp - 1b8h], 0
        ; Exact mapped bytes 74 4D: je 0x586bafc6
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0ch
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A 9B DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x9b
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 4b4h], eax
        movzx edx, word ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0e4h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 31fh
        push ecx
        mov edx, dword ptr [ebp - 4b4h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 22 0D E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x0d
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 1bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586bafd0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1bch], 0
        mov ecx, dword ptr [ebp - 1bch]
        mov dword ptr [ebp - 4b8h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 4b8h]
        mov dword ptr [edx + 240h], eax
        push 0ach
        ; Exact mapped bytes E8 0B 60 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x60
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c0h], eax
        mov byte ptr [ebp - 4], 32h
        cmp dword ptr [ebp - 1c0h], 0
        ; Exact mapped bytes 74 4D: je 0x586bb05c
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0dh
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 9A DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x9a
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 4bch], eax
        movzx ecx, word ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1b8h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 31fh
        push eax
        mov ecx, dword ptr [ebp - 4bch]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 8C 0C E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586bb066
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c4h], 0
        mov eax, dword ptr [ebp - 1c4h]
        mov dword ptr [ebp - 4c0h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 4c0h]
        mov dword ptr [ecx + 244h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 240h]
        mov dword ptr [ebp - 4c4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 4c4h]
        ; Exact mapped bytes E8 0C A5 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xa5
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 244h]
        mov dword ptr [ebp - 570h], eax
        push 101h
        mov ecx, dword ptr [ebp - 570h]
        ; Exact mapped bytes E8 ED A4 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xa4
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 240h]
        mov dword ptr [ebp - 4cch], edx
        push 0
        mov ecx, dword ptr [ebp - 4cch]
        ; Exact mapped bytes E8 61 AD DC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xad
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 244h]
        mov dword ptr [ebp - 4d0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 4d0h]
        ; Exact mapped bytes E8 45 AD DC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xad
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 01 5F 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x5f
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c8h], eax
        mov byte ptr [ebp - 4], 33h
        cmp dword ptr [ebp - 1c8h], 0
        ; Exact mapped bytes 74 49: je 0x586bb162
        __asm _emit 0x74
        __asm _emit 0x49
        push 0bh
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA 99 DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x99
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 4d4h], eax
        movzx edx, word ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0f0h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 31fh
        push ecx
        mov edx, dword ptr [ebp - 4d4h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 B6 B6 DC FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb6
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 1cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586bb16c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1cch], 0
        mov ecx, dword ptr [ebp - 1cch]
        mov dword ptr [ebp - 4d8h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 4d8h]
        mov dword ptr [edx + 248h], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 248h]
        mov dword ptr [ebp - 4dch], edx
        push 0
        mov ecx, dword ptr [ebp - 4dch]
        ; Exact mapped bytes E8 A9 43 DE FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x43
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 248h]
        mov dword ptr [ebp - 4e0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 4e0h]
        ; Exact mapped bytes E8 EA A3 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xa3
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 248h]
        mov dword ptr [ebp - 4e4h], eax
        push 0
        mov ecx, dword ptr [ebp - 4e4h]
        ; Exact mapped bytes E8 5E AC DC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xac
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 17 5E 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x5e
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20ch], eax
        mov byte ptr [ebp - 4], 34h
        cmp dword ptr [ebp - 20ch], 0
        ; Exact mapped bytes 74 4D: je 0x586bb250
        __asm _emit 0x74
        __asm _emit 0x4d
        push 1
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 98 DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 4e8h], eax
        movzx ecx, word ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 18bh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 2a8h
        push eax
        mov ecx, dword ptr [ebp - 4e8h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 98 0A E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x0a
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586bb25a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d4h], 0
        mov eax, dword ptr [ebp - 1d4h]
        mov dword ptr [ebp - 4ech], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 4ech]
        mov dword ptr [ecx + 228h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 228h]
        mov dword ptr [ebp - 4f0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 4f0h]
        ; Exact mapped bytes E8 4B AB DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xab
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 228h]
        mov dword ptr [ebp - 4f4h], eax
        push 0
        mov ecx, dword ptr [ebp - 4f4h]
        ; Exact mapped bytes E8 2F AC DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xac
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 48 5D 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x5d
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1d8h], eax
        mov byte ptr [ebp - 4], 35h
        cmp dword ptr [ebp - 1d8h], 0
        ; Exact mapped bytes 74 4D: je 0x586bb31f
        __asm _emit 0x74
        __asm _emit 0x4d
        push 2
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 97 DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x97
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 4f8h], eax
        movzx ecx, word ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 18bh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 2a8h
        push eax
        mov ecx, dword ptr [ebp - 4f8h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 C9 09 E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 1dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586bb329
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1dch], 0
        mov eax, dword ptr [ebp - 1dch]
        mov dword ptr [ebp - 4fch], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 4fch]
        mov dword ptr [ecx + 220h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 220h]
        mov dword ptr [ebp - 500h], ecx
        push 0
        mov ecx, dword ptr [ebp - 500h]
        ; Exact mapped bytes E8 7C AA DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xaa
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 220h]
        mov dword ptr [ebp - 504h], eax
        push 0
        mov ecx, dword ptr [ebp - 504h]
        ; Exact mapped bytes E8 60 AB DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xab
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        push 74h
        ; Exact mapped bytes E8 7C 5C 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x5c
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1e0h], eax
        mov byte ptr [ebp - 4], 36h
        cmp dword ptr [ebp - 1e0h], 0
        ; Exact mapped bytes 74 53: je 0x586bb3f1
        __asm _emit 0x74
        __asm _emit 0x53
        push 0e0h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 97 DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x97
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 508h], eax
        ; Exact mapped bytes 0F BF 4D CC: movsx ecx, word ptr [ebp - 0x34]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xcc
        add ecx, 64h
        push ecx
        push 0
        push 0
        mov edx, dword ptr [ebp + 10h]
        add edx, 113h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 19fh
        push eax
        mov ecx, dword ptr [ebp - 508h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 97 97 07 00: call 0x58734b80
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x97
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 1e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586bb3fb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e4h], 0
        mov eax, dword ptr [ebp - 1e4h]
        mov dword ptr [ebp - 50ch], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 50ch]
        mov dword ptr [eax + edx + 60h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + eax + 60h]
        mov dword ptr [ebp - 510h], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 113h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 19fh
        push ecx
        mov ecx, dword ptr [ebp - 510h]
        ; Exact mapped bytes E8 CD 98 07 00: call 0x58734d20
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x98
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + eax + 60h]
        mov dword ptr [ebp - 514h], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 127h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 19fh
        push ecx
        mov ecx, dword ptr [ebp - 514h]
        ; Exact mapped bytes E8 9A 98 07 00: call 0x58734d20
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x98
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        push 74h
        ; Exact mapped bytes E8 76 5B 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x5b
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1e8h], eax
        mov byte ptr [ebp - 4], 37h
        cmp dword ptr [ebp - 1e8h], 0
        ; Exact mapped bytes 74 53: je 0x586bb4f7
        __asm _emit 0x74
        __asm _emit 0x53
        push 0e0h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 96 DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x96
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 518h], eax
        ; Exact mapped bytes 0F BF 55 CC: movsx edx, word ptr [ebp - 0x34]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xcc
        add edx, 64h
        push edx
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        add eax, 163h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 19fh
        push ecx
        mov edx, dword ptr [ebp - 518h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 91 96 07 00: call 0x58734b80
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x96
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 1ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x586bb501
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ech], 0
        mov ecx, dword ptr [ebp - 1ech]
        mov dword ptr [ebp - 51ch], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 51ch]
        mov dword ptr [eax + edx + 60h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + edx + 60h]
        mov dword ptr [ebp - 520h], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 163h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 19fh
        push eax
        mov ecx, dword ptr [ebp - 520h]
        ; Exact mapped bytes E8 C7 97 07 00: call 0x58734d20
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x97
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 524h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 177h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 19fh
        push edx
        mov ecx, dword ptr [ebp - 524h]
        ; Exact mapped bytes E8 93 97 07 00: call 0x58734d20
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x97
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + eax + 60h]
        mov dword ptr [ebp - 528h], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 18bh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 19fh
        push ecx
        mov ecx, dword ptr [ebp - 528h]
        ; Exact mapped bytes E8 60 97 07 00: call 0x58734d20
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x97
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x586bb5d3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 30h]
        add edx, 1
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 2
        ; Exact mapped bytes 0F 8D 95 00 00 00: jge 0x586bb672
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 09: jmp 0x586bb5ef
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 44h]
        add eax, 1
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [edx + ecx*4 + 60h]
        ; Exact mapped bytes E8 B2 A1 DD FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xa1
        __asm _emit 0xdd
        __asm _emit 0xff
        cmp dword ptr [ebp - 44h], eax
        ; Exact mapped bytes 73 6A: jae 0x586bb66d
        __asm _emit 0x73
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + eax*4 + 60h]
        mov dword ptr [ebp - 52ch], edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 52ch]
        ; Exact mapped bytes E8 4E 83 00 00: call 0x586c3970
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 530h], eax
        push 0
        mov ecx, dword ptr [ebp - 530h]
        ; Exact mapped bytes E8 AB A8 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xa8
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + ecx*4 + 60h]
        mov dword ptr [ebp - 534h], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 534h]
        ; Exact mapped bytes E8 1C 83 00 00: call 0x586c3970
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 538h], eax
        push 0
        mov ecx, dword ptr [ebp - 538h]
        ; Exact mapped bytes E8 79 A7 DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xa7
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 79 FF FF FF: jmp 0x586bb5e6
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 58 FF FF FF: jmp 0x586bb5ca
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 88 59 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x59
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1f0h], eax
        mov byte ptr [ebp - 4], 38h
        cmp dword ptr [ebp - 1f0h], 0
        ; Exact mapped bytes 74 4D: je 0x586bb6df
        __asm _emit 0x74
        __asm _emit 0x4d
        push 3
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 94 DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x94
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 53ch], eax
        movzx edx, word ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 18bh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2a8h
        push ecx
        mov edx, dword ptr [ebp - 53ch]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 09 06 E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x06
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 1f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586bb6e9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f4h], 0
        mov ecx, dword ptr [ebp - 1f4h]
        mov dword ptr [ebp - 540h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 540h]
        mov dword ptr [edx + 224h], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 224h]
        mov dword ptr [ebp - 544h], edx
        push 0
        mov ecx, dword ptr [ebp - 544h]
        ; Exact mapped bytes E8 BC A6 DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xa6
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 224h]
        mov dword ptr [ebp - 548h], ecx
        push 0
        mov ecx, dword ptr [ebp - 548h]
        ; Exact mapped bytes E8 A0 A7 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xa7
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 BC 58 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1f8h], eax
        mov byte ptr [ebp - 4], 39h
        cmp dword ptr [ebp - 1f8h], 0
        ; Exact mapped bytes 74 4F: je 0x586bb7ad
        __asm _emit 0x74
        __asm _emit 0x4f
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 118h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 2bch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0ebh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 136h
        push edx
        ; Exact mapped bytes A1 38 20 96 58: mov eax, dword ptr [0x58962038]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 0B 6C DC FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x6c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 1fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586bb7b7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1fch], 0
        mov edx, dword ptr [ebp - 1fch]
        mov dword ptr [ebp - 54ch], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 54ch]
        mov dword ptr [eax + 254h], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 254h]
        mov dword ptr [ebp - 550h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 4b0h
        push ecx
        mov ecx, dword ptr [ebp - 550h]
        ; Exact mapped bytes E8 85 A6 DC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 254h]
        mov dword ptr [ebp - 554h], eax
        push 0
        mov ecx, dword ptr [ebp - 554h]
        ; Exact mapped bytes E8 C9 A6 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xa6
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        push 33ch
        ; Exact mapped bytes E8 E2 57 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x57
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 200h], eax
        mov byte ptr [ebp - 4], 3ah
        cmp dword ptr [ebp - 200h], 0
        ; Exact mapped bytes 74 27: je 0x586bb85f
        __asm _emit 0x74
        __asm _emit 0x27
        push 40h
        push 0
        push 0
        push 0f0h
        push 344h
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 99 39 FE FF: call 0x5869f1f0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x39
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 204h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586bb869
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 204h], 0
        mov edx, dword ptr [ebp - 204h]
        mov dword ptr [ebp - 558h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 558h]
        mov dword ptr [eax + 0b0h], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 55ch], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 3e8h
        push ecx
        mov ecx, dword ptr [ebp - 55ch]
        ; Exact mapped bytes E8 D3 A5 DC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xa5
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 560h], eax
        push 3
        mov ecx, dword ptr [ebp - 560h]
        ; Exact mapped bytes E8 37 9D 00 00: call 0x586c5600
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 574h
        ; Exact mapped bytes E8 30 57 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x57
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 564h], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 564h]
        mov dword ptr [ecx + 74h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 6ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 70h], 0ffffffffh
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 68h], 0
        push 90h
        ; Exact mapped bytes E8 F3 56 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x56
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 208h], eax
        mov byte ptr [ebp - 4], 3bh
        cmp dword ptr [ebp - 208h], 0
        ; Exact mapped bytes 74 36: je 0x586bb95d
        __asm _emit 0x74
        __asm _emit 0x36
        push 40h
        push 0
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 2710h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0a0h
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 FB E0 F4 FF: call 0x58609a50
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xe0
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586bb967
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 194h], 0
        mov ecx, dword ptr [ebp - 194h]
        mov dword ptr [ebp - 568h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 568h]
        mov dword ptr [edx + 280h], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 280h]
        mov dword ptr [ebp - 56ch], edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 2710h
        push eax
        mov ecx, dword ptr [ebp - 56ch]
        ; Exact mapped bytes E8 D6 A4 DC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xa4
        __asm _emit 0xdc
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 DC A5 DC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xa5
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 2ch]
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 5F 56 17 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x56
        __asm _emit 0x17
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
