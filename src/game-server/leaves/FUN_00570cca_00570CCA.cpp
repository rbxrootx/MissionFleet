// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570CCA .. +0x3AD bytes.
extern "C" __declspec(naked) void FUN_00570cca_00570CCA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58018fh
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
        sub esp, 4ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 58h], ecx
        push 13ch
        push 5d0930h
        mov eax, dword ptr [ebp - 58h]
        push eax
        ; Exact mapped bytes E8 62 A4 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xa4
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0
        push 14h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 4B F1 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf1
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x570d23
        __asm _emit 0x75
        __asm _emit 0x14
        push 13dh
        push 5d0930h
        ; Exact mapped bytes E8 E2 3C FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x570d23
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x570cfe
        __asm _emit 0x75
        __asm _emit 0xd5
        push 1
        push 0ch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 20 F1 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf1
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x570d4e
        __asm _emit 0x75
        __asm _emit 0x14
        push 13eh
        push 5d0930h
        ; Exact mapped bytes E8 B7 3C FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x570d4e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x570d29
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 14: je 0x570d70
        __asm _emit 0x74
        __asm _emit 0x14
        push 13fh
        push 5d0930h
        ; Exact mapped bytes E8 95 3C FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x570d70
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x570d54
        __asm _emit 0x75
        __asm _emit 0xde
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 14: je 0x570d93
        __asm _emit 0x74
        __asm _emit 0x14
        push 140h
        push 5d0930h
        ; Exact mapped bytes E8 72 3C FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x570d93
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x570d76
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        and ecx, 20h
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x570daf
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 07: je 0x570db6
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 AE 02 00 00: jmp 0x571064
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 52 77 00 00: call 0x578510
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 0
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 62 32 FC FF: call 0x534031
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x32
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1E: jne 0x570df1
        __asm _emit 0x75
        __asm _emit 0x1e
        mov dword ptr [ebp - 3ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 0B 78 00 00: call 0x5785f4
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E9 73 02 00 00: jmp 0x571064
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 C6 E4 FD FF: call 0x54f2c3
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 1E: jne 0x570e24
        __asm _emit 0x75
        __asm _emit 0x1e
        mov dword ptr [ebp - 40h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 D8 77 00 00: call 0x5785f4
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes E9 40 02 00 00: jmp 0x571064
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        push edx
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 87 77 00 00: call 0x5785b7
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 04 48 FC FF: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        mov dword ptr [ebp - 20h], eax
        push 0
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 54 77 00 00: call 0x5785b7
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        push eax
        ; Exact mapped bytes FF 15 60 20 5E 00: call dword ptr [0x5e2060]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 3D: jne 0x570eb0
        __asm _emit 0x75
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 78 E8 5D 00: mov ecx, dword ptr [0x5de878]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        and ecx, 10h
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x570e92
        __asm _emit 0x74
        __asm _emit 0x12
        push 5d093ch
        push 5d0968h
        ; Exact mapped bytes E8 86 ED F5 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xed
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 44h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 4C 77 00 00: call 0x5785f4
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        ; Exact mapped bytes E9 B4 01 00 00: jmp 0x571064
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 99 31 FC FF: call 0x534051
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x31
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 1E: jne 0x570edf
        __asm _emit 0x75
        __asm _emit 0x1e
        mov dword ptr [ebp - 48h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 1D 77 00 00: call 0x5785f4
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        ; Exact mapped bytes E9 85 01 00 00: jmp 0x571064
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        push 2002h
        ; Exact mapped bytes FF 15 84 23 5E 00: call dword ptr [0x5e2384]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 75 28: jne 0x570f1d
        __asm _emit 0x75
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 D4 21 5E 00: call dword ptr [0x5e21d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 DF 76 00 00: call 0x5785f4
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E9 47 01 00 00: jmp 0x571064
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        push eax
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 32: jne 0x570f62
        __asm _emit 0x75
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 D4 21 5E 00: call dword ptr [0x5e21d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes FF 15 B0 23 5E 00: call dword ptr [0x5e23b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 9A 76 00 00: call 0x5785f4
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        ; Exact mapped bytes E9 02 01 00 00: jmp 0x571064
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax], 8
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ch], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 44: jne 0x570fbe
        __asm _emit 0x75
        __asm _emit 0x44
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 3E: jne 0x570fbe
        __asm _emit 0x75
        __asm _emit 0x3e
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 58h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 75 24: jne 0x570fbe
        __asm _emit 0x75
        __asm _emit 0x24
        push 5d096ch
        push 5d099ch
        ; Exact mapped bytes E8 6C EC F5 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xec
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        push 5d09a0h
        push 5d09d0h
        ; Exact mapped bytes E8 5A EC F5 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xec
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 7D 20: jge 0x570ff9
        __asm _emit 0x7d
        __asm _emit 0x20
        push 5d09d4h
        push 5d0a04h
        ; Exact mapped bytes E8 2D EC F5 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xec
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 8]
        neg eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 09: je 0x57100b
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 24: jne 0x57102f
        __asm _emit 0x75
        __asm _emit 0x24
        push 5d0a08h
        push 5d0a38h
        ; Exact mapped bytes E8 FB EB F5 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xeb
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        push 5d0a3ch
        push 5d0a6ch
        ; Exact mapped bytes E8 E9 EB F5 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        ; Exact mapped bytes FF 15 AC 23 5E 00: call dword ptr [0x5e23ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 20h
        mov dword ptr [ebp - 54h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 93 75 00 00: call 0x5785f4
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
