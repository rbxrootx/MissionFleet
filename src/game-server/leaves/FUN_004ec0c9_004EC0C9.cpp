// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EC0C9 .. +0x165 bytes.
extern "C" __declspec(naked) void FUN_004ec0c9_004EC0C9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 111h
        push 5c7dd4h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 78 F0 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4ec105
        __asm _emit 0x75
        __asm _emit 0x14
        push 112h
        push 5c7dd4h
        ; Exact mapped bytes E8 00 89 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ec105
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4ec0e8
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4ec12d
        __asm _emit 0x75
        __asm _emit 0x14
        push 115h
        push 5c7dd4h
        ; Exact mapped bytes E8 D8 88 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ec12d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4ec113
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 56: jne 0x4ec18f
        __asm _emit 0x75
        __asm _emit 0x56
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4ec14b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 73 19: jae 0x4ec16f
        __asm _emit 0x73
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 02: je 0x4ec16d
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4ec16f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D3: jmp 0x4ec142
        __asm _emit 0xeb
        __asm _emit 0xd3
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4ec189
        __asm _emit 0x75
        __asm _emit 0x14
        push 11dh
        push 5c7dd4h
        ; Exact mapped bytes E8 7C 88 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ec189
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4ec16f
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        push 10h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 BA 3C FE FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ec1b4
        __asm _emit 0x75
        __asm _emit 0x14
        push 121h
        push 5c7dd4h
        ; Exact mapped bytes E8 51 88 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ec1b4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4ec18f
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 3B: jne 0x4ec203
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 09: jmp 0x4ec1df
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 73 19: jae 0x4ec203
        __asm _emit 0x73
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 02: je 0x4ec201
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4ec203
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D3: jmp 0x4ec1d6
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 8
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 2C 18 00 00: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [eax], edx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
