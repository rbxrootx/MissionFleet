// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046CE60 .. +0x390 bytes.
extern "C" __declspec(naked) void FUN_0046ce60_0046CE60() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 302ch
        ; Exact mapped bytes E8 33 91 FF FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        mov byte ptr [ebp - 3008h], 0
        mov ecx, 3ffh
        xor eax, eax
        lea edi, [ebp - 3007h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        mov byte ptr [ebp - 2008h], 0
        mov ecx, 3ffh
        xor eax, eax
        lea edi, [ebp - 2007h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        mov byte ptr [ebp - 1000h], 0
        mov ecx, 3ffh
        xor eax, eax
        lea edi, [ebp - 0fffh]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        lea eax, [ebp + 1ch]
        mov dword ptr [ebp - 1004h], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 06: jl 0x46cece
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 7C 08: jl 0x46ced6
        __asm _emit 0x7c
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 15 03 00 00: jmp 0x46d1eb
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x46cf80
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 67dc4ch
        ; Exact mapped bytes FF 15 24 BA 68 00: call dword ptr [0x68ba24]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E 8D 00 00 00: jle 0x46cf80
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D C0 72 68 00 00: cmp dword ptr [0x6872c0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 42: jne 0x46cf3e
        __asm _emit 0x75
        __asm _emit 0x42
        push 63eb48h
        ; Exact mapped bytes FF 15 18 B8 68 00: call dword ptr [0x68b818]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 300ch], eax
        cmp dword ptr [ebp - 300ch], 0
        ; Exact mapped bytes 74 20: je 0x46cf36
        __asm _emit 0x74
        __asm _emit 0x20
        push 63eb3ch
        mov ecx, dword ptr [ebp - 300ch]
        push ecx
        ; Exact mapped bytes FF 15 14 B8 68 00: call dword ptr [0x68b814]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 C0 72 68 00: mov dword ptr [0x6872c0], eax
        __asm _emit 0xa3
        __asm _emit 0xc0
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D C0 72 68 00 00: cmp dword ptr [0x6872c0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x46cf3e
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 AD 02 00 00: jmp 0x46d1eb
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 63eb08h
        lea ecx, [ebp - 2008h]
        push ecx
        ; Exact mapped bytes FF 15 C0 72 68 00: call dword ptr [0x6872c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 10h
        lea edx, [ebp - 2008h]
        push edx
        ; Exact mapped bytes FF 15 00 B8 68 00: call dword ptr [0x68b800]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        push 67dc4ch
        ; Exact mapped bytes FF 15 20 BA 68 00: call dword ptr [0x68ba20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 D8 FD FF FF: call 0x46cd50
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 6B 02 00 00: jmp 0x46d1eb
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 37: je 0x46cfbd
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 1004h]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        push 0fedh
        lea edx, [ebp - 1000h]
        push edx
        ; Exact mapped bytes E8 2E BB FF FF: call 0x468ad0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 7D 14: jge 0x46cfbd
        __asm _emit 0x7d
        __asm _emit 0x14
        push 63eadch
        lea eax, [ebp - 1000h]
        push eax
        ; Exact mapped bytes E8 B6 89 FF FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 32: jne 0x46cff5
        __asm _emit 0x75
        __asm _emit 0x32
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 0C: je 0x46cfd5
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 3028h], 63eac8h
        ; Exact mapped bytes EB 0A: jmp 0x46cfdf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3028h], 63eab4h
        mov ecx, dword ptr [ebp - 3028h]
        push ecx
        lea edx, [ebp - 3008h]
        push edx
        ; Exact mapped bytes E8 7E 89 FF FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 1000h]
        push eax
        lea ecx, [ebp - 3008h]
        push ecx
        ; Exact mapped bytes E8 78 89 FF FF: call 0x465980
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 39: jne 0x46d04a
        __asm _emit 0x75
        __asm _emit 0x39
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx*4 + 67dc50h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x46d036
        __asm _emit 0x74
        __asm _emit 0x14
        push 63eab0h
        lea ecx, [ebp - 3008h]
        push ecx
        ; Exact mapped bytes E8 4D 89 FF FF: call 0x465980
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push 6333d0h
        lea edx, [ebp - 3008h]
        push edx
        ; Exact mapped bytes E8 39 89 FF FF: call 0x465980
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 42: je 0x46d092
        __asm _emit 0x74
        __asm _emit 0x42
        lea eax, [ebp - 3008h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 63eaa4h
        push 1000h
        lea eax, [ebp - 2008h]
        push eax
        ; Exact mapped bytes E8 8B BB 00 00: call 0x478c00
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 7D 14: jge 0x46d090
        __asm _emit 0x7d
        __asm _emit 0x14
        push 63eadch
        lea ecx, [ebp - 2008h]
        push ecx
        ; Exact mapped bytes E8 E3 88 FF FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 16: jmp 0x46d0a8
        __asm _emit 0xeb
        __asm _emit 0x16
        lea edx, [ebp - 3008h]
        push edx
        lea eax, [ebp - 2008h]
        push eax
        ; Exact mapped bytes E8 CB 88 FF FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes 83 3D E0 8A 68 00 00: cmp dword ptr [0x688ae0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 3B: je 0x46d0ec
        __asm _emit 0x74
        __asm _emit 0x3b
        lea ecx, [ebp - 1008h]
        push ecx
        lea edx, [ebp - 2008h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 E0 8A 68 00: call dword ptr [0x688ae0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x46d0ec
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 0B: jne 0x46d0e1
        __asm _emit 0x75
        __asm _emit 0x0b
        push 67dc4ch
        ; Exact mapped bytes FF 15 20 BA 68 00: call dword ptr [0x68ba20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1008h]
        ; Exact mapped bytes E9 FF 00 00 00: jmp 0x46d1eb
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx*4 + 67dc50h]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 3E: je 0x46d13b
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax*4 + 67dc5ch], -1
        ; Exact mapped bytes 74 31: je 0x46d13b
        __asm _emit 0x74
        __asm _emit 0x31
        push 0
        lea ecx, [ebp - 3010h]
        push ecx
        lea edx, [ebp - 2008h]
        push edx
        ; Exact mapped bytes E8 21 86 FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 2008h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx*4 + 67dc5ch]
        push edx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 67dc50h]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x46d159
        __asm _emit 0x74
        __asm _emit 0x0d
        lea edx, [ebp - 2008h]
        push edx
        ; Exact mapped bytes FF 15 00 B8 68 00: call dword ptr [0x68b800]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 67dc50h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 6E: je 0x46d1d8
        __asm _emit 0x74
        __asm _emit 0x6e
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1D: je 0x46d18d
        __asm _emit 0x74
        __asm _emit 0x1d
        push 0ah
        lea edx, [ebp - 3024h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 2E 07 00 00: call 0x46d8b0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 302ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x46d197
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 302ch], 0
        lea ecx, [ebp - 1000h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 302ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 3A 00 00 00: call 0x46d1f0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov dword ptr [ebp - 1008h], eax
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 0B: jne 0x46d1d0
        __asm _emit 0x75
        __asm _emit 0x0b
        push 67dc4ch
        ; Exact mapped bytes FF 15 20 BA 68 00: call dword ptr [0x68ba20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1008h]
        ; Exact mapped bytes EB 13: jmp 0x46d1eb
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 0B: jne 0x46d1e9
        __asm _emit 0x75
        __asm _emit 0x0b
        push 67dc4ch
        ; Exact mapped bytes FF 15 20 BA 68 00: call dword ptr [0x68ba20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        pop edi
        mov esp, ebp
        pop ebp
        ret
    }
}
