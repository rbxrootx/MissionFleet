// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BEC38 .. +0x111 bytes.
extern "C" __declspec(naked) void FUN_004bec38_004BEC38() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 B7 01 00: call 0x4da36a
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 4B: jne 0x4bec9e
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 14: je 0x4bec70
        __asm _emit 0x74
        __asm _emit 0x14
        push 124h
        push 6745d4h
        ; Exact mapped bytes E8 D5 A0 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bec70
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4bec53
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 14: je 0x4bec93
        __asm _emit 0x74
        __asm _emit 0x14
        push 125h
        push 6745d4h
        ; Exact mapped bytes E8 B2 A0 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bec93
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4bec76
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x4bed42
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4becbb
        __asm _emit 0x7d
        __asm _emit 0x14
        push 129h
        push 6745d4h
        ; Exact mapped bytes E8 8A A0 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4becbb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4bec9e
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x4becde
        __asm _emit 0x7d
        __asm _emit 0x14
        push 12ah
        push 6745d4h
        ; Exact mapped bytes E8 67 A0 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4becde
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4becc1
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 7E 14: jle 0x4bed06
        __asm _emit 0x7e
        __asm _emit 0x14
        push 12bh
        push 6745d4h
        ; Exact mapped bytes E8 3F A0 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bed06
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4bece4
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
        ; Exact mapped bytes E8 42 47 FE FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4bed3c
        __asm _emit 0x75
        __asm _emit 0x14
        push 12ch
        push 6745d4h
        ; Exact mapped bytes E8 09 A0 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bed3c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x4bed0c
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
