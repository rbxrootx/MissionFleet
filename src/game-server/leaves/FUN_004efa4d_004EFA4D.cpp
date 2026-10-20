// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EFA4D .. +0x155 bytes.
extern "C" __declspec(naked) void FUN_004efa4d_004EFA4D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AE 88 00 00: call 0x4f831f
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x4efa7f
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 1A 01 00 00: jmp 0x4efb99
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 06: je 0x4efa8b
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 75 16: jne 0x4efaa1
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 8]
        and ecx, 8000h
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x4efaa1
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 8], 0f000h
        ; Exact mapped bytes 72 07: jb 0x4efaa8
        __asm _emit 0x72
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x4efb99
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 89 D5 04 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 63: je 0x4efb1c
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes 8B 15 78 E8 5D 00: mov edx, dword ptr [0x5de878]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        and edx, 8
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x4efad7
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        push 5c507ch
        ; Exact mapped bytes E8 41 01 FE FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 11: jne 0x4efaf0
        __asm _emit 0x75
        __asm _emit 0x11
        push 73h
        push 5c5060h
        ; Exact mapped bytes E8 15 4F 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x4f
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4efaf0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E1: jne 0x4efad7
        __asm _emit 0x75
        __asm _emit 0xe1
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4efb1c
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 7D: jmp 0x4efb99
        __asm _emit 0xeb
        __asm _emit 0x7d
        ; Exact mapped bytes E8 98 9C 00 00: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 43: je 0x4efb6d
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes A1 78 E8 5D 00: mov eax, dword ptr [0x5de878]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4efb47
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 5c50a8h
        ; Exact mapped bytes E8 D1 00 FE FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4efb6d
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 2C: jmp 0x4efb99
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes A1 78 E8 5D 00: mov eax, dword ptr [0x5de878]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x4efb97
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov eax, dword ptr [eax]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 5c50cch
        ; Exact mapped bytes E8 81 00 FE FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        xor eax, eax
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
