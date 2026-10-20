// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58567250 .. +0x384 bytes.
extern "C" __declspec(naked) void FUN_58567250_58567250() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58883831h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 54h
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
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 22ch]
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x58567295
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 22ch]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5856729c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 64h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 55 E4: mov dx, word ptr [ebp - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 91 2C 02 00 00: mov word ptr [ecx + 0x22c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 22ch]
        cmp ecx, 5dch
        ; Exact mapped bytes 7E 09: jle 0x585672cc
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 3
        ; Exact mapped bytes EB 5F: jmp 0x5856732b
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 22ch]
        cmp eax, 3e8h
        ; Exact mapped bytes 7C 1B: jl 0x585672f8
        __asm _emit 0x7c
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 22ch]
        cmp edx, 5dch
        ; Exact mapped bytes 7F 09: jg 0x585672f8
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 2
        ; Exact mapped bytes EB 33: jmp 0x5856732b
        __asm _emit 0xeb
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 22ch]
        cmp ecx, 1f4h
        ; Exact mapped bytes 7E 1A: jle 0x58567324
        __asm _emit 0x7e
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 22ch]
        cmp eax, 3e8h
        ; Exact mapped bytes 7D 09: jge 0x58567324
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 07: jmp 0x5856732b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 83 3D D4 35 90 58 00: cmp dword ptr [0x589035d4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 77: je 0x585673ab
        __asm _emit 0x74
        __asm _emit 0x77
        push 20h
        ; Exact mapped bytes E8 C9 9C 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x9c
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 3E: je 0x5856738c
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes E8 19 99 2E 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x99
        __asm _emit 0x2e
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x5856735f
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [eax + ecx*2 + 30h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes 8B 0D 10 07 96 58: mov ecx, dword ptr [0x58960710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 D7 F1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xd7
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 99 66 00 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58567393
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 48h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [eax + 60h], ecx
        ; Exact mapped bytes EB 0A: jmp 0x585673b5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 60h], 0
        ; Exact mapped bytes 83 3D D8 35 90 58 00: cmp dword ptr [0x589035d8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 03 02 00 00: je 0x585675c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 25ch], 1
        ; Exact mapped bytes 75 5D: jne 0x5856742b
        __asm _emit 0x75
        __asm _emit 0x5d
        push 20h
        ; Exact mapped bytes E8 2F 9C 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x9c
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 21: je 0x58567409
        __asm _emit 0x74
        __asm _emit 0x21
        push 0
        ; Exact mapped bytes 8B 0D 18 07 96 58: mov ecx, dword ptr [0x58960718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B D6 F1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xd6
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 1C 66 00 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58567410
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 50h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [eax + 64h], ecx
        ; Exact mapped bytes E9 9A 01 00 00: jmp 0x585675c5
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 94h]
        shr eax, 1bh
        and eax, 3
        ; Exact mapped bytes 74 0E: je 0x58567451
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 270h
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 0C: jmp 0x5856745d
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 10h]
        add edx, 324h
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 88 9A 00 00 00: mov cx, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 75 7A: jne 0x585674f1
        __asm _emit 0x75
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 18h]
        movzx ecx, word ptr [eax + 9ch]
        test ecx, ecx
        ; Exact mapped bytes 7C 6C: jl 0x585674f1
        __asm _emit 0x7c
        __asm _emit 0x6c
        mov edx, dword ptr [ebp - 18h]
        movzx eax, word ptr [edx + 9ch]
        cmp eax, 2
        ; Exact mapped bytes 7F 5D: jg 0x585674f1
        __asm _emit 0x7f
        __asm _emit 0x5d
        push 20h
        ; Exact mapped bytes E8 69 9B 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x9b
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 21: je 0x585674cf
        __asm _emit 0x74
        __asm _emit 0x21
        push 3
        ; Exact mapped bytes 8B 0D F8 06 96 58: mov ecx, dword ptr [0x589606f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 D5 F1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xd5
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 56 65 00 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x585674d6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 58h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [eax + 64h], ecx
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x585675c5
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 22ch]
        cmp eax, 5dch
        ; Exact mapped bytes 7E 09: jle 0x5856750b
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 0bh
        ; Exact mapped bytes EB 60: jmp 0x5856756b
        __asm _emit 0xeb
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 22ch]
        cmp edx, 3e8h
        ; Exact mapped bytes 7C 1B: jl 0x58567538
        __asm _emit 0x7c
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 22ch]
        cmp ecx, 5dch
        ; Exact mapped bytes 7F 09: jg 0x58567538
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 0ch
        ; Exact mapped bytes EB 33: jmp 0x5856756b
        __asm _emit 0xeb
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 22ch]
        cmp eax, 1f4h
        ; Exact mapped bytes 7E 1B: jle 0x58567564
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 22ch]
        cmp edx, 3e8h
        ; Exact mapped bytes 7D 09: jge 0x58567564
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 07: jmp 0x5856756b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        push 20h
        ; Exact mapped bytes E8 92 9A 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x9a
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 23: je 0x585675a8
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes 8B 0D 0C 07 96 58: mov ecx, dword ptr [0x5896070c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC D4 F1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd4
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 7D 64 00 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x585675af
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 60h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [eax + 64h], ecx
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
        ret
    }
}
