// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005223F0 .. +0x143 bytes.
extern "C" __declspec(naked) void FUN_005223f0_005223F0() {
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
        ; Exact mapped bytes E8 4D DA FA FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xda
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x52241e
        __asm _emit 0x75
        __asm _emit 0x11
        push 25h
        push 5c7638h
        ; Exact mapped bytes E8 E7 25 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52241e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x5223fc
        __asm _emit 0x75
        __asm _emit 0xd8
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 44: je 0x52246e
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 44 5B 01 00: call 0x537f76
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 7
        ; Exact mapped bytes 7D 33: jge 0x52246e
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 74 2D: je 0x52246e
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
        ; Exact mapped bytes E8 2F 10 FE FF: call 0x503489
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x10
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
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x52252a
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 4C: je 0x5224c0
        __asm _emit 0x74
        __asm _emit 0x4c
        push 36h
        push 5c7638h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 DC 8C FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 11: jne 0x52249e
        __asm _emit 0x75
        __asm _emit 0x11
        push 37h
        push 5c7638h
        ; Exact mapped bytes E8 67 25 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52249e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x522484
        __asm _emit 0x75
        __asm _emit 0xe0
        push 58h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6E 55 01 00: call 0x537a1c
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 5ah
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 61 55 01 00: call 0x537a1c
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 11: jmp 0x5224d1
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
        ; Exact mapped bytes 74 06: je 0x5224dd
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x5224ee
        __asm _emit 0x75
        __asm _emit 0x11
        push 40h
        push 5c7638h
        ; Exact mapped bytes E8 17 25 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5224ee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5224d1
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 8]
        push eax
        push 9ech
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
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 9ech
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
