// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BE10E .. +0x111 bytes.
extern "C" __declspec(naked) void FUN_004be10e_004BE10E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A C2 01 00: call 0x4da36a
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 4B: jne 0x4be174
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 14: je 0x4be146
        __asm _emit 0x74
        __asm _emit 0x14
        push 14dh
        push 674560h
        ; Exact mapped bytes E8 FF AB 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xab
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4be146
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4be129
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 14: je 0x4be169
        __asm _emit 0x74
        __asm _emit 0x14
        push 14eh
        push 674560h
        ; Exact mapped bytes E8 DC AB 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xab
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4be169
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4be14c
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x4be218
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4be191
        __asm _emit 0x7d
        __asm _emit 0x14
        push 152h
        push 674560h
        ; Exact mapped bytes E8 B4 AB 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xab
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4be191
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4be174
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x4be1b4
        __asm _emit 0x7d
        __asm _emit 0x14
        push 153h
        push 674560h
        ; Exact mapped bytes E8 91 AB 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xab
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4be1b4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4be197
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 7E 14: jle 0x4be1dc
        __asm _emit 0x7e
        __asm _emit 0x14
        push 154h
        push 674560h
        ; Exact mapped bytes E8 69 AB 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xab
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4be1dc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4be1ba
        __asm _emit 0x75
        __asm _emit 0xd8
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        shl edx, 2
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 6C 52 FE FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4be212
        __asm _emit 0x75
        __asm _emit 0x14
        push 155h
        push 674560h
        ; Exact mapped bytes E8 33 AB 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xab
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4be212
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x4be1e2
        __asm _emit 0x75
        __asm _emit 0xca
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
