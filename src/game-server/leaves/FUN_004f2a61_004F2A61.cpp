// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F2A61 .. +0x182 bytes.
extern "C" __declspec(naked) void FUN_004f2a61_004F2A61() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 05: jne 0x4f2a7b
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 61 01 00 00: jmp 0x4f2bdc
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x4f2a82
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x4f2a7b
        __asm _emit 0x75
        __asm _emit 0xf3
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 1ch], 1
        ; Exact mapped bytes 75 28: jne 0x4f2ab9
        __asm _emit 0x75
        __asm _emit 0x28
        cmp dword ptr [ebp - 0ch], 5de480h
        ; Exact mapped bytes 74 14: je 0x4f2aae
        __asm _emit 0x74
        __asm _emit 0x14
        push 363h
        push 5c5574h
        ; Exact mapped bytes E8 57 1F 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1f
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f2aae
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4f2a91
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E9 23 01 00 00: jmp 0x4f2bdc
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 1ch], -1
        ; Exact mapped bytes 75 28: jne 0x4f2aea
        __asm _emit 0x75
        __asm _emit 0x28
        cmp dword ptr [ebp - 0ch], 5de440h
        ; Exact mapped bytes 74 14: je 0x4f2adf
        __asm _emit 0x74
        __asm _emit 0x14
        push 365h
        push 5c5574h
        ; Exact mapped bytes E8 26 1F 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x1f
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f2adf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4f2ac2
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E9 F2 00 00 00: jmp 0x4f2bdc
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 1ch], -2
        ; Exact mapped bytes 75 28: jne 0x4f2b1b
        __asm _emit 0x75
        __asm _emit 0x28
        cmp dword ptr [ebp - 0ch], 5de400h
        ; Exact mapped bytes 74 14: je 0x4f2b10
        __asm _emit 0x74
        __asm _emit 0x14
        push 367h
        push 5c5574h
        ; Exact mapped bytes E8 F5 1E 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f2b10
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4f2af3
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x4f2bdc
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f2b40
        __asm _emit 0x75
        __asm _emit 0x14
        push 36bh
        push 5c5574h
        ; Exact mapped bytes E8 C5 1E 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f2b40
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4f2b1b
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        ; Exact mapped bytes E8 62 ED FF FF: call 0x4f18af
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x4f2b6a
        __asm _emit 0x75
        __asm _emit 0x14
        push 36fh
        push 5c5574h
        ; Exact mapped bytes E8 9B 1E 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f2b6a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f2b50
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 61 A6 F9 FF: call 0x48d1e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xa6
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 2C: jne 0x4f2bb4
        __asm _emit 0x75
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C9 AB F9 FF: call 0x48d760
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xab
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4f2bb4
        __asm _emit 0x75
        __asm _emit 0x14
        push 373h
        push 5c5574h
        ; Exact mapped bytes E8 51 1E 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f2bb4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 B6: jne 0x4f2b70
        __asm _emit 0x75
        __asm _emit 0xb6
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 14: je 0x4f2bd6
        __asm _emit 0x74
        __asm _emit 0x14
        push 374h
        push 5c5574h
        ; Exact mapped bytes E8 2F 1E 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f2bd6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x4f2bba
        __asm _emit 0x75
        __asm _emit 0xde
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
