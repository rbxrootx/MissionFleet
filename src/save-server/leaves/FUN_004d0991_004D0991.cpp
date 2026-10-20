// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D0991 .. +0x182 bytes.
extern "C" __declspec(naked) void FUN_004d0991_004D0991() {
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
        ; Exact mapped bytes 75 05: jne 0x4d09ab
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 61 01 00 00: jmp 0x4d0b0c
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x4d09b2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x4d09ab
        __asm _emit 0x75
        __asm _emit 0xf3
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 1ch], 1
        ; Exact mapped bytes 75 28: jne 0x4d09e9
        __asm _emit 0x75
        __asm _emit 0x28
        cmp dword ptr [ebp - 0ch], 686998h
        ; Exact mapped bytes 74 14: je 0x4d09de
        __asm _emit 0x74
        __asm _emit 0x14
        push 363h
        push 671a64h
        ; Exact mapped bytes E8 67 83 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x83
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d09de
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4d09c1
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E9 23 01 00 00: jmp 0x4d0b0c
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 1ch], -1
        ; Exact mapped bytes 75 28: jne 0x4d0a1a
        __asm _emit 0x75
        __asm _emit 0x28
        cmp dword ptr [ebp - 0ch], 686958h
        ; Exact mapped bytes 74 14: je 0x4d0a0f
        __asm _emit 0x74
        __asm _emit 0x14
        push 365h
        push 671a64h
        ; Exact mapped bytes E8 36 83 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x83
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d0a0f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4d09f2
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E9 F2 00 00 00: jmp 0x4d0b0c
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 1ch], -2
        ; Exact mapped bytes 75 28: jne 0x4d0a4b
        __asm _emit 0x75
        __asm _emit 0x28
        cmp dword ptr [ebp - 0ch], 686918h
        ; Exact mapped bytes 74 14: je 0x4d0a40
        __asm _emit 0x74
        __asm _emit 0x14
        push 367h
        push 671a64h
        ; Exact mapped bytes E8 05 83 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x83
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d0a40
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4d0a23
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x4d0b0c
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d0a70
        __asm _emit 0x75
        __asm _emit 0x14
        push 36bh
        push 671a64h
        ; Exact mapped bytes E8 D5 82 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d0a70
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d0a4b
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        ; Exact mapped bytes E8 62 ED FF FF: call 0x4cf7df
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x4d0a9a
        __asm _emit 0x75
        __asm _emit 0x14
        push 36fh
        push 671a64h
        ; Exact mapped bytes E8 AB 82 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d0a9a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d0a80
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 61 92 F7 FF: call 0x449d10
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x92
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 2C: jne 0x4d0ae4
        __asm _emit 0x75
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 69 92 F7 FF: call 0x449d30
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x92
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4d0ae4
        __asm _emit 0x75
        __asm _emit 0x14
        push 373h
        push 671a64h
        ; Exact mapped bytes E8 61 82 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d0ae4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 B6: jne 0x4d0aa0
        __asm _emit 0x75
        __asm _emit 0xb6
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 14: je 0x4d0b06
        __asm _emit 0x74
        __asm _emit 0x14
        push 374h
        push 671a64h
        ; Exact mapped bytes E8 3F 82 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d0b06
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x4d0aea
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
