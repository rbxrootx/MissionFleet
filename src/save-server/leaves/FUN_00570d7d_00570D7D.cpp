// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570D7D .. +0x318 bytes.
extern "C" __declspec(naked) void FUN_00570d7d_00570D7D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f216h
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
        sub esp, 48h
        push ebx
        push esi
        push edi
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 E0 C2 68 00: call dword ptr [0x68c2e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 FC 53 FD FF: call 0x5461ae
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 2B: jne 0x570de6
        __asm _emit 0x75
        __asm _emit 0x2b
        push 67bd6ch
        push 67bdach
        ; Exact mapped bytes E8 4B F8 F2 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf8
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        push 67bdb0h
        push 67bddch
        ; Exact mapped bytes E8 39 F8 F2 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf8
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 9C 02 00 00: jmp 0x571082
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B3 FE FF FF: call 0x570ca7
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A5 FE FF FF: call 0x570ca7
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 14: jne 0x570e1c
        __asm _emit 0x75
        __asm _emit 0x14
        push 101h
        push 67bd60h
        ; Exact mapped bytes E8 29 7F FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x7f
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x570e1c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x570e02
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 D3 3E FB FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x3e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 39 0C FC FF: call 0x531a7d
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 1A E3 F6 FF: call 0x4df164
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xe3
        __asm _emit 0xf6
        __asm _emit 0xff
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 58 3F FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x3f
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        push 2
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4A FE FF FF: call 0x570ca7
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 14h]
        push edx
        push 3
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3C FE FF FF: call 0x570ca7
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 18h]
        push eax
        push 4
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2E FE FF FF: call 0x570ca7
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 9E 0C FC FF: call 0x531b1c
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 5
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1E FE FF FF: call 0x570ca7
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 76 3E FB FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x3e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 35: je 0x570ed0
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 03 3F FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x3f
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 D0 0B FC FF: call 0x531a7d
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x0b
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 EC BB 68 00: call dword ptr [0x68bbec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 0C: je 0x570ec9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 30 BC 68 00: call dword ptr [0x68bc30]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x570ed0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp + 1ch], 0
        mov eax, dword ptr [ebp + 1ch]
        push eax
        push 67bde0h
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 C4 0C F3 FF: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x0c
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 0ch
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 BD 3E FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x3e
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        push 6
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AF FD FF FF: call 0x570ca7
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 20h]
        push edx
        push 7
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A1 FD FF FF: call 0x570ca7
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F9 3D FB FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x3d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp + 24h], 0
        ; Exact mapped bytes 74 1B: je 0x570f33
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x570f33
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 24h]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6F BC F5 FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xbc
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 0B 01 00 00: jmp 0x57103e
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 20h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5E BC F5 FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xbc
        __asm _emit 0xf5
        __asm _emit 0xff
        push 28h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DC C4 F5 FF: call 0x4cd425
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], -1
        ; Exact mapped bytes 75 0D: jne 0x570f5f
        __asm _emit 0x75
        __asm _emit 0x0d
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F8 B7 F5 FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb7
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 DF 00 00 00: jmp 0x57103e
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        push ecx
        lea edx, [ebp - 30h]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 80 FF F2 FF: call 0x4a0ef2
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5B BB F5 FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xbb
        __asm _emit 0xf5
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 55 B9 F5 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xb9
        __asm _emit 0xf5
        __asm _emit 0xff
        push 2eh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 84 C4 F5 FF: call 0x4cd425
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], -1
        ; Exact mapped bytes 75 0D: jne 0x570fb7
        __asm _emit 0x75
        __asm _emit 0x0d
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A0 B7 F5 FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xb7
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x57103e
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        push edx
        lea eax, [ebp - 34h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 2B FF F2 FF: call 0x4a0ef2
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 4ch], ecx
        mov byte ptr [ebp - 4], 4
        mov edx, dword ptr [ebp - 4ch]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 06 BB F5 FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xbb
        __asm _emit 0xf5
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 00 B9 F5 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xb9
        __asm _emit 0xf5
        __asm _emit 0xff
        push 29h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 2F C4 F5 FF: call 0x4cd425
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], -1
        ; Exact mapped bytes 75 0A: jne 0x571009
        __asm _emit 0x75
        __asm _emit 0x0a
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 4B B7 F5 FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xb7
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 35: jmp 0x57103e
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 2ch]
        push eax
        lea ecx, [ebp - 38h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 31 01 F3 FF: call 0x4a114a
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 54h], edx
        mov byte ptr [ebp - 4], 5
        mov eax, dword ptr [ebp - 54h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B4 BA F5 FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xba
        __asm _emit 0xf5
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 AE B8 F5 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xb8
        __asm _emit 0xf5
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 64 3D FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x3d
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        push 8
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 56 FC FF FF: call 0x570ca7
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], 1
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 88 B8 F5 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xb8
        __asm _emit 0xf5
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 7C B8 F5 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xb8
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 6D B8 F5 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb8
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 3ch]
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
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
