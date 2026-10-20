// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58699A80 .. +0x1A6C bytes.
extern "C" __declspec(naked) void FUN_58699a80_58699A80() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888aa09h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 300h
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
        ; Exact mapped bytes E8 A4 87 DE FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x87
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b0510h
        push 54h
        ; Exact mapped bytes E8 21 75 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x75
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 38: je 0x58699b2b
        __asm _emit 0x74
        __asm _emit 0x38
        push 401h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D B0 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb0
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 130h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FA 87 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x87
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58699b32
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 134h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [eax + 64h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 138h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 49 BA 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xba
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 13ch], edx
        push 0
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 C0 C2 DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xc2
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 7C 74 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x74
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 38: je 0x58699bd0
        __asm _emit 0x74
        __asm _emit 0x38
        push 400h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 AF DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xaf
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 140h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 55 87 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x87
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58699bd7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 144h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 144h]
        mov dword ptr [edx + 60h], eax
        push 54h
        ; Exact mapped bytes E8 0D 74 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 26: je 0x58699c2d
        __asm _emit 0x74
        __asm _emit 0x26
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 9ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 5ch
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F8 86 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x86
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58699c34
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 148h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 148h]
        mov dword ptr [edx + 68h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 14ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 47 B9 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xb9
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 150h], ecx
        push 0
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 BE C1 DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xc1
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 7A 73 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x73
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 43: je 0x58699cdd
        __asm _emit 0x74
        __asm _emit 0x43
        push 26ch
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 AE DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xae
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 9ah
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 160h
        push eax
        mov ecx, dword ptr [ebp - 154h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 48 86 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x86
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58699ce4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 158h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 158h]
        mov dword ptr [eax + edx + 0ach], ecx
        push 54h
        ; Exact mapped bytes E8 F4 72 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x72
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 43: je 0x58699d63
        __asm _emit 0x74
        __asm _emit 0x43
        push 26ch
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 AD DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xad
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0c2h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 160h
        push eax
        mov ecx, dword ptr [ebp - 15ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C2 85 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58699d6a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 160h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 160h]
        mov dword ptr [edx + ecx + 0ach], eax
        push 54h
        ; Exact mapped bytes E8 6E 72 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x72
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 44: je 0x58699dea
        __asm _emit 0x74
        __asm _emit 0x44
        push 26ch
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A AD DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xad
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0ddh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 160h
        push edx
        mov eax, dword ptr [ebp - 164h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 3B 85 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x58699df1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 168h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 168h]
        mov dword ptr [ecx + eax + 0ach], edx
        push 54h
        ; Exact mapped bytes E8 E8 71 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 43: je 0x58699e6f
        __asm _emit 0x74
        __asm _emit 0x43
        push 26dh
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 AC DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xac
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a5h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 173h
        push ecx
        mov edx, dword ptr [ebp - 16ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 B6 84 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58699e76
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 170h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 170h]
        mov dword ptr [ecx + eax + 0b8h], edx
        push 54h
        ; Exact mapped bytes E8 62 71 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x71
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 43: je 0x58699ef5
        __asm _emit 0x74
        __asm _emit 0x43
        push 26dh
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E AC DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xac
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 0cdh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 173h
        push ecx
        mov edx, dword ptr [ebp - 174h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 30 84 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x58699efc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 178h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 178h]
        mov dword ptr [eax + edx + 0b8h], ecx
        push 54h
        ; Exact mapped bytes E8 DC 70 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x70
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 43: je 0x58699f7b
        __asm _emit 0x74
        __asm _emit 0x43
        push 26dh
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 AB DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xab
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0e8h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 173h
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 AA 83 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x83
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58699f82
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 180h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 180h]
        mov dword ptr [edx + ecx + 0b8h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58699fb8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 8D 8C 00 00 00: jge 0x5869a04e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 184h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 CB B5 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb5
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 188h], ecx
        push 0
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 3B BE DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xbe
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0b8h]
        mov dword ptr [ebp - 18ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 88 B5 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xb5
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0b8h]
        mov dword ptr [ebp - 190h], ecx
        push 0
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 F8 BD DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xbd
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 61 FF FF FF: jmp 0x58699faf
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 AF 6F 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x6f
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 2C: je 0x5869a091
        __asm _emit 0x74
        __asm _emit 0x2c
        push 40h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        add eax, 56h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 0aah
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 84 C7 DE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x5869a098
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 194h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 194h]
        mov dword ptr [edx + 25ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 25ch]
        mov dword ptr [ebp - 198h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 DD B4 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xb4
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 25ch]
        mov dword ptr [ebp - 19ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 51 BD DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xbd
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 0D 6F 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x6f
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 5F: je 0x5869a166
        __asm _emit 0x74
        __asm _emit 0x5f
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        add eax, 5bh
        mov dword ptr [ebp - 1a0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 0afh
        mov dword ptr [ebp - 1a4h], edx
        push 9ch
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 A9 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        push 40h
        mov eax, dword ptr [ebp - 1a0h]
        push eax
        mov ecx, dword ptr [ebp - 1a4h]
        push ecx
        mov edx, dword ptr [ebp - 1a8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 BF 81 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x81
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5869a16d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 1ach], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ach]
        mov dword ptr [edx + 270h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 270h]
        mov dword ptr [ebp - 1b0h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 08 B4 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xb4
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 270h]
        mov dword ptr [ebp - 1b4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 7C BC DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xbc
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 38 6E 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x6e
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 5C: je 0x5869a238
        __asm _emit 0x74
        __asm _emit 0x5c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        add eax, 5bh
        mov dword ptr [ebp - 1b8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 0afh
        mov dword ptr [ebp - 1bch], edx
        push 0
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 A8 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xa8
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1c0h], eax
        push 40h
        mov eax, dword ptr [ebp - 1b8h]
        push eax
        mov ecx, dword ptr [ebp - 1bch]
        push ecx
        mov edx, dword ptr [ebp - 1c0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 DD C5 DE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xc5
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x5869a23f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 1c4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1c4h]
        mov dword ptr [edx + 274h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 274h]
        mov dword ptr [ebp - 1c8h], edx
        push 0
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 D9 52 E0 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x52
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 85 6D 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 2B: je 0x5869a2ba
        __asm _emit 0x74
        __asm _emit 0x2b
        push 40h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 56h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        add eax, 0aah
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 6B 80 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x80
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5869a2c1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov edx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 1cch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1cch]
        mov dword ptr [eax + 264h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 264h]
        mov dword ptr [ebp - 1d0h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 B4 B2 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xb2
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 264h]
        mov dword ptr [ebp - 1d4h], edx
        push 0
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 28 BB DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xbb
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 E4 6C 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x6c
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 2E: je 0x5869a35e
        __asm _emit 0x74
        __asm _emit 0x2e
        push 40h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 56h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        add eax, 0aah
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 CA 7F DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x7f
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869a368
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 1d8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1d8h]
        mov dword ptr [eax + 260h], ecx
        push 58h
        ; Exact mapped bytes E8 76 6C 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x6c
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 32: je 0x5869a3d6
        __asm _emit 0x74
        __asm _emit 0x32
        push 40h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        add eax, 56h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 0aah
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 42 C4 DE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xc4
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869a3e0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 1dch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1dch]
        mov dword ptr [edx + 258h], eax
        push 54h
        ; Exact mapped bytes E8 FE 6B 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x6b
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 32: je 0x5869a44e
        __asm _emit 0x74
        __asm _emit 0x32
        push 40h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        add edx, 56h
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 0aah
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 DA 7E DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x7e
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869a458
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 1e0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1e0h]
        mov dword ptr [ecx + 26ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 26ch]
        mov dword ptr [ebp - 1e4h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 1A B1 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb1
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 26ch]
        mov dword ptr [ebp - 1e8h], eax
        push 0
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 8E B9 DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xb9
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 4A 6B 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x6b
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 32: je 0x5869a502
        __asm _emit 0x74
        __asm _emit 0x32
        push 40h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        add edx, 56h
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 0aah
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 26 7E DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x7e
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869a50c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov eax, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 1ech], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1ech]
        mov dword ptr [ecx + 268h], edx
        push 0fch
        ; Exact mapped bytes E8 CF 6A 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x6a
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 49: je 0x5869a594
        __asm _emit 0x74
        __asm _emit 0x49
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 A5 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xa5
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 89h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 11ah
        push ecx
        push 4
        mov edx, dword ptr [ebp - 1f0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 E4 03 12 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x03
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869a59e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 1f4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1f4h]
        mov dword ptr [ecx + eax + 80h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 80h]
        mov dword ptr [ebp - 1f8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 C2 AF 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xaf
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 80h]
        mov dword ptr [ebp - 1fch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 2D B8 DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xb8
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 E6 69 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x69
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 49: je 0x5869a67d
        __asm _emit 0x74
        __asm _emit 0x49
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C A4 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa4
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 200h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 89h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 140h
        push eax
        push 4
        mov ecx, dword ptr [ebp - 200h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 FB 02 12 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x02
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869a687
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov eax, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 204h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 204h]
        mov dword ptr [edx + ecx + 80h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 80h]
        mov dword ptr [ebp - 208h], eax
        push 101h
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 D9 AE 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xae
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 80h]
        mov dword ptr [ebp - 20ch], eax
        push 0
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 44 B7 DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb7
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 FD 68 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x68
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 47: je 0x5869a764
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
        ; Exact mapped bytes E8 A6 A3 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xa3
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0a3h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0d7h
        push edx
        push 5
        mov eax, dword ptr [ebp - 210h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 14 02 12 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869a76e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov edx, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 214h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 214h]
        mov dword ptr [ecx + eax + 88h], edx
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 88h]
        mov dword ptr [ebp - 218h], edx
        push 101h
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 F4 AD 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xad
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 88h]
        mov dword ptr [ebp - 21ch], edx
        push 0
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 60 B6 DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xb6
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 19 68 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x68
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 46: je 0x5869a847
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
        ; Exact mapped bytes E8 C2 A2 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xa2
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a5h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 118h
        push ecx
        push 6
        mov edx, dword ptr [ebp - 220h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 31 01 12 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869a851
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov ecx, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 224h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 224h]
        mov dword ptr [eax + edx + 94h], ecx
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 94h]
        mov dword ptr [ebp - 228h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 11 AD 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xad
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 94h]
        mov dword ptr [ebp - 22ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 7D B5 DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xb5
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 100h
        ; Exact mapped bytes E8 36 67 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x67
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 48: je 0x5869a92c
        __asm _emit 0x74
        __asm _emit 0x48
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF A1 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xa1
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        push 0
        mov edx, dword ptr [ebp + 10h]
        add edx, 0a5h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 146h
        push eax
        push 6
        mov ecx, dword ptr [ebp - 230h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 4C F5 EE FF: call 0x58589e70
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf5
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869a936
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov eax, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 234h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 234h]
        mov dword ptr [edx + ecx + 0a0h], eax
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0a0h]
        mov dword ptr [ebp - 238h], eax
        push 101h
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 2C AC 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xac
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0a0h]
        mov dword ptr [ebp - 23ch], eax
        push 0
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 98 B4 DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xb4
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 51 66 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x66
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 47: je 0x5869aa10
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
        ; Exact mapped bytes E8 FA A0 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xa0
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 240h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0cbh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0d7h
        push edx
        push 5
        mov eax, dword ptr [ebp - 240h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 68 FF 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869aa1a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov edx, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 244h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 244h]
        mov dword ptr [ecx + eax + 88h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 88h]
        mov dword ptr [ebp - 248h], edx
        push 101h
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 46 AB 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xab
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 88h]
        mov dword ptr [ebp - 24ch], edx
        push 0
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 B1 B3 DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb3
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 6A 65 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x65
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 46: je 0x5869aaf6
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
        ; Exact mapped bytes E8 13 A0 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xa0
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 0cdh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 118h
        push ecx
        push 6
        mov edx, dword ptr [ebp - 250h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 82 FE 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869ab00
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 254h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 254h]
        mov dword ptr [eax + edx + 94h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 94h]
        mov dword ptr [ebp - 258h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 60 AA 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xaa
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 94h]
        mov dword ptr [ebp - 25ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 CB B2 DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb2
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 100h
        ; Exact mapped bytes E8 84 64 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 48: je 0x5869abde
        __asm _emit 0x74
        __asm _emit 0x48
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D 9F DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x9f
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        push 0
        mov edx, dword ptr [ebp + 10h]
        add edx, 0cdh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 146h
        push eax
        push 6
        mov ecx, dword ptr [ebp - 260h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 9A F2 EE FF: call 0x58589e70
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf2
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869abe8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov eax, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 264h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 264h]
        mov dword ptr [edx + ecx + 0a0h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0a0h]
        mov dword ptr [ebp - 268h], eax
        push 101h
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 78 A9 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xa9
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0a0h]
        mov dword ptr [ebp - 26ch], eax
        push 0
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 E3 B1 DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xb1
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 9C 63 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x63
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 47: je 0x5869acc5
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
        ; Exact mapped bytes E8 45 9E DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x9e
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 270h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0e7h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0d7h
        push edx
        push 5
        mov eax, dword ptr [ebp - 270h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 B3 FC 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfc
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869accf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov edx, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 274h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 274h]
        mov dword ptr [edx + ecx + 88h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 88h]
        mov dword ptr [ebp - 278h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 91 A8 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xa8
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 88h]
        mov dword ptr [ebp - 27ch], edx
        push 0
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 FC B0 DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xb0
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 B5 62 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x62
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 46: je 0x5869adab
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
        ; Exact mapped bytes E8 5E 9D DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x9d
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 280h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 0e9h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 118h
        push ecx
        push 6
        mov edx, dword ptr [ebp - 280h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 CD FB 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xfb
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869adb5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov ecx, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 284h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 284h]
        mov dword ptr [ecx + eax + 94h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 94h]
        mov dword ptr [ebp - 288h], eax
        push 101h
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 AB A7 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xa7
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 94h]
        mov dword ptr [ebp - 28ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 16 B0 DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xb0
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 100h
        ; Exact mapped bytes E8 CF 61 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x61
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 48: je 0x5869ae93
        __asm _emit 0x74
        __asm _emit 0x48
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 9C DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x9c
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 290h], eax
        push 1
        mov edx, dword ptr [ebp + 10h]
        add edx, 0e9h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 146h
        push eax
        push 6
        mov ecx, dword ptr [ebp - 290h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 E5 EF EE FF: call 0x58589e70
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xef
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869ae9d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov eax, dword ptr [ebp - 0f4h]
        mov dword ptr [ebp - 294h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 294h]
        mov dword ptr [eax + edx + 0a0h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0a0h]
        mov dword ptr [ebp - 298h], edx
        push 101h
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 C3 A6 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xa6
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0a0h]
        mov dword ptr [ebp - 29ch], eax
        push 0
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 2E AF DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xaf
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 E7 60 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x60
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f8h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 47: je 0x5869af7a
        __asm _emit 0x74
        __asm _emit 0x47
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D 9B DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 2a0h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 109h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 46h
        push edx
        push 8
        mov eax, dword ptr [ebp - 2a0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 FE F9 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xf9
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869af84
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0
        mov edx, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 2a4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2a4h]
        mov dword ptr [eax + 0c4h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 2a8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 EE A5 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xa5
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 2ach], edx
        push 0
        mov ecx, dword ptr [ebp - 2ach]
        ; Exact mapped bytes E8 62 AE DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xae
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 2b0h], ecx
        push 0f423fh
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 93 01 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 FC 5F 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x5f
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 49: je 0x5869b067
        __asm _emit 0x74
        __asm _emit 0x49
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 9A DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x9a
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 2b4h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 109h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 124h
        push eax
        push 6
        mov ecx, dword ptr [ebp - 2b4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 11 F9 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf9
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869b071
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 2b8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2b8h]
        mov dword ptr [ecx + 0c8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c8h]
        mov dword ptr [ebp - 2bch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 01 A5 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xa5
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c8h]
        mov dword ptr [ebp - 2c0h], eax
        push 0
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 75 AD DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xad
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 2c4h], edx
        push 1eh
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 A9 00 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 12 5F 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x5f
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 108h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 6B: je 0x5869b173
        __asm _emit 0x74
        __asm _emit 0x6b
        push 25h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 99 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x99
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 2c8h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2cch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2d0h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 122h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 146h
        push eax
        mov ecx, dword ptr [ebp - 2c8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 2cch]
        push eax
        mov ecx, dword ptr [ebp - 2d0h]
        push ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 75 0B E3 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x0b
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869b17d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov edx, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 2d4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2d4h]
        mov dword ptr [eax + 74h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 2d8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 FB A3 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xa3
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 2dch], edx
        push 0
        mov ecx, dword ptr [ebp - 2dch]
        ; Exact mapped bytes E8 72 AC DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xac
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 2E 5E 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x5e
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 49: je 0x5869b235
        __asm _emit 0x74
        __asm _emit 0x49
        push 408h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 99 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x99
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 2e0h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 9bh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0d1h
        push ecx
        mov edx, dword ptr [ebp - 2e0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 F3 70 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x70
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869b23f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 2e4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2e4h]
        mov dword ptr [ecx + eax + 2c0h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 2c0h]
        mov dword ptr [ebp - 2e8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 21 A3 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xa3
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 2c0h]
        mov dword ptr [ebp - 2ech], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 DC AC DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xac
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 48 5D 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x5d
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 49: je 0x5869b31b
        __asm _emit 0x74
        __asm _emit 0x49
        push 408h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 98 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x98
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 2f0h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0deh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0d1h
        push eax
        mov ecx, dword ptr [ebp - 2f0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 0D 70 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869b325
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov eax, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 2f4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2f4h]
        mov dword ptr [edx + ecx + 2c0h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 2c0h]
        mov dword ptr [ebp - 2f8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 3B A2 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xa2
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 2c0h]
        mov dword ptr [ebp - 2fch], eax
        push 0
        mov ecx, dword ptr [ebp - 2fch]
        ; Exact mapped bytes E8 F6 AB DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xab
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 8ch
        ; Exact mapped bytes E8 5F 5C 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x5c
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 28: je 0x5869b3e3
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 8ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 25h
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 05 4C 05 00: call 0x586effe0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869b3ed
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 300h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 300h]
        mov dword ptr [edx + 70h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 304h], edx
        push 0
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 6E AB DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xab
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 8ch
        ; Exact mapped bytes E8 D7 5B 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x5b
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 27: je 0x5869b46a
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp + 10h]
        add eax, 0cch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 25h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 DE 82 06 00: call 0x58703740
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869b474
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 308h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 308h]
        mov dword ptr [ecx + 6ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 30ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 30ch]
        ; Exact mapped bytes E8 E7 AA DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xaa
        __asm _emit 0xde
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DD AA DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xaa
        __asm _emit 0xde
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
