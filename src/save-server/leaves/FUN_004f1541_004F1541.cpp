// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F1541 .. +0x2D8 bytes.
extern "C" __declspec(naked) void FUN_004f1541_004F1541() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e7ach
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
        sub esp, 50h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 3ch], ecx
        mov eax, dword ptr [ebp - 3ch]
        add eax, 0ch
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A9 AF FD FF: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xaf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 D1 CC FE FF: call 0x4de251
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, 10h
        ; Exact mapped bytes E8 01 38 03 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 63 02 00 00: jne 0x4f17f6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 57 37 03 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes 83 3D 08 6E 68 00 00: cmp dword ptr [0x686e08], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 BF 01 00 00: jne 0x4f1780
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 67837ch
        ; Exact mapped bytes FF 15 FC B7 68 00: call dword ptr [0x68b7fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 14: jne 0x4f15e9
        __asm _emit 0x75
        __asm _emit 0x14
        push 265h
        push 678234h
        ; Exact mapped bytes E8 5C 77 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x77
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f15e9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4f15cf
        __asm _emit 0x75
        __asm _emit 0xe0
        push 678388h
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 14 B8 68 00: call dword ptr [0x68b814]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 75 01 00 00: je 0x4f1780
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 30h], 0
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, 10h
        ; Exact mapped bytes E8 76 37 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 E2 FA FF FF: call 0x4f1120
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 44h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 44h]
        push edx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 8C B4 FD FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 86 B2 FD FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xb2
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 3C 37 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 09: jne 0x4f1680
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 36: jmp 0x4f16b6
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 01 49 F7 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x49
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], esp
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        ; Exact mapped bytes E8 3D BF F5 FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xbf
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, 10h
        ; Exact mapped bytes E8 E9 36 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 09: jne 0x4f16d3
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes EB 36: jmp 0x4f1709
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 AE 48 F7 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x48
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], esp
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        ; Exact mapped bytes E8 EA BE F5 FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xbe
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 99 36 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 09: jne 0x4f1723
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 36: jmp 0x4f1759
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 5E 48 F7 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x48
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], esp
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        ; Exact mapped bytes E8 9A BE F5 FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xbe
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        push 0
        push 0
        push 3
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 09: jne 0x4f1780
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 50: jne 0x4f17d6
        __asm _emit 0x75
        __asm _emit 0x50
        cmp dword ptr [ebp - 18h], 498h
        ; Exact mapped bytes 74 06: je 0x4f1795
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 0E: jne 0x4f17a3
        __asm _emit 0x75
        __asm _emit 0x0e
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0D 36 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 D1 CD FE FF: call 0x4de574
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 18h], 499h
        ; Exact mapped bytes 75 0E: jne 0x4f17ba
        __asm _emit 0x75
        __asm _emit 0x0e
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 F6 35 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 BA CD FE FF: call 0x4de574
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E8 35 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, 10h
        ; Exact mapped bytes E8 DC 35 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 79 CD FE FF: call 0x4de54d
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 14: jmp 0x4f17ea
        __asm _emit 0xeb
        __asm _emit 0x14
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0E: je 0x4f17ea
        __asm _emit 0x74
        __asm _emit 0x0e
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 C6 35 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 8A CD FE FF: call 0x4de574
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 F6 B0 FD FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E7 B0 FD FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        lea esp, [ebp - 68h]
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
