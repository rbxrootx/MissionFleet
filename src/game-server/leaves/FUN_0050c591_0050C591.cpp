// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050C591 .. +0x2D8 bytes.
extern "C" __declspec(naked) void FUN_0050c591_0050C591() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57eccch
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
        ; Exact mapped bytes E8 B9 0E FE FF: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x0e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 81 2B FF FF: call 0x4ff151
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, 10h
        ; Exact mapped bytes E8 B1 49 02 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 63 02 00 00: jne 0x50c846
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
        ; Exact mapped bytes E8 07 49 02 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes 83 3D F0 E8 5D 00 00: cmp dword ptr [0x5de8f0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 BF 01 00 00: jne 0x50c7d0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5cbba4h
        ; Exact mapped bytes FF 15 3C 24 5E 00: call dword ptr [0x5e243c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 14: jne 0x50c639
        __asm _emit 0x75
        __asm _emit 0x14
        push 265h
        push 5cba5ch
        ; Exact mapped bytes E8 CC 83 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50c639
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x50c61f
        __asm _emit 0x75
        __asm _emit 0xe0
        push 5cbbb0h
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 75 01 00 00: je 0x50c7d0
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
        ; Exact mapped bytes E8 26 49 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 E2 FA FF FF: call 0x50c170
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
        ; Exact mapped bytes E8 9C 13 FE FF: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x13
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 96 11 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x11
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 EC 48 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 09: jne 0x50c6d0
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 36: jmp 0x50c706
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 D1 D0 F9 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xd0
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], esp
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        ; Exact mapped bytes E8 BD 48 F8 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x48
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, 10h
        ; Exact mapped bytes E8 99 48 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 09: jne 0x50c723
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes EB 36: jmp 0x50c759
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 7E D0 F9 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xd0
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], esp
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        ; Exact mapped bytes E8 6A 48 F8 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x48
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 49 48 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 09: jne 0x50c773
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 36: jmp 0x50c7a9
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 2E D0 F9 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd0
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], esp
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        ; Exact mapped bytes E8 1A 48 F8 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x48
        __asm _emit 0xf8
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
        ; Exact mapped bytes 75 09: jne 0x50c7d0
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 50: jne 0x50c826
        __asm _emit 0x75
        __asm _emit 0x50
        cmp dword ptr [ebp - 18h], 498h
        ; Exact mapped bytes 74 06: je 0x50c7e5
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 0E: jne 0x50c7f3
        __asm _emit 0x75
        __asm _emit 0x0e
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 BD 47 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 81 2C FF FF: call 0x4ff474
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 18h], 499h
        ; Exact mapped bytes 75 0E: jne 0x50c80a
        __asm _emit 0x75
        __asm _emit 0x0e
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 A6 47 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 6A 2C FF FF: call 0x4ff474
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 98 47 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, 10h
        ; Exact mapped bytes E8 8C 47 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 29 2C FF FF: call 0x4ff44d
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 14: jmp 0x50c83a
        __asm _emit 0xeb
        __asm _emit 0x14
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0E: je 0x50c83a
        __asm _emit 0x74
        __asm _emit 0x0e
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 76 47 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 3A 2C FF FF: call 0x4ff474
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 06 10 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F7 0F FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x0f
        __asm _emit 0xfe
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
