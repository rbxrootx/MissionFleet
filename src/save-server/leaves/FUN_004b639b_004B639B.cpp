// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B639B .. +0xFC bytes.
extern "C" __declspec(naked) void FUN_004b639b_004B639B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
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
        ; Exact mapped bytes 75 14: jne 0x4b63cc
        __asm _emit 0x75
        __asm _emit 0x14
        push 83h
        push 677e8ch
        ; Exact mapped bytes E8 79 29 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x29
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b63cc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4b63a7
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4b63ec
        __asm _emit 0x75
        __asm _emit 0x14
        push 84h
        push 677e8ch
        ; Exact mapped bytes E8 59 29 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x29
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b63ec
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4b63d2
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4b640c
        __asm _emit 0x75
        __asm _emit 0x14
        push 85h
        push 677e8ch
        ; Exact mapped bytes E8 39 29 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x29
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b640c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4b63f2
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 06: je 0x4b641e
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 20: jne 0x4b643e
        __asm _emit 0x75
        __asm _emit 0x20
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 06: jne 0x4b642a
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 14: je 0x4b643e
        __asm _emit 0x74
        __asm _emit 0x14
        push 88h
        push 677e8ch
        ; Exact mapped bytes E8 07 29 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x29
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b643e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CE: jne 0x4b6412
        __asm _emit 0x75
        __asm _emit 0xce
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 1A 06 00 00: call 0x4b6a72
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 12: je 0x4b6470
        __asm _emit 0x74
        __asm _emit 0x12
        push 10h
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 93 EE FA FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xee
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 2ch]
        push eax
        push 0
        push 404h
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
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
