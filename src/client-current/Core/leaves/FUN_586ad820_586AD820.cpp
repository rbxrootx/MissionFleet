// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AD820 .. +0x3F2 bytes.
extern "C" __declspec(naked) void FUN_586ad820_586AD820() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888b414h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 84h
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
        ; Exact mapped bytes E8 04 4A DD FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x4a
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b0b24h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 78h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586ad898
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x586ad945
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 5B 37 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x37
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 39: je 0x586ad8f2
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 14h]
        add eax, 410h
        push eax
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 72 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x72
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 33 4A DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x4a
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586ad8f9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [edx + ecx*4 + 60h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 60h]
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 09: jne 0x586ad92c
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0fffffeffh
        ; Exact mapped bytes EB 07: jmp 0x586ad933
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 101h
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 71 7C 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x7c
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 4A FF FF FF: jmp 0x586ad88f
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 10ch
        ; Exact mapped bytes E8 B5 36 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x36
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 40: je 0x586ad99f
        __asm _emit 0x74
        __asm _emit 0x40
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 54h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 48h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 19h
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
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F6 23 E2 FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x23
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x586ad9a6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 50h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [eax + 68h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 54h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 B1 84 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 58h], eax
        push 0eh
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 0E E7 DF FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xe7
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 5ch], edx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 EB 83 DD FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x83
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 04 36 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x36
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 35: je 0x586ada45
        __asm _emit 0x74
        __asm _emit 0x35
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 70 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x70
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 6fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 19h
        push ecx
        push -1
        mov edx, dword ptr [ebp - 60h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 30 CF 10 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xcf
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x586ada4c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 64h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [edx + 6ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 68h], edx
        push 101h
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 3B 7B 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x7b
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 84 35 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 56: je 0x586adae6
        __asm _emit 0x74
        __asm _emit 0x56
        push 25h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 70 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x70
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 74h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 90h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 88h
        push ecx
        mov edx, dword ptr [ebp - 6ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 FF E1 E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xe1
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x586adaed
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [ecx + 70h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 7ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 9A 7A 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x7a
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 E3 34 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x34
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 62: je 0x586adb93
        __asm _emit 0x74
        __asm _emit 0x62
        push 24h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 6F DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x6f
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 84h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 88h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 90h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0bah
        push eax
        mov ecx, dword ptr [ebp - 80h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 52 E1 E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xe1
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x586adb9a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 8ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [eax + 74h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 90h], eax
        push 101h
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 E1 79 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x79
        __asm _emit 0x10
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B7 83 DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x83
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
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
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
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
