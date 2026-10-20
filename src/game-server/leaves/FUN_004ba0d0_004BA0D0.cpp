// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BA0D0 .. +0x2D7 bytes.
extern "C" __declspec(naked) void FUN_004ba0d0_004BA0D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58cc38h
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
        ; Exact mapped bytes 83 3D E4 EF 5D 00 00: cmp dword ptr [0x5defe4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0xef
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 57: jne 0x4ba156
        __asm _emit 0x75
        __asm _emit 0x57
        push 0
        push 0
        push 1
        push 58cc30h
        push 100h
        push 0
        ; Exact mapped bytes FF 15 44 22 5E 00: call dword ptr [0x5e2244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x4ba127
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 E4 EF 5D 00 01 00 00 00: mov dword ptr [0x5defe4], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0xef
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2F: jmp 0x4ba156
        __asm _emit 0xeb
        __asm _emit 0x2f
        push 0
        push 0
        push 1
        push 58cc2ch
        push 100h
        push 0
        ; Exact mapped bytes FF 15 48 22 5E 00: call dword ptr [0x5e2248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x4ba14f
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 E4 EF 5D 00 02 00 00 00: mov dword ptr [0x5defe4], 2
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0xef
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x4ba156
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 6B 02 00 00: jmp 0x4ba3c1
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 7E 13: jle 0x4ba16f
        __asm _emit 0x7e
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 77 02 00 00: call 0x4ba3e0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp + 14h], eax
        ; Exact mapped bytes 83 3D E4 EF 5D 00 02: cmp dword ptr [0x5defe4], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0xef
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 75 23: jne 0x4ba19b
        __asm _emit 0x75
        __asm _emit 0x23
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 48 22 5E 00: call dword ptr [0x5e2248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 26 02 00 00: jmp 0x4ba3c1
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D E4 EF 5D 00 01: cmp dword ptr [0x5defe4], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0xef
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 17 02 00 00: jne 0x4ba3bf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 75 09: jne 0x4ba1b7
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 8B 15 24 F0 5D 00: mov edx, dword ptr [0x5df024]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp + 20h], edx
        push 0
        push 0
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 24h]
        neg edx
        sbb edx, edx
        and edx, 8
        add edx, 1
        push edx
        mov eax, dword ptr [ebp + 20h]
        push eax
        ; Exact mapped bytes FF 15 DC 23 5E 00: call dword ptr [0x5e23dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 07: jne 0x4ba1eb
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 D6 01 00 00: jmp 0x4ba3c1
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 1ch]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 BF F5 FE FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], esp
        mov dword ptr [ebp - 18h], esp
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes EB 17: jmp 0x4ba22d
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, 1
        ret
        mov esp, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 07: jne 0x4ba23a
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 87 01 00 00: jmp 0x4ba3c1
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 1
        mov eax, dword ptr [ebp + 20h]
        push eax
        ; Exact mapped bytes FF 15 DC 23 5E 00: call dword ptr [0x5e23dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4ba261
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 60 01 00 00: jmp 0x4ba3c1
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 44 22 5E 00: call dword ptr [0x5e2244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 07: jne 0x4ba28b
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 36 01 00 00: jmp 0x4ba3c1
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        and edx, 400h
        test edx, edx
        ; Exact mapped bytes 74 43: je 0x4ba2db
        __asm _emit 0x74
        __asm _emit 0x43
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 38: je 0x4ba2d6
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 28h]
        cmp eax, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 7E 07: jle 0x4ba2ad
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 14 01 00 00: jmp 0x4ba3c1
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 44 22 5E 00: call dword ptr [0x5e2244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4ba2d6
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 EB 00 00 00: jmp 0x4ba3c1
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 DF 00 00 00: jmp 0x4ba3ba
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 2ch]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 C9 F4 FE FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], esp
        mov dword ptr [ebp - 18h], esp
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes EB 17: jmp 0x4ba323
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, 1
        ret
        mov esp, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 07: jne 0x4ba330
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x4ba3c1
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 44 22 5E 00: call dword ptr [0x5e2244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4ba356
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 6B: jmp 0x4ba3c1
        __asm _emit 0xeb
        __asm _emit 0x6b
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 2E: jne 0x4ba38a
        __asm _emit 0x75
        __asm _emit 0x2e
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 220h
        mov edx, dword ptr [ebp + 20h]
        push edx
        ; Exact mapped bytes FF 15 E0 23 5E 00: call dword ptr [0x5e23e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 04: jne 0x4ba388
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 39: jmp 0x4ba3c1
        __asm _emit 0xeb
        __asm _emit 0x39
        ; Exact mapped bytes EB 30: jmp 0x4ba3ba
        __asm _emit 0xeb
        __asm _emit 0x30
        push 0
        push 0
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        push 220h
        mov ecx, dword ptr [ebp + 20h]
        push ecx
    }
}
