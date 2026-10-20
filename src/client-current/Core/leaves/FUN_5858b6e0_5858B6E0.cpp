// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858B6E0 .. +0x417 bytes.
extern "C" __declspec(naked) void FUN_5858b6e0_5858B6E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588840dah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 48h
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
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 13 83 FF FF: call 0x58583a40
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 588aad48h
        imul edx, dword ptr [ebp + 0ch], 5dch
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1e4h], edx
        imul ecx, dword ptr [ebp + 10h], 0bb8h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1e8h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1e4h]
        mov edx, dword ptr [eax + 1e8h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1dch], ecx
        mov dword ptr [eax + 1e0h], edx
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 74h], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 78h], 5
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 1d4h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 1d8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0c4h], 55730h
        push 58h
        ; Exact mapped bytes E8 49 58 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x58
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1D: je 0x5858b7e8
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2D B0 EF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xb0
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858b7ef
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 2ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 20ch], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D0 B1 EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xb1
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 20ch]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 B5 94 22 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x94
        __asm _emit 0x22
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 20ch]
        mov dword ptr [ebp - 38h], eax
        push 2706h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 3C A6 EF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xa6
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 20ch]
        mov dword ptr [ebp - 3ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 53 9D 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x9d
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 20ch]
        mov dword ptr [ebp - 40h], ecx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 CD A5 EF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xa5
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 89 57 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1D: je 0x5858b8a8
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 6D AF EF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xaf
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858b8af
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 44h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [eax + 208h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 208h]
        mov dword ptr [ebp - 48h], eax
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 75 3C F1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x3c
        __asm _emit 0xf1
        __asm _emit 0xff
        push 100h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0d4h
        push ecx
        ; Exact mapped bytes E8 1F 15 2C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 90h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1ech], 1
        push 20h
        ; Exact mapped bytes E8 E2 56 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x56
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 21: je 0x5858b953
        __asm _emit 0x74
        __asm _emit 0x21
        push 0
        ; Exact mapped bytes 8B 0D 14 07 96 58: mov ecx, dword ptr [0x58960714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 91 EF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x91
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 4ch]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D2 20 FE FF: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858b95a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ecx + 210h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 210h]
        mov dword ptr [ebp - 54h], ecx
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [eax + 4]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 6A 21 FE FF: call 0x5856db00
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0bch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0c0h], 0ah
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 88h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 7ch], 64h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 80h], 0c8h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 214h], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0cch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 94h], 1
        mov edx, 1860h
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 9C 00 00 00: mov word ptr [eax + 0x9c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 9ch]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 98h], edx
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1f4h], 32h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1f4h]
        mov dword ptr [edx + 1f0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0d0h], 384h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 204h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0b8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b0h], 0
        mov ecx, dword ptr [ebp - 10h]
        imul edx, dword ptr [ecx + 0c0h], 2710h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0c8h], edx
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c8h]
        mov dword ptr [ecx + 0b4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1f8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1fch], 0
        push 0a0h
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 218h
        push eax
        ; Exact mapped bytes E8 37 13 2C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x13
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
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
