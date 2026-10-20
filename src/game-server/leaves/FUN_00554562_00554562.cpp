// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00554562 .. +0x15B bytes.
extern "C" __declspec(naked) void FUN_00554562_00554562() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        push 2c1h
        push 5cfa08h
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 DF 6B FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x6b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 14: je 0x55459e
        __asm _emit 0x74
        __asm _emit 0x14
        push 2c2h
        push 5cfa08h
        ; Exact mapped bytes E8 67 04 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55459e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x554581
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x5545c1
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c3h
        push 5cfa08h
        ; Exact mapped bytes E8 44 04 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5545c1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5545a4
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 25: je 0x5545f2
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 14h
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 7C B8 F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xb8
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5545f2
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c5h
        push 5cfa08h
        ; Exact mapped bytes E8 13 04 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5545f2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x5545c7
        __asm _emit 0x75
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 42 EA FF FF: call 0x553042
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 28h], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 90 D8 00 00 00: call dword ptr [eax + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x554631
        __asm _emit 0x75
        __asm _emit 0x14
        push 2cah
        push 5cfa08h
        ; Exact mapped bytes E8 D4 03 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554631
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x554614
        __asm _emit 0x75
        __asm _emit 0xdd
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes 66 8B 4D 10: mov cx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 35 95 FF FF: call 0x54db7e
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 14h], eax
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 24h]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 34h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 58e540h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 B0 29 5E 00: call dword ptr [0x5e29b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 90 CC 00 00 00: call dword ptr [eax + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        push 2d6h
        push 5cfa08h
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 AF 6A FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x6a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
