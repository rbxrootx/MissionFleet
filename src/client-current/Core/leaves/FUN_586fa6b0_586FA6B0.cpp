// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586FA6B0 .. +0x3A6 bytes.
extern "C" __declspec(naked) void FUN_586fa6b0_586FA6B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888d25eh
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
        ; Exact mapped bytes E8 74 7B D8 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x7b
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b3a5ch
        push 198h
        ; Exact mapped bytes E8 EE 68 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x68
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 16: je 0x586fa73c
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588b3a44h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 79 5C 08 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x5c
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586fa743
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 40h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [edx + 60h], eax
        push 54h
        ; Exact mapped bytes E8 A7 68 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x68
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 31: je 0x586fa79e
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 44h], edx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 A0 A3 D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xa3
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 87 7B D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x7b
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x586fa7a5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 4ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [eax + 64h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 50h], eax
        push 80h
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 72 AD 0B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xad
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586fa7e1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 6D: jge 0x586fa854
        __asm _emit 0x7d
        __asm _emit 0x6d
        push 54h
        ; Exact mapped bytes E8 16 68 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x68
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 36: je 0x586fa834
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 0A A3 D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xa3
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F1 7A D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x7a
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586fa83b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 5ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [eax + edx*4 + 68h], ecx
        ; Exact mapped bytes EB 84: jmp 0x586fa7d8
        __asm _emit 0xeb
        __asm _emit 0x84
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 68h]
        mov dword ptr [ebp - 60h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 3D AD 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xad
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 68h]
        mov dword ptr [ebp - 64h], edx
        push 101h
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 1E AD 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xad
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586fa8a5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 6D: jge 0x586fa918
        __asm _emit 0x7d
        __asm _emit 0x6d
        push 54h
        ; Exact mapped bytes E8 52 67 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x67
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 36: je 0x586fa8f8
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 3
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 46 A2 D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 2D 7A D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x7a
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x586fa8ff
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [edx + ecx*4 + 70h], eax
        ; Exact mapped bytes EB 84: jmp 0x586fa89c
        __asm _emit 0xeb
        __asm _emit 0x84
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 70h]
        mov dword ptr [ebp - 74h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 79 AC 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xac
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 70h]
        mov dword ptr [ebp - 78h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 5A AC 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xac
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 A3 66 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x66
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 66: je 0x586fa9d7
        __asm _emit 0x74
        __asm _emit 0x66
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 7ch], eax
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 4C A1 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 84h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 88h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 1dch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 23bh
        push ecx
        mov edx, dword ptr [ebp - 80h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 0E 13 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x13
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586fa9de
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ecx + 78h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 90h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 9D AB 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xab
        __asm _emit 0x0b
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 73 B5 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xb5
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
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
