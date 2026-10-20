// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F88C0 .. +0x1449 bytes.
extern "C" __declspec(naked) void FUN_586f88c0_586F88C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1c4h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 C8 0D 00 00: je 0x586f969e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 364h]
        mov dword ptr [ebp - 0e0h], ecx
        ; Exact mapped bytes 83 3D B8 35 90 58 00: cmp dword ptr [0x589035b8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f88f7
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 5
        ; Exact mapped bytes EB 07: jmp 0x586f88fe
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 1
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 33 6F DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x6f
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 0e4h], ecx
        ; Exact mapped bytes 83 3D BC 35 90 58 00: cmp dword ptr [0x589035bc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f892e
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 5
        ; Exact mapped bytes EB 07: jmp 0x586f8935
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 1
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 FC 6E DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x6e
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 0e8h], ecx
        ; Exact mapped bytes 83 3D C0 35 90 58 00: cmp dword ptr [0x589035c0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f8965
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 5
        ; Exact mapped bytes EB 07: jmp 0x586f896c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 1
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 C5 6E DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x6e
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 0ech], ecx
        ; Exact mapped bytes 81 3D 64 20 96 58 60 F0 FF FF: cmp dword ptr [0x58962064], 0xfffff060
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x60
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 7C 09: jl 0x586f899f
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 5
        ; Exact mapped bytes EB 07: jmp 0x586f89a6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 1
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 8B 6E DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6e
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 0f0h], ecx
        ; Exact mapped bytes 83 3D C4 35 90 58 00: cmp dword ptr [0x589035c4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f89d6
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 5
        ; Exact mapped bytes EB 07: jmp 0x586f89dd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 1
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 54 6E DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x6e
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 0f4h], ecx
        ; Exact mapped bytes 83 3D C8 35 90 58 00: cmp dword ptr [0x589035c8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f8a0d
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 5
        ; Exact mapped bytes EB 07: jmp 0x586f8a14
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 1
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 1D 6E DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x6e
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 0f8h], ecx
        ; Exact mapped bytes 83 3D CC 35 90 58 00: cmp dword ptr [0x589035cc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f8a44
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 5
        ; Exact mapped bytes EB 07: jmp 0x586f8a4b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 1
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 E6 6D DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x6d
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 0fch], ecx
        ; Exact mapped bytes 83 3D D0 35 90 58 00: cmp dword ptr [0x589035d0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f8a7b
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 5
        ; Exact mapped bytes EB 07: jmp 0x586f8a82
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 1
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 AF 6D DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x6d
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 100h], ecx
        ; Exact mapped bytes 83 3D D4 35 90 58 00: cmp dword ptr [0x589035d4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f8ab2
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 34h], 5
        ; Exact mapped bytes EB 07: jmp 0x586f8ab9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 1
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 78 6D DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x6d
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 104h], ecx
        ; Exact mapped bytes 83 3D D8 35 90 58 00: cmp dword ptr [0x589035d8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f8ae9
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 5
        ; Exact mapped bytes EB 07: jmp 0x586f8af0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 1
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 41 6D DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x6d
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 120h]
        mov dword ptr [ebp - 108h], ecx
        ; Exact mapped bytes 83 3D E0 35 90 58 00: cmp dword ptr [0x589035e0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f8b20
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 5
        ; Exact mapped bytes EB 07: jmp 0x586f8b27
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 1
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 0A 6D DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x6d
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 124h]
        mov dword ptr [ebp - 10ch], ecx
        ; Exact mapped bytes 83 3D E4 35 90 58 00: cmp dword ptr [0x589035e4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f8b57
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 40h], 5
        ; Exact mapped bytes EB 07: jmp 0x586f8b5e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 1
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 D3 6C DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x6c
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c8h]
        mov dword ptr [ebp - 110h], ecx
        ; Exact mapped bytes 83 3D DC 35 90 58 00: cmp dword ptr [0x589035dc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f8b8e
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 44h], 5
        ; Exact mapped bytes EB 07: jmp 0x586f8b95
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 1
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 9C 6C DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x6c
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 128h]
        mov dword ptr [ebp - 114h], ecx
        ; Exact mapped bytes 83 3D 78 20 96 58 00: cmp dword ptr [0x58962078], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f8bc5
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 48h], 5
        ; Exact mapped bytes EB 07: jmp 0x586f8bcc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 1
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 65 6C DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x6c
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12ch]
        mov dword ptr [ebp - 118h], ecx
        ; Exact mapped bytes 83 3D E8 35 90 58 00: cmp dword ptr [0x589035e8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f8bfc
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4ch], 5
        ; Exact mapped bytes EB 07: jmp 0x586f8c03
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 1
        mov edx, dword ptr [ebp - 4ch]
        push edx
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 2E 6C DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x6c
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 130h]
        mov dword ptr [ebp - 11ch], ecx
        ; Exact mapped bytes 83 3D 7C 20 96 58 00: cmp dword ptr [0x5896207c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x7c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f8c33
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 50h], 5
        ; Exact mapped bytes EB 07: jmp 0x586f8c3a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 1
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 F7 6B DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x6b
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 138h]
        mov dword ptr [ebp - 120h], ecx
        ; Exact mapped bytes 83 3D F0 35 90 58 00: cmp dword ptr [0x589035f0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f8c6a
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 54h], 5
        ; Exact mapped bytes EB 07: jmp 0x586f8c71
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 1
        mov edx, dword ptr [ebp - 54h]
        push edx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 C0 6B DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x6b
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0cch]
        mov dword ptr [ebp - 124h], ecx
        ; Exact mapped bytes 83 3D 94 20 96 58 19: cmp dword ptr [0x58962094], 0x19
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x19
        ; Exact mapped bytes 7F 09: jg 0x586f8ca1
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 58h], 5
        ; Exact mapped bytes EB 07: jmp 0x586f8ca8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 1
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 89 6B DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x6b
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 128h], ecx
        ; Exact mapped bytes 83 3D 90 20 96 58 19: cmp dword ptr [0x58962090], 0x19
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x19
        ; Exact mapped bytes 7F 09: jg 0x586f8cd8
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 5ch], 5
        ; Exact mapped bytes EB 07: jmp 0x586f8cdf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 1
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 52 6B DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x6b
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 13ch]
        mov dword ptr [ebp - 12ch], ecx
        ; Exact mapped bytes 83 3D 80 20 96 58 00: cmp dword ptr [0x58962080], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f8d0f
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 60h], 5
        ; Exact mapped bytes EB 07: jmp 0x586f8d16
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 1
        mov edx, dword ptr [ebp - 60h]
        push edx
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 1B 6B DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x6b
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 140h]
        mov dword ptr [ebp - 130h], ecx
        ; Exact mapped bytes 83 3D 84 20 96 58 00: cmp dword ptr [0x58962084], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f8d46
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 64h], 5
        ; Exact mapped bytes EB 07: jmp 0x586f8d4d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 1
        mov edx, dword ptr [ebp - 64h]
        push edx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 E4 6A DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x6a
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 144h]
        mov dword ptr [ebp - 134h], ecx
        ; Exact mapped bytes 83 3D 88 20 96 58 00: cmp dword ptr [0x58962088], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f8d7d
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 68h], 5
        ; Exact mapped bytes EB 07: jmp 0x586f8d84
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 1
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 AD 6A DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x6a
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 148h]
        mov dword ptr [ebp - 138h], ecx
        ; Exact mapped bytes 83 3D 8C 20 96 58 00: cmp dword ptr [0x5896208c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f8db4
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 6ch], 5
        ; Exact mapped bytes EB 07: jmp 0x586f8dbb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 1
        mov edx, dword ptr [ebp - 6ch]
        push edx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 76 6A DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x6a
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14ch]
        mov dword ptr [ebp - 13ch], ecx
        ; Exact mapped bytes 83 3D EC 35 90 58 00: cmp dword ptr [0x589035ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f8deb
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 70h], 5
        ; Exact mapped bytes EB 07: jmp 0x586f8df2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 1
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 3F 6A DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x6a
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 134h]
        mov dword ptr [ebp - 140h], ecx
        ; Exact mapped bytes 83 3D 74 20 96 58 00: cmp dword ptr [0x58962074], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x586f8e22
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 74h], 5
        ; Exact mapped bytes EB 07: jmp 0x586f8e29
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 1
        mov edx, dword ptr [ebp - 74h]
        push edx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 08 6A DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x6a
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D F4 35 90 58 00: cmp dword ptr [0x589035f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 3B: jne 0x586f8e7d
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 110h]
        mov dword ptr [ebp - 144h], ecx
        push 5
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 E2 69 DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x69
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 114h]
        mov dword ptr [ebp - 148h], eax
        push 1
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 C6 69 DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x69
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 42: jmp 0x586f8ebf
        __asm _emit 0xeb
        __asm _emit 0x42
        ; Exact mapped bytes 83 3D F4 35 90 58 01: cmp dword ptr [0x589035f4], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 75 39: jne 0x586f8ebf
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 110h]
        mov dword ptr [ebp - 14ch], edx
        push 1
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 9E 69 DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x69
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 114h]
        mov dword ptr [ebp - 150h], ecx
        push 5
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 82 69 DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x69
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 1c4h], 0ah
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 E9 BA D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 0F 85 B1 01 00 00: jne 0x586f9091
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 81 3D 64 20 96 58 70 FE FF FF: cmp dword ptr [0x58962064], 0xfffffe70
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 7E 22: jle 0x586f8f15
        __asm _emit 0x7e
        __asm _emit 0x22
        mov dword ptr [ebp - 8], 5fh
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 0
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x586f8fe1
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 3D 64 20 96 58 50 FB FF FF: cmp dword ptr [0x58962064], 0xfffffb50
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x50
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 7E 22: jle 0x586f8f43
        __asm _emit 0x7e
        __asm _emit 0x22
        mov dword ptr [ebp - 8], 4ch
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 0fffffce0h
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x586f8fe1
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 3D 64 20 96 58 30 F8 FF FF: cmp dword ptr [0x58962064], 0xfffff830
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x30
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 7E 1F: jle 0x586f8f6e
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov dword ptr [ebp - 8], 39h
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 0fffff9c0h
        ; Exact mapped bytes EB 73: jmp 0x586f8fe1
        __asm _emit 0xeb
        __asm _emit 0x73
        ; Exact mapped bytes 81 3D 64 20 96 58 10 F5 FF FF: cmp dword ptr [0x58962064], 0xfffff510
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 7E 1F: jle 0x586f8f99
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov dword ptr [ebp - 8], 26h
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 0fffff6a0h
        ; Exact mapped bytes EB 48: jmp 0x586f8fe1
        __asm _emit 0xeb
        __asm _emit 0x48
        ; Exact mapped bytes 81 3D 64 20 96 58 F0 F1 FF FF: cmp dword ptr [0x58962064], 0xfffff1f0
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0xf0
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 7E 1F: jle 0x586f8fc4
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov dword ptr [ebp - 8], 13h
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 0fffff380h
        ; Exact mapped bytes EB 1D: jmp 0x586f8fe1
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov dword ptr [ebp - 8], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 0fffff060h
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 0e0h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 158h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0d4h]
        ; Exact mapped bytes E8 A5 D9 D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd9
        __asm _emit 0xd8
        __asm _emit 0xff
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 154h], eax
        mov ecx, dword ptr [ebp - 154h]
        push ecx
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 7A C6 0B 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xc6
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0e0h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 160h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0d4h]
        ; Exact mapped bytes E8 50 D9 D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xd9
        __asm _emit 0xd8
        __asm _emit 0xff
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 15ch], eax
        mov edx, dword ptr [ebp - 15ch]
        push edx
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 25 C6 0B 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc6
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 BB 00 00 00: jmp 0x586f914c
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 0ffffd8f0h
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 0e0h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 168h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0d4h]
        ; Exact mapped bytes E8 DF D8 D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd8
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        mov ecx, dword ptr [ebp - 164h]
        push ecx
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 B7 C5 0B 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xc5
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0e0h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 170h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0d4h]
        ; Exact mapped bytes E8 8D D8 D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        mov edx, dword ptr [ebp - 16ch]
        push edx
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 65 C5 0B 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xc5
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0cch]
        ; Exact mapped bytes E8 66 B8 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb8
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 0F 85 F8 01 00 00: jne 0x586f935b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 8B 0D 94 20 96 58: mov ecx, dword ptr [0x58962094]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 9
        ; Exact mapped bytes 7F 25: jg 0x586f919e
        __asm _emit 0x7f
        __asm _emit 0x25
        cmp dword ptr [ebp - 0ch], 9
        ; Exact mapped bytes 74 7A: je 0x586f91f9
        __asm _emit 0x74
        __asm _emit 0x7a
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 CD 00 00 00: je 0x586f9256
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x586f9237
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 74 7F: je 0x586f9218
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x586f9256
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 10h
        ; Exact mapped bytes 74 36: je 0x586f91da
        __asm _emit 0x74
        __asm _emit 0x36
        cmp dword ptr [ebp - 0ch], 19h
        ; Exact mapped bytes 74 0E: je 0x586f91b8
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 0ch], 3e8h
        ; Exact mapped bytes 74 05: je 0x586f91b8
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x586f9256
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 0f8h], 19h
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x586f9273
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 13h
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 10h
        ; Exact mapped bytes EB 7A: jmp 0x586f9273
        __asm _emit 0xeb
        __asm _emit 0x7a
        mov dword ptr [ebp - 8], 26h
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 0f8h], 9
        ; Exact mapped bytes EB 5B: jmp 0x586f9273
        __asm _emit 0xeb
        __asm _emit 0x5b
        mov dword ptr [ebp - 8], 39h
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 0f8h], 4
        ; Exact mapped bytes EB 3C: jmp 0x586f9273
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov dword ptr [ebp - 8], 4ch
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 1
        ; Exact mapped bytes EB 1D: jmp 0x586f9273
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov dword ptr [ebp - 8], 5fh
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 0f8h], 0
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0e0h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 178h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0d4h]
        ; Exact mapped bytes E8 13 D7 D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd7
        __asm _emit 0xd8
        __asm _emit 0xff
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 174h], eax
        mov ecx, dword ptr [ebp - 174h]
        push ecx
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 E8 C3 0B 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0e0h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 180h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0d4h]
        ; Exact mapped bytes E8 BE D6 D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xd6
        __asm _emit 0xd8
        __asm _emit 0xff
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 17ch], eax
        mov eax, dword ptr [ebp - 17ch]
        push eax
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 93 C3 0B 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xc3
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 110h]
        mov dword ptr [ebp - 184h], edx
        push 1
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 A7 CA D8 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xca
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 114h]
        mov dword ptr [ebp - 188h], ecx
        push 1
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 8B CA D8 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xca
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 BB 00 00 00: jmp 0x586f9416
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 0f8h], 3e8h
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 0e0h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 190h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0d4h]
        ; Exact mapped bytes E8 15 D6 D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xd6
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 18ch], eax
        mov eax, dword ptr [ebp - 18ch]
        push eax
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 ED C2 0B 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xc2
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 0e0h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 198h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0d4h]
        ; Exact mapped bytes E8 C3 D5 D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xd5
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        mov edx, dword ptr [ebp - 194h]
        push edx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 9B C2 0B 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xc2
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        ; Exact mapped bytes E8 9C B5 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xb5
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 0F 85 B6 01 00 00: jne 0x586f95e3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 9
        ; Exact mapped bytes 7F 25: jg 0x586f9468
        __asm _emit 0x7f
        __asm _emit 0x25
        cmp dword ptr [ebp - 10h], 9
        ; Exact mapped bytes 74 78: je 0x586f94c1
        __asm _emit 0x74
        __asm _emit 0x78
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x586f951b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x586f94fd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 74 7C: je 0x586f94df
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes E9 B3 00 00 00: jmp 0x586f951b
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 10h
        ; Exact mapped bytes 74 35: je 0x586f94a3
        __asm _emit 0x74
        __asm _emit 0x35
        cmp dword ptr [ebp - 10h], 19h
        ; Exact mapped bytes 74 0E: je 0x586f9482
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 10h], 3e8h
        ; Exact mapped bytes 74 05: je 0x586f9482
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x586f951b
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 0f8h], 19h
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x586f9537
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 13h
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 10h
        ; Exact mapped bytes EB 76: jmp 0x586f9537
        __asm _emit 0xeb
        __asm _emit 0x76
        mov dword ptr [ebp - 8], 26h
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 0f8h], 9
        ; Exact mapped bytes EB 58: jmp 0x586f9537
        __asm _emit 0xeb
        __asm _emit 0x58
        mov dword ptr [ebp - 8], 39h
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 0f8h], 4
        ; Exact mapped bytes EB 3A: jmp 0x586f9537
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov dword ptr [ebp - 8], 4ch
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 1
        ; Exact mapped bytes EB 1C: jmp 0x586f9537
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov dword ptr [ebp - 8], 5fh
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 0f8h], 0
        mov edx, 8
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0e0h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 1a0h], ecx
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0d4h]
        ; Exact mapped bytes E8 51 D4 D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd4
        __asm _emit 0xd8
        __asm _emit 0xff
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 19ch], eax
        mov ecx, dword ptr [ebp - 19ch]
        push ecx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 26 C1 0B 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xc1
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, 8
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0e0h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 1a8h], eax
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0d4h]
        ; Exact mapped bytes E8 FE D3 D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd3
        __asm _emit 0xd8
        __asm _emit 0xff
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 1a4h], eax
        mov eax, dword ptr [ebp - 1a4h]
        push eax
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 D3 C0 0B 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xc0
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x586f9699
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 3e8h
        mov eax, 8
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0e0h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 1b0h], edx
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0d4h]
        ; Exact mapped bytes E8 90 D3 D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xd3
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        mov edx, dword ptr [ebp - 1ach]
        push edx
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 68 C0 0B 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, 8
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0e0h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 1b8h], ecx
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0d4h]
        ; Exact mapped bytes E8 40 D3 D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xd3
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 1b4h], eax
        mov ecx, dword ptr [ebp - 1b4h]
        push ecx
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 18 C0 0B 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xc0
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 65 06 00 00: jmp 0x586f9d03
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 364h]
        ; Exact mapped bytes E8 14 B3 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xb3
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 09: jne 0x586f96ba
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 1
        ; Exact mapped bytes EB 07: jmp 0x586f96c1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov eax, dword ptr [ebp - 78h]
        ; Exact mapped bytes A3 B8 35 90 58: mov dword ptr [0x589035b8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0a4h]
        ; Exact mapped bytes E8 E9 B2 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 09: jne 0x586f96e5
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 7ch], 1
        ; Exact mapped bytes EB 07: jmp 0x586f96ec
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov edx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 15 BC 35 90 58: mov dword ptr [0x589035bc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        ; Exact mapped bytes E8 BD B2 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xb2
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 09: jne 0x586f9711
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 80h], 1
        ; Exact mapped bytes EB 07: jmp 0x586f9718
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes 89 0D C0 35 90 58: mov dword ptr [0x589035c0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 91 B2 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xb2
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f9740
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 84h], 1
        ; Exact mapped bytes EB 0A: jmp 0x586f974a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ecx + 58947974h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes E8 54 B2 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb2
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 1A: jne 0x586f978b
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 88h], ecx
        ; Exact mapped bytes EB 0A: jmp 0x586f9795
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0ffffd8f0h
        mov edx, dword ptr [ebp - 88h]
        ; Exact mapped bytes 89 15 64 20 96 58: mov dword ptr [0x58962064], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, 4
        imul ecx, eax, 0
        cmp dword ptr [ecx + 58947974h], 0
        ; Exact mapped bytes 74 4E: je 0x586f9800
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 83 3D F8 1F 96 58 00: cmp dword ptr [0x58961ff8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x586f97fe
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 F8 1F 96 58: mov edx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 1bch], ecx
        ; Exact mapped bytes 8B 15 64 20 96 58: mov edx, dword ptr [0x58962064]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D F8 1F 96 58: mov ecx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 95 44 FE FF FF: call dword ptr [ebp - 0x1bc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 F8 1F 96 58: mov eax, dword ptr [0x58961ff8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 1c0h], edx
        push 1
        ; Exact mapped bytes 8B 0D F8 1F 96 58: mov ecx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 95 40 FE FF FF: call dword ptr [ebp - 0x1c0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x586f981c
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes 83 3D F8 1F 96 58 00: cmp dword ptr [0x58961ff8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 13: je 0x586f981c
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes A1 F8 1F 96 58: mov eax, dword ptr [0x58961ff8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D F8 1F 96 58: mov ecx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0b0h]
        ; Exact mapped bytes E8 96 B1 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb1
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f983b
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 8ch], 1
        ; Exact mapped bytes EB 0A: jmp 0x586f9845
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov edx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes 89 15 C4 35 90 58: mov dword ptr [0x589035c4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        ; Exact mapped bytes E8 61 B1 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xb1
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f9870
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 90h], 1
        ; Exact mapped bytes EB 0A: jmp 0x586f987a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes 89 0D C8 35 90 58: mov dword ptr [0x589035c8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0b8h]
        ; Exact mapped bytes E8 2C B1 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb1
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f98a5
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 94h], 1
        ; Exact mapped bytes EB 0A: jmp 0x586f98af
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov eax, dword ptr [ebp - 94h]
        ; Exact mapped bytes A3 CC 35 90 58: mov dword ptr [0x589035cc], eax
        __asm _emit 0xa3
        __asm _emit 0xcc
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0bch]
        ; Exact mapped bytes E8 F8 B0 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb0
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f98d9
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 98h], 1
        ; Exact mapped bytes EB 0A: jmp 0x586f98e3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov edx, dword ptr [ebp - 98h]
        ; Exact mapped bytes 89 15 D0 35 90 58: mov dword ptr [0x589035d0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        ; Exact mapped bytes E8 C3 B0 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xb0
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f990e
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 9ch], 1
        ; Exact mapped bytes EB 0A: jmp 0x586f9918
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes 89 0D D4 35 90 58: mov dword ptr [0x589035d4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c4h]
        ; Exact mapped bytes E8 8E B0 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xb0
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f9943
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0a0h], 1
        ; Exact mapped bytes EB 0A: jmp 0x586f994d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov eax, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes A3 D8 35 90 58: mov dword ptr [0x589035d8], eax
        __asm _emit 0xa3
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 120h]
        ; Exact mapped bytes E8 5A B0 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb0
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f9977
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0a4h], 1
        ; Exact mapped bytes EB 0A: jmp 0x586f9981
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov edx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes 89 15 E0 35 90 58: mov dword ptr [0x589035e0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 124h]
        ; Exact mapped bytes E8 25 B0 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xb0
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f99ac
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0a8h], 1
        ; Exact mapped bytes EB 0A: jmp 0x586f99b6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes 89 0D E4 35 90 58: mov dword ptr [0x589035e4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c8h]
        ; Exact mapped bytes E8 F0 AF D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xaf
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f99e1
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0ach], 1
        ; Exact mapped bytes EB 0A: jmp 0x586f99eb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov eax, dword ptr [ebp - 0ach]
        ; Exact mapped bytes A3 DC 35 90 58: mov dword ptr [0x589035dc], eax
        __asm _emit 0xa3
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 10 06 96 58: cmp ecx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 23: jne 0x586f9a27
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 BF D9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xbf
        __asm _emit 0xd9
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 75 13: jne 0x586f9a27
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 15 DC 35 90 58: mov edx, dword ptr [0x589035dc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA BC EE FF: call 0x585e56d0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xbc
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 128h]
        ; Exact mapped bytes E8 8B AF D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xaf
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f9a46
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0b0h], 1
        ; Exact mapped bytes EB 0A: jmp 0x586f9a50
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes 89 0D 78 20 96 58: mov dword ptr [0x58962078], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 12ch]
        ; Exact mapped bytes E8 56 AF D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xaf
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f9a7b
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0b4h], 1
        ; Exact mapped bytes EB 0A: jmp 0x586f9a85
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov eax, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes A3 E8 35 90 58: mov dword ptr [0x589035e8], eax
        __asm _emit 0xa3
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 130h]
        ; Exact mapped bytes E8 22 AF D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xaf
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f9aaf
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0b8h], 1
        ; Exact mapped bytes EB 0A: jmp 0x586f9ab9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov edx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 89 15 7C 20 96 58: mov dword ptr [0x5896207c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 138h]
        ; Exact mapped bytes E8 ED AE D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xae
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f9ae4
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0bch], 1
        ; Exact mapped bytes EB 0A: jmp 0x586f9aee
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes 89 0D F0 35 90 58: mov dword ptr [0x589035f0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0cch]
        ; Exact mapped bytes E8 B8 AE D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xae
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 1A: jne 0x586f9b27
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0f8h]
        mov dword ptr [ebp - 0c0h], edx
        ; Exact mapped bytes EB 0A: jmp 0x586f9b31
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 3e8h
        mov eax, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes A3 94 20 96 58: mov dword ptr [0x58962094], eax
        __asm _emit 0xa3
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0d0h]
        ; Exact mapped bytes E8 76 AE D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xae
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 19: jne 0x586f9b68
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 0c4h], ecx
        ; Exact mapped bytes EB 0A: jmp 0x586f9b72
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 3e8h
        mov edx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes 89 15 90 20 96 58: mov dword ptr [0x58962090], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 134h]
        ; Exact mapped bytes E8 34 AE D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xae
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f9b9d
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0c8h], 1
        ; Exact mapped bytes EB 0A: jmp 0x586f9ba7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes 89 0D 74 20 96 58: mov dword ptr [0x58962074], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 110h]
        ; Exact mapped bytes E8 FF AD D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xad
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f9bd2
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 F4 35 90 58 00 00 00 00: mov dword ptr [0x589035f4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 29: jmp 0x586f9bfb
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 E0 AD D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xad
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f9bf1
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 F4 35 90 58 01 00 00 00: mov dword ptr [0x589035f4], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x586f9bfb
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 F4 35 90 58 02 00 00 00: mov dword ptr [0x589035f4], 2
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 13ch]
        ; Exact mapped bytes E8 B7 AD D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xad
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f9c1a
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0cch], 1
        ; Exact mapped bytes EB 0A: jmp 0x586f9c24
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov edx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes 89 15 80 20 96 58: mov dword ptr [0x58962080], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 140h]
        ; Exact mapped bytes E8 82 AD D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xad
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f9c4f
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0d0h], 1
        ; Exact mapped bytes EB 0A: jmp 0x586f9c59
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes 89 0D 84 20 96 58: mov dword ptr [0x58962084], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 144h]
        ; Exact mapped bytes E8 4D AD D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xad
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f9c84
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0d4h], 1
        ; Exact mapped bytes EB 0A: jmp 0x586f9c8e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov eax, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes A3 88 20 96 58: mov dword ptr [0x58962088], eax
        __asm _emit 0xa3
        __asm _emit 0x88
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 148h]
        ; Exact mapped bytes E8 19 AD D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xad
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f9cb8
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0d8h], 1
        ; Exact mapped bytes EB 0A: jmp 0x586f9cc2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        mov edx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes 89 15 8C 20 96 58: mov dword ptr [0x5896208c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14ch]
        ; Exact mapped bytes E8 E4 AC D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xac
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 75 0C: jne 0x586f9ced
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0dch], 1
        ; Exact mapped bytes EB 0A: jmp 0x586f9cf7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes 89 0D EC 35 90 58: mov dword ptr [0x589035ec], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
