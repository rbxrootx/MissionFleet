// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00585788 .. +0x9B5 bytes.
extern "C" __declspec(naked) void FUN_00585788_00585788() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fba8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 36ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 35ch], ecx
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 86 09 00 00: call 0x58613d
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 75 14: jne 0x5857d8
        __asm _emit 0x75
        __asm _emit 0x14
        push 87h
        push 67d0d8h
        ; Exact mapped bytes E8 6D 35 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5857d8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5857be
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E8 79 9F F4 FF: call 0x4cf75c
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x9f
        __asm _emit 0xf4
        __asm _emit 0xff
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 08: mov cx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        cmp ecx, 0e108h
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x58587c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 76 C2 FA FF: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xc2
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 4ch], edx
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 6C: je 0x585875
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 4ch]
        cmp dword ptr [eax + 10h], 3
        ; Exact mapped bytes 75 63: jne 0x585875
        __asm _emit 0x75
        __asm _emit 0x63
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 20h
        ; Exact mapped bytes E8 8B F5 F9 FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf5
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 18h
        ; Exact mapped bytes E8 7F F5 F9 FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf5
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 1ch
        ; Exact mapped bytes E8 73 F5 F9 FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf5
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 24 B4 68 00: call dword ptr [0x68b424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [edx + 10h], eax
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 5ch]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 22: jne 0x585875
        __asm _emit 0x75
        __asm _emit 0x22
        push -1
        push 0
        push 0f106h
        ; Exact mapped bytes E8 C8 12 F7 FF: call 0x4f6b29
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x12
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 FB 09 00 00: call 0x58626b
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B7 08 00 00: jmp 0x58612c
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], 1
        lea edx, [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 35ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes FF 92 FC 00 00 00: call dword ptr [edx + 0xfc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 81 08 00 00: je 0x58611d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 5ch]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x5858bc
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a1h
        push 67d0d8h
        ; Exact mapped bytes E8 89 34 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x34
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5858bc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x58589c
        __asm _emit 0x75
        __asm _emit 0xda
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 3D F4 F9 FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xf9
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 14h]
        and edx, 20h
        test edx, edx
        ; Exact mapped bytes 0F 84 B0 01 00 00: je 0x585a92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 0F 85 A6 01 00 00: jne 0x585a92
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f045h
        lea ecx, [ebp - 0fch]
        ; Exact mapped bytes E8 7C 70 F4 FF: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x70
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        push 0f046h
        lea ecx, [ebp - 0f8h]
        ; Exact mapped bytes E8 68 70 F4 FF: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        push 0f047h
        lea ecx, [ebp - 2fch]
        ; Exact mapped bytes E8 54 70 F4 FF: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x70
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        push 0f048h
        lea ecx, [ebp - 2f8h]
        ; Exact mapped bytes E8 40 70 F4 FF: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x70
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        push 0
        lea ecx, [ebp - 2fch]
        ; Exact mapped bytes E8 61 F4 F9 FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf4
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        push 6
        lea ecx, [ebp - 0f8h]
        ; Exact mapped bytes E8 53 F4 F9 FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf4
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0fch]
        ; Exact mapped bytes E8 47 F4 F9 FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf4
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        push 0
        lea ecx, [ebp - 2f4h]
        ; Exact mapped bytes E8 2F DF F1 FF: call 0x4a38a0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xdf
        __asm _emit 0xf1
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 6
        lea ecx, [ebp - 2f8h]
        ; Exact mapped bytes E8 2A F4 F9 FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf4
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        lea ecx, [ebp - 2f4h]
        ; Exact mapped bytes E8 1A E1 F1 FF: call 0x4a3aab
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xe1
        __asm _emit 0xf1
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 6B: je 0x585a01
        __asm _emit 0x74
        __asm _emit 0x6b
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 2f4h]
        ; Exact mapped bytes E8 2B F4 F1 FF: call 0x4a4dd0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xf4
        __asm _emit 0xf1
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2f8h]
        ; Exact mapped bytes E8 38 6F F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x6f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 2fch]
        ; Exact mapped bytes E8 29 6F F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x6f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 0f8h]
        ; Exact mapped bytes E8 1A 6F F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x6f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0fch]
        ; Exact mapped bytes E8 0B 6F F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x6f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 FF 6E F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x6e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 6F 08 00 00: call 0x58626b
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 2B 07 00 00: jmp 0x58612c
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 350h]
        push eax
        lea ecx, [ebp - 2f4h]
        ; Exact mapped bytes E8 D3 E2 F1 FF: call 0x4a3ce6
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe2
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 360h], eax
        mov ecx, dword ptr [ebp - 360h]
        mov dword ptr [ebp - 364h], ecx
        mov byte ptr [ebp - 4], 7
        mov edx, dword ptr [ebp - 364h]
        push edx
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 AE 70 F4 FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x70
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 6
        lea ecx, [ebp - 350h]
        ; Exact mapped bytes E8 A5 6E F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x6e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 2f4h]
        ; Exact mapped bytes E8 7A F3 F1 FF: call 0x4a4dd0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf3
        __asm _emit 0xf1
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2f8h]
        ; Exact mapped bytes E8 87 6E F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x6e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 2fch]
        ; Exact mapped bytes E8 78 6E F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x6e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 0f8h]
        ; Exact mapped bytes E8 69 6E F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x6e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0fch]
        ; Exact mapped bytes E8 5A 6E F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x6e
        __asm _emit 0xf4
        __asm _emit 0xff
        lea ecx, [ebp - 0f4h]
        ; Exact mapped bytes E8 6A F2 F9 FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf2
        __asm _emit 0xf9
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 8
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes E8 6A B9 FA FF: call 0x531416
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb9
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 16: je 0x585acb
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 D7 B9 FA FF: call 0x531494
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xb9
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0f4h]
        ; Exact mapped bytes E8 1D 70 F4 FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x70
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 19: jmp 0x585ae4
        __asm _emit 0xeb
        __asm _emit 0x19
        lea eax, [ebp - 0f4h]
        push eax
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes E8 95 CF F4 FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xcf
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3D B5 F4 FF: call 0x4d1021
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xb5
        __asm _emit 0xf4
        __asm _emit 0xff
        lea ecx, [ebp - 0f4h]
        ; Exact mapped bytes E8 71 F2 F9 FF: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp eax, 1fh
        ; Exact mapped bytes 7E 0D: jle 0x585b01
        __asm _emit 0x7e
        __asm _emit 0x0d
        push 1fh
        lea ecx, [ebp - 0f4h]
        ; Exact mapped bytes E8 D2 76 F4 FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x76
        __asm _emit 0xf4
        __asm _emit 0xff
        push 14h
        push 0
        lea ecx, [ebp - 0f0h]
        push ecx
        ; Exact mapped bytes E8 AF FD ED FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xfd
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 0f0h], 14h
        lea ecx, [ebp - 0f4h]
        ; Exact mapped bytes E8 81 F2 F9 FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 D0 F1 F9 FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xf1
        __asm _emit 0xf9
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 9
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 49 F2 F9 FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf2
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 59: je 0x585ba0
        __asm _emit 0x74
        __asm _emit 0x59
        mov dword ptr [ebp - 0e8h], 0
        lea edx, [ebp - 354h]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 1F 07 F2 FF: call 0x4a627f
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x07
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 368h], eax
        mov eax, dword ptr [ebp - 368h]
        mov dword ptr [ebp - 36ch], eax
        mov byte ptr [ebp - 4], 0ah
        mov ecx, dword ptr [ebp - 36ch]
        push ecx
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 61 6F F4 FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x6f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 9
        lea ecx, [ebp - 354h]
        ; Exact mapped bytes E8 58 6D F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x6d
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], 0f040h
        ; Exact mapped bytes EB 39: jmp 0x585bd9
        __asm _emit 0xeb
        __asm _emit 0x39
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 02 F2 F9 FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf2
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        push 104h
        push 104h
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 D8 74 F4 FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x74
        __asm _emit 0xf4
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 E1 F1 F9 FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf1
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 B0 94 F5 FF: call 0x4df07f
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x94
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], 0f049h
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 6E 00 F6 FF: call 0x4e5c4f
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0xf6
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 75 19: jne 0x585c04
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 4A 02 F6 FF: call 0x4e5e47
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], 1
        lea edx, [ebp - 48h]
        push edx
        lea eax, [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 35ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes FF 92 00 01 00 00: call dword ptr [edx + 0x100]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 75 0D: jne 0x585c33
        __asm _emit 0x75
        __asm _emit 0x0d
        push 5854a0h
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 4D 0C FB FF: call 0x536880
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x0c
        __asm _emit 0xfb
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes E8 36 BF FA FF: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xbf
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 58 0C F5 FF: call 0x4d6899
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 35ch]
        push eax
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 CD 06 00 00: call 0x586320
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0ch
        lea ecx, [ebp - 0dch]
        ; Exact mapped bytes E8 A5 F0 F9 FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xf0
        __asm _emit 0xf9
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0dh
        lea ecx, [ebp - 0f4h]
        ; Exact mapped bytes E8 39 F1 F9 FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf1
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        push 0c9h
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 F7 03 F5 FF: call 0x4d6079
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0xf5
        __asm _emit 0xff
        lea ecx, [ebp - 358h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 7C 05 F2 FF: call 0x4a620d
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 370h], eax
        mov edx, dword ptr [ebp - 370h]
        mov dword ptr [ebp - 374h], edx
        mov byte ptr [ebp - 4], 0eh
        mov ecx, dword ptr [ebp - 374h]
        ; Exact mapped bytes E8 F8 F0 F9 FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf0
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        push 0cah
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 B6 03 F5 FF: call 0x4d6079
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x03
        __asm _emit 0xf5
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0dh
        lea ecx, [ebp - 358h]
        ; Exact mapped bytes E8 1A 6C F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x6c
        __asm _emit 0xf4
        __asm _emit 0xff
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 D0 F0 F9 FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xf0
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 0d4h]
        push eax
        lea ecx, [ebp - 0dch]
        push ecx
        ; Exact mapped bytes E8 A1 F1 F7 FF: call 0x504e8f
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf1
        __asm _emit 0xf7
        __asm _emit 0xff
        lea ecx, [ebp - 0dch]
        ; Exact mapped bytes E8 B1 F0 F9 FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf0
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        push 0cbh
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 6F 03 F5 FF: call 0x4d6079
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x03
        __asm _emit 0xf5
        __asm _emit 0xff
        push 5
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 A8 0A F5 FF: call 0x4d67bf
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x0a
        __asm _emit 0xf5
        __asm _emit 0xff
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 52 61 FA FF: call 0x52be74
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x61
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 0F 85 C8 00 00 00: jne 0x585df4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 0f0h]
        push edx
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 7C 0A FB FF: call 0x5367b7
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 0F 85 B0 00 00 00: jne 0x585df4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 25 BE FA FF: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xbe
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 47 0B F5 FF: call 0x4d6899
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x0b
        __asm _emit 0xf5
        __asm _emit 0xff
        lea eax, [ebp - 48h]
        push eax
        lea ecx, [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 35ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes FF 90 08 01 00 00: call dword ptr [eax + 0x108]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 A9 AF F4 FF: call 0x4d0d22
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xaf
        __asm _emit 0xf4
        __asm _emit 0xff
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 7C 01 F6 FF: call 0x4e5efd
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0xf6
        __asm _emit 0xff
        push -1
        push 0
        push 0f106h
        ; Exact mapped bytes E8 9A 0D F7 FF: call 0x4f6b29
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x0d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0ch
        lea ecx, [ebp - 0dch]
        ; Exact mapped bytes E8 4E 6B F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x6b
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0bh
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 E3 05 00 00: call 0x586390
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 9
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 BE 01 F6 FF: call 0x4e5f77
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0xf6
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 27 6B F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x6b
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0f4h]
        ; Exact mapped bytes E8 18 6B F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x6b
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 0C 6B F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x6b
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 7C 04 00 00: call 0x58626b
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 38 03 00 00: jmp 0x58612c
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 DA 26 FA FF: call 0x5284d6
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x26
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 B6 26 FA FF: call 0x5284bd
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x26
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 79 26 FA FF: call 0x52848b
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x26
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes 73 0B: jae 0x585e22
        __asm _emit 0x73
        __asm _emit 0x0b
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 6C 26 FA FF: call 0x52848b
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x26
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 7A 26 FA FF: call 0x5284a4
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x26
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes 76 0B: jbe 0x585e3a
        __asm _emit 0x76
        __asm _emit 0x0b
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 6D 26 FA FF: call 0x5284a4
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x26
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 49 26 FA FF: call 0x52848b
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x26
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp - 64h], eax
        ; Exact mapped bytes 73 0B: jae 0x585e52
        __asm _emit 0x73
        __asm _emit 0x0b
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 3C 26 FA FF: call 0x52848b
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x26
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 4A 26 FA FF: call 0x5284a4
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x26
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp - 64h], eax
        ; Exact mapped bytes 76 0B: jbe 0x585e6a
        __asm _emit 0x76
        __asm _emit 0x0b
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 3D 26 FA FF: call 0x5284a4
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x26
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 6ch]
        cmp ecx, dword ptr [ebp - 64h]
        sbb edx, edx
        and edx, 0fffffffeh
        add edx, 1
        mov dword ptr [ebp - 0d8h], edx
        cmp dword ptr [ebp - 6ch], 0ffffh
        ; Exact mapped bytes 75 0C: jne 0x585e93
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 378h], 0ffffh
        ; Exact mapped bytes EB 0F: jmp 0x585ea2
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 6ch]
        add eax, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 378h], eax
        mov ecx, dword ptr [ebp - 378h]
        mov dword ptr [ebp - 6ch], ecx
        push 0f043h
        lea ecx, [ebp - 0dch]
        ; Exact mapped bytes E8 C5 3D F5 FF: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x3d
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x585ed3
        __asm _emit 0x75
        __asm _emit 0x14
        push 10ch
        push 67d0d8h
        ; Exact mapped bytes E8 72 2E FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x2e
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x585ed3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x585eab
        __asm _emit 0x75
        __asm _emit 0xd2
        mov dword ptr [ebp - 60h], 0
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 3D: je 0x585f23
        __asm _emit 0x74
        __asm _emit 0x3d
        lea eax, [ebp - 48h]
        push eax
        lea ecx, [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 35ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes FF 90 E4 00 00 00: call dword ptr [eax + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 48h]
        push ecx
        lea edx, [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 35ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes FF 92 04 01 00 00: call dword ptr [edx + 0x104]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4E 01 00 00: jmp 0x586071
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 0C: jmp 0x585f37
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 34h]
        add ecx, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 34h]
        cmp edx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes 0F 84 2E 01 00 00: je 0x586071
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 48h]
        push eax
        lea ecx, [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 35ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes FF 90 E4 00 00 00: call dword ptr [eax + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 05: jne 0x585f6a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 07 01 00 00: jmp 0x586071
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        lea ecx, [ebp - 0dch]
        ; Exact mapped bytes E8 31 EE F9 FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xee
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 34ch]
        push edx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 34ch]
        push eax
        push 0cch
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 D8 00 F5 FF: call 0x4d6079
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0xf5
        __asm _emit 0xff
        push 0ah
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 C9 DE FA FF: call 0x533e74
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xde
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        push 8
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 BE DE FA FF: call 0x533e74
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xde
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        push 0
        push 0
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 92 C4 FA FF: call 0x532455
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0xfa
        __asm _emit 0xff
        lea ecx, [ebp - 24h]
        push ecx
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 CE E7 FA FF: call 0x53479d
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe7
        __asm _emit 0xfa
        __asm _emit 0xff
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 27 08 FB FF: call 0x5367fe
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x08
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7D 0C: jge 0x585fe7
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 60h], 1
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x586071
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 18 6E 68 00 00: cmp dword ptr [0x686e18], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1C: je 0x58600c
        __asm _emit 0x74
        __asm _emit 0x1c
        lea edx, [ebp - 48h]
        push edx
        lea eax, [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 35ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes FF 92 E4 00 00 00: call dword ptr [edx + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 14: jne 0x586026
        __asm _emit 0x75
        __asm _emit 0x14
        push 13ah
        push 67d0d8h
        ; Exact mapped bytes E8 1F 2D FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x2d
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x586026
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x58600c
        __asm _emit 0x75
        __asm _emit 0xe0
        lea ecx, [ebp - 48h]
        push ecx
        lea edx, [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 35ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes FF 92 04 01 00 00: call dword ptr [edx + 0x104]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 EF 07 FB FF: call 0x53683f
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x07
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x586063
        __asm _emit 0x7c
        __asm _emit 0x0f
        push 0
        mov eax, dword ptr [ebp - 58h]
        push eax
        ; Exact mapped bytes E8 41 F4 FF FF: call 0x5854a0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x58606c
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 60h], 1
        ; Exact mapped bytes EB 05: jmp 0x586071
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 BA FE FF FF: jmp 0x585f2b
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 75 18: jne 0x58608f
        __asm _emit 0x75
        __asm _emit 0x18
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 75 0A: jne 0x586087
        __asm _emit 0x75
        __asm _emit 0x0a
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 83 08 FB FF: call 0x536908
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 08: jmp 0x58608f
        __asm _emit 0xeb
        __asm _emit 0x08
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 38 08 FB FF: call 0x5368c7
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x08
        __asm _emit 0xfb
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes E8 DA BA FA FF: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xba
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FC 07 F5 FF: call 0x4d6899
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x07
        __asm _emit 0xf5
        __asm _emit 0xff
        lea ecx, [ebp - 48h]
        push ecx
        lea edx, [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 35ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes FF 92 08 01 00 00: call dword ptr [edx + 0x108]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 5E AC F4 FF: call 0x4d0d22
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xac
        __asm _emit 0xf4
        __asm _emit 0xff
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 31 FE F5 FF: call 0x4e5efd
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xf5
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0ch
        lea ecx, [ebp - 0dch]
        ; Exact mapped bytes E8 11 68 F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0bh
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 A6 02 00 00: call 0x586390
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 9
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 81 FE F5 FF: call 0x4e5f77
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xf5
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 EA 67 F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x67
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0f4h]
        ; Exact mapped bytes E8 DB 67 F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x67
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 CF 67 F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x67
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 3F 01 00 00: call 0x58626b
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
