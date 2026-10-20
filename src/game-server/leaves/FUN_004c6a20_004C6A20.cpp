// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C6A20 .. +0x23F bytes.
extern "C" __declspec(naked) void FUN_004c6a20_004C6A20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d588h
        push 4b1298h
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
        add esp, -24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], esp
        ; Exact mapped bytes 83 3D D4 F0 5D 00 00: cmp dword ptr [0x5df0d4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 4F: jne 0x4c6a9e
        __asm _emit 0x75
        __asm _emit 0x4f
        lea eax, [ebp - 1ch]
        push eax
        push 1
        push 58cc30h
        push 1
        ; Exact mapped bytes FF 15 3C 22 5E 00: call dword ptr [0x5e223c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x4c6a72
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 D4 F0 5D 00 01 00 00 00: mov dword ptr [0x5df0d4], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd4
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2C: jmp 0x4c6a9e
        __asm _emit 0xeb
        __asm _emit 0x2c
        lea ecx, [ebp - 1ch]
        push ecx
        push 1
        push 58cc2ch
        push 1
        push 0
        ; Exact mapped bytes FF 15 40 22 5E 00: call dword ptr [0x5e2240]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x4c6a97
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 D4 F0 5D 00 02 00 00 00: mov dword ptr [0x5df0d4], 2
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd4
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x4c6a9e
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DB 01 00 00: jmp 0x4c6c79
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D D4 F0 5D 00 01: cmp dword ptr [0x5df0d4], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 1B: jne 0x4c6ac2
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 3C 22 5E 00: call dword ptr [0x5e223c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 B7 01 00 00: jmp 0x4c6c79
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D D4 F0 5D 00 02: cmp dword ptr [0x5df0d4], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 A8 01 00 00: jne 0x4c6c77
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 08: jne 0x4c6add
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes A1 24 F0 5D 00: mov eax, dword ptr [0x5df024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp + 18h], eax
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 220h
        mov eax, dword ptr [ebp + 18h]
        push eax
        ; Exact mapped bytes FF 15 E0 23 5E 00: call dword ptr [0x5e23e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 07: jne 0x4c6b0c
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 6D 01 00 00: jmp 0x4c6c79
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 28h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 A0 2C FE FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], esp
        mov dword ptr [ebp - 18h], esp
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 35 28 FE FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes EB 17: jmp 0x4c6b5e
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, 1
        ret
        mov esp, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 07: jne 0x4c6b6b
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 0E 01 00 00: jmp 0x4c6c79
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 220h
        mov edx, dword ptr [ebp + 18h]
        push edx
        ; Exact mapped bytes FF 15 E0 23 5E 00: call dword ptr [0x5e23e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4c6b99
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x4c6c79
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 28h]
        lea eax, [eax + eax + 2]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 0F 2C FE FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], esp
        mov dword ptr [ebp - 18h], esp
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes EB 17: jmp 0x4c6bdd
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, 1
        ret
        mov esp, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 07: jne 0x4c6bea
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x4c6c79
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 09: jne 0x4c6bf9
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 8B 15 14 F0 5D 00: mov edx, dword ptr [0x5df014]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp + 1ch], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 C7 04 41 FF FF: mov word ptr [ecx + eax*2], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 C7 44 50 FE FF FF: mov word ptr [eax + edx*2 - 2], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        push edx
        ; Exact mapped bytes FF 15 40 22 5E 00: call dword ptr [0x5e2240]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 24h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 54 41 FE: mov dx, word ptr [ecx + eax*2 - 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x41
        __asm _emit 0xfe
        cmp edx, 0ffffh
        ; Exact mapped bytes 74 14: je 0x4c6c58
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 24h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 41: mov dx, word ptr [ecx + eax*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x41
        cmp edx, 0ffffh
        ; Exact mapped bytes 74 04: je 0x4c6c5c
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1D: jmp 0x4c6c79
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 10h]
    }
}
