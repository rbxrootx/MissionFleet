// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58619A30 .. +0x3FA bytes.
extern "C" __declspec(naked) void FUN_58619a30_58619A30() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58886ec1h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 8ch
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
        ; Exact mapped bytes E8 F4 87 E6 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x87
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588ae590h
        push 198h
        ; Exact mapped bytes E8 6E 75 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x75
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 16: je 0x58619abc
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588ae57ch
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F9 68 16 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x68
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58619ac3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 40h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [edx + 60h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58619ae8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 79: jge 0x58619b67
        __asm _emit 0x7d
        __asm _emit 0x79
        push 54h
        ; Exact mapped bytes E8 0F 75 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x75
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 3F: je 0x58619b44
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 06 B0 E6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xb0
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 78h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 96h
        push eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E1 87 E6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x87
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58619b4b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [edx + ecx*4 + 64h], eax
        ; Exact mapped bytes E9 78 FF FF FF: jmp 0x58619adf
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 64h]
        mov dword ptr [ebp - 50h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 2A BA 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xba
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 64h]
        mov dword ptr [ebp - 54h], ecx
        push 0e1h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 9B B9 19 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xb9
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58619bb8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 7D: jge 0x58619c3b
        __asm _emit 0x7d
        __asm _emit 0x7d
        push 54h
        ; Exact mapped bytes E8 3F 74 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x74
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 43: je 0x58619c18
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 2
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 33 AF E6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xaf
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 78h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 96h
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 0D 87 E6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x87
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58619c1f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 60h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [eax + edx*4 + 6ch], ecx
        ; Exact mapped bytes E9 74 FF FF FF: jmp 0x58619baf
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 6ch]
        mov dword ptr [ebp - 64h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 56 B9 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xb9
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 6ch]
        mov dword ptr [ebp - 68h], edx
        push 101h
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 37 B9 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xb9
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 80 73 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x73
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 5A: je 0x58619cee
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 6ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 29 AE E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xae
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 74h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 78h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 187h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1d2h
        push edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        mov eax, dword ptr [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F7 1F EB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x1f
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58619cf5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 7ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [edx + 74h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 80h], edx
        push 101h
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 92 B8 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 DB 72 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x72
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 72: je 0x58619dab
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 84h], ecx
        push 1
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 7E AD E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xad
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 8ch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 90h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 187h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 224h
        push edx
        mov eax, dword ptr [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 8ch]
        push edx
        mov eax, dword ptr [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 3A 1F EB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x1f
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58619db2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 94h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [edx + 78h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 98h], edx
        push 101h
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 C9 B7 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb7
        __asm _emit 0x19
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9F C1 E6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xc1
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 500h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
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
