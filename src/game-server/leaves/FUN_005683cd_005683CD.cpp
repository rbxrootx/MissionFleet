// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005683CD .. +0x318 bytes.
extern "C" __declspec(naked) void FUN_005683cd_005683CD() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f736h
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
        ; Exact mapped bytes FF 15 24 2A 5E 00: call dword ptr [0x5e2a24]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 8C 2A FE FF: call 0x54ae8e
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x2a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 2B: jne 0x568436
        __asm _emit 0x75
        __asm _emit 0x2b
        push 5cf594h
        push 5cf5d4h
        ; Exact mapped bytes E8 FB 77 F6 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x77
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        push 5cf5d8h
        push 5cf604h
        ; Exact mapped bytes E8 E9 77 F6 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 9C 02 00 00: jmp 0x5686d2
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B3 FE FF FF: call 0x5682f7
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A5 FE FF FF: call 0x5682f7
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 14: jne 0x56846c
        __asm _emit 0x75
        __asm _emit 0x14
        push 101h
        push 5cf588h
        ; Exact mapped bytes E8 99 C5 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xc5
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56846c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x568452
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 83 8A FC FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 79 D0 FC FF: call 0x53550d
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 CA 7B F9 FF: call 0x500064
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x7b
        __asm _emit 0xf9
        __asm _emit 0xff
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 08 8B FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x8b
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 2
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4A FE FF FF: call 0x5682f7
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 14h]
        push edx
        push 3
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3C FE FF FF: call 0x5682f7
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 18h]
        push eax
        push 4
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2E FE FF FF: call 0x5682f7
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 DE D0 FC FF: call 0x5355ac
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 5
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1E FE FF FF: call 0x5682f7
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 26 8A FC FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 35: je 0x568520
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 B3 8A FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 10 D0 FC FF: call 0x53550d
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 20 25 5E 00: call dword ptr [0x5e2520]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 0C: je 0x568519
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 28 28 5E 00: call dword ptr [0x5e2828]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x568520
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp + 1ch], 0
        mov eax, dword ptr [ebp + 1ch]
        push eax
        push 5cf608h
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 2A 64 F6 FF: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x64
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 0ch
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 6D 8A FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 6
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AF FD FF FF: call 0x5682f7
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 20h]
        push edx
        push 7
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A1 FD FF FF: call 0x5682f7
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A9 89 FC FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x89
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp + 24h], 0
        ; Exact mapped bytes 74 1B: je 0x568583
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x568583
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 24h]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7F 55 F8 FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x55
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 0B 01 00 00: jmp 0x56868e
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 20h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6E 55 F8 FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x55
        __asm _emit 0xf8
        __asm _emit 0xff
        push 28h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 EC 5D F8 FF: call 0x4ee385
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], -1
        ; Exact mapped bytes 75 0D: jne 0x5685af
        __asm _emit 0x75
        __asm _emit 0x0d
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 08 51 F8 FF: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x51
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 DF 00 00 00: jmp 0x56868e
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
        ; Exact mapped bytes E8 30 57 F6 FF: call 0x4cdcf2
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x57
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6B 54 F8 FF: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x54
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 65 52 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x52
        __asm _emit 0xf8
        __asm _emit 0xff
        push 2eh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 94 5D F8 FF: call 0x4ee385
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x5d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], -1
        ; Exact mapped bytes 75 0D: jne 0x568607
        __asm _emit 0x75
        __asm _emit 0x0d
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B0 50 F8 FF: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x56868e
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
        ; Exact mapped bytes E8 DB 56 F6 FF: call 0x4cdcf2
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x56
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 4ch], ecx
        mov byte ptr [ebp - 4], 4
        mov edx, dword ptr [ebp - 4ch]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 16 54 F8 FF: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x54
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 10 52 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x52
        __asm _emit 0xf8
        __asm _emit 0xff
        push 29h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 3F 5D F8 FF: call 0x4ee385
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x5d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], -1
        ; Exact mapped bytes 75 0A: jne 0x568659
        __asm _emit 0x75
        __asm _emit 0x0a
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5B 50 F8 FF: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x50
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 35: jmp 0x56868e
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 2ch]
        push eax
        lea ecx, [ebp - 38h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E1 58 F6 FF: call 0x4cdf4a
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x58
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 54h], edx
        mov byte ptr [ebp - 4], 5
        mov eax, dword ptr [ebp - 54h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C4 53 F8 FF: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x53
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 BE 51 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0xf8
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 14 89 FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x89
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 8
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 56 FC FF FF: call 0x5682f7
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], 1
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 98 51 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x51
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 8C 51 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x51
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 7D 51 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x51
        __asm _emit 0xf8
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
