// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00522533 .. +0x143 bytes.
extern "C" __declspec(naked) void FUN_00522533_00522533() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 1
        push 8
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 0A D9 FA FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xd9
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x522561
        __asm _emit 0x75
        __asm _emit 0x11
        push 48h
        push 5c7638h
        ; Exact mapped bytes E8 A4 24 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x522561
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x52253f
        __asm _emit 0x75
        __asm _emit 0xd8
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 44: je 0x5225b1
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 01 5A 01 00: call 0x537f76
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 7
        ; Exact mapped bytes 7D 33: jge 0x5225b1
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 74 2D: je 0x5225b1
        __asm _emit 0x74
        __asm _emit 0x2d
        push 3
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 3C: call dword ptr [eax + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 26 0E FE FF: call 0x5033c3
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x0e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 3C: call dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x3c
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x52266d
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 4C: je 0x522603
        __asm _emit 0x74
        __asm _emit 0x4c
        push 59h
        push 5c7638h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 99 8B FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 11: jne 0x5225e1
        __asm _emit 0x75
        __asm _emit 0x11
        push 5ah
        push 5c7638h
        ; Exact mapped bytes E8 24 24 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5225e1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5225c7
        __asm _emit 0x75
        __asm _emit 0xe0
        push 58h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2B 54 01 00: call 0x537a1c
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 5ah
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1E 54 01 00: call 0x537a1c
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 11: jmp 0x522614
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes A1 B0 E8 5D 00: mov eax, dword ptr [0x5de8b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 8B 0D B4 E8 5D 00: mov ecx, dword ptr [0x5de8b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 06: je 0x522620
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x522631
        __asm _emit 0x75
        __asm _emit 0x11
        push 63h
        push 5c7638h
        ; Exact mapped bytes E8 D4 23 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x522631
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x522614
        __asm _emit 0x75
        __asm _emit 0xdd
        push 9ech
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 15 78 23 5E 00: call dword ptr [0x5e2378]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], eax
        push 9ech
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 78 23 5E 00: call dword ptr [0x5e2378]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
