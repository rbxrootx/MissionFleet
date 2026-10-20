// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048DF34 .. +0x151 bytes.
extern "C" __declspec(naked) void FUN_0048df34_0048DF34() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x48e033
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E5 75 0A 00: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x75
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 0f0h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 B8 23 5E 00: call dword ptr [0x5e23b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 5F: je 0x48dfdb
        __asm _emit 0x74
        __asm _emit 0x5f
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 BC 23 5E 00: call dword ptr [0x5e23bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 19: jne 0x48dfac
        __asm _emit 0x75
        __asm _emit 0x19
        push 5c6378h
        push 5c63b0h
        ; Exact mapped bytes E8 73 1C 04 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x1c
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 D0 00 00 00: jmp 0x48e07c
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 B4 23 5E 00: call dword ptr [0x5e23b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x48dfd3
        __asm _emit 0x75
        __asm _emit 0x14
        push 146h
        push 5c636ch
        ; Exact mapped bytes E8 32 6A 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x6a
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48dfd3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x48dfb9
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes EB 58: jmp 0x48e033
        __asm _emit 0xeb
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 14: jne 0x48dffe
        __asm _emit 0x75
        __asm _emit 0x14
        push 14eh
        push 5c636ch
        ; Exact mapped bytes E8 07 6A 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x6a
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48dffe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x48dfe4
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax], -1
        ; Exact mapped bytes 74 27: je 0x48e033
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 14: je 0x48e028
        __asm _emit 0x74
        __asm _emit 0x14
        push 5c63b4h
        push 5c63f0h
        ; Exact mapped bytes E8 F2 1B 04 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 0B: jmp 0x48e033
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 18h]
        add edx, 4
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB D1: jmp 0x48e004
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov dword ptr [ebp - 0ch], 1
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1A: je 0x48e05a
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x48e079
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 13: je 0x48e079
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 B1 F1 FF FF: call 0x48d220
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 C0 23 5E 00: call dword ptr [0x5e23c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
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
