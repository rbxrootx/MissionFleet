// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58839825 .. +0x2EB bytes.
extern "C" __declspec(naked) void FUN_58839825_58839825() {
    __asm {
        push 3cch
        mov eax, 58892914h
        ; Exact mapped bytes E8 37 8D FF FF: call 0x5883256b
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 7C 7D 96 58: mov eax, dword ptr [0x58967d7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        mov esi, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x58839870
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 BD 02 00 00: je 0x58839b0a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 588f1ca0h
        ; Exact mapped bytes E8 FB 2A 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 22 08 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 9A 02 00 00: jmp 0x58839b0a
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, 104h
        lea eax, [ebp - 124h]
        push ebx
        xor edi, edi
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        push edi
        push eax
        ; Exact mapped bytes 0F 11 45 E0: movups xmmword ptr [ebp - 0x20], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes E8 84 35 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 80 3D 79 6B 96 58 3A: cmp byte ptr [0x58966b79], 0x3a
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x79
        __asm _emit 0x6b
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x3a
        ; Exact mapped bytes 75 20: jne 0x588398b8
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 80 3D 7A 6B 96 58 5C: cmp byte ptr [0x58966b7a], 0x5c
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x7a
        __asm _emit 0x6b
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x5c
        ; Exact mapped bytes 75 17: jne 0x588398b8
        __asm _emit 0x75
        __asm _emit 0x17
        push 58966b78h
        lea eax, [ebp - 124h]
        push ebx
        push eax
        ; Exact mapped bytes E8 DD DE 01 00: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 0F: jmp 0x588398c7
        __asm _emit 0xeb
        __asm _emit 0x0f
        lea eax, [ebp - 124h]
        push ebx
        push eax
        ; Exact mapped bytes E8 0A BF FF FF: call 0x588357cf
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        push 588f1cc0h
        ; Exact mapped bytes E8 82 2A 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 124h]
        push eax
        ; Exact mapped bytes E8 D2 01 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp - 124h]
        push edi
        push eax
        ; Exact mapped bytes E8 76 D0 02 00: call 0x58866961
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 14h
        cmp eax, -1
        ; Exact mapped bytes 0F 84 D5 01 00 00: je 0x58839acc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 384h]
        ; Exact mapped bytes E8 1E 40 00 00: call 0x5883d920
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        lea eax, [ebp - 124h]
        mov dword ptr [ebp - 4], edi
        push eax
        lea ecx, [ebp - 384h]
        ; Exact mapped bytes E8 B5 41 00 00: call 0x5883dace
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 75 48: jne 0x58839965
        __asm _emit 0x75
        __asm _emit 0x48
        ; Exact mapped bytes 8B 3D FC 41 89 58: mov edi, dword ptr [0x588941fc]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 8D 01 00 00: je 0x58839abf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 338h]
        lea eax, [ebp - 124h]
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push eax
        push esi
        push 588f06a4h
        ; Exact mapped bytes E8 06 2A 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 2D 07 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes E9 5A 01 00 00: jmp 0x58839abf
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 8]
        lea eax, [ebp - 20h]
        push 588f1cdch
        push eax
        ; Exact mapped bytes E8 EA 31 CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x31
        __asm _emit 0xcd
        __asm _emit 0xff
        push ebx
        lea eax, [ebp - 228h]
        push edi
        push eax
        ; Exact mapped bytes E8 8C 34 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 18h
        ; Exact mapped bytes 80 3D 88 6E 96 58 00: cmp byte ptr [0x58966e88], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x6e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 5E: jne 0x588399ee
        __asm _emit 0x75
        __asm _emit 0x5e
        ; Exact mapped bytes A1 98 7D 96 58: mov eax, dword ptr [0x58967d98]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        and eax, 1
        push eax
        push esi
        lea eax, [ebp - 20h]
        push eax
        lea eax, [ebp - 124h]
        push eax
        push 588f1ce0h
        ; Exact mapped bytes E8 A4 29 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        lea eax, [ebp - 228h]
        push eax
        ; Exact mapped bytes E8 A3 31 CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x31
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 18h
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 51: je 0x58839a1a
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes FF 35 98 7D 96 58: push dword ptr [0x58967d98]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        push 588f1cf0h
        ; Exact mapped bytes E8 7A 29 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 A1 06 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 2C: jmp 0x58839a1a
        __asm _emit 0xeb
        __asm _emit 0x2c
        push 58966e88h
        push esi
        lea eax, [ebp - 20h]
        push eax
        lea eax, [ebp - 124h]
        push eax
        push 588f1d10h
        ; Exact mapped bytes E8 4A 29 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        lea eax, [ebp - 228h]
        push eax
        ; Exact mapped bytes E8 49 31 CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x31
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 18h
        push 44h
        pop esi
        push esi
        lea eax, [ebp - 3d8h]
        push edi
        push eax
        ; Exact mapped bytes E8 E5 33 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        push 10h
        lea eax, [ebp - 394h]
        mov dword ptr [ebp - 3d8h], esi
        push edi
        push eax
        ; Exact mapped bytes E8 D0 33 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 32ch]
        push ebx
        push eax
        ; Exact mapped bytes E8 82 BD FF FF: call 0x588357cf
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 20h
        lea eax, [ebp - 394h]
        push eax
        lea eax, [ebp - 3d8h]
        push eax
        lea eax, [ebp - 32ch]
        push eax
        push edi
        push edi
        push edi
        push edi
        push edi
        lea eax, [ebp - 228h]
        push eax
        push edi
        ; Exact mapped bytes FF 15 08 42 89 58: call dword ptr [0x58894208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x58839a92
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 39 05 EC 83 96 58: cmp dword ptr [0x589683ec], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 3B: je 0x58839abf
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        push 588f1d24h
        ; Exact mapped bytes EB 15: jmp 0x58839aa7
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 24: je 0x58839abf
        __asm _emit 0x74
        __asm _emit 0x24
        lea eax, [ebp - 228h]
        push eax
        push 588f1d44h
        ; Exact mapped bytes E8 A7 28 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 CE 05 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 384h]
        ; Exact mapped bytes E8 DB 3E 00 00: call 0x5883d9a5
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3E: jmp 0x58839b0a
        __asm _emit 0xeb
        __asm _emit 0x3e
        ; Exact mapped bytes 39 3D EC 83 96 58: cmp dword ptr [0x589683ec], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 2B: je 0x58839aff
        __asm _emit 0x74
        __asm _emit 0x2b
        lea eax, [ebp - 124h]
        push eax
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        push 588f1d58h
        ; Exact mapped bytes E8 67 28 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 8E 05 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        push esi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1D FA FF FF: call 0x58839525
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        ; Exact mapped bytes E8 1A 8A FF FF: call 0x58832529
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        ret
    }
}
