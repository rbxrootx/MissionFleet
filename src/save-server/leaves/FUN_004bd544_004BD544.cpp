// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BD544 .. +0x110 bytes.
extern "C" __declspec(naked) void FUN_004bd544_004BD544() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 CE 01 00: call 0x4da36a
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 4B: jne 0x4bd5aa
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 14: je 0x4bd57c
        __asm _emit 0x74
        __asm _emit 0x14
        push 14dh
        push 6744e8h
        ; Exact mapped bytes E8 C9 B7 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bd57c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4bd55f
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 14: je 0x4bd59f
        __asm _emit 0x74
        __asm _emit 0x14
        push 14eh
        push 6744e8h
        ; Exact mapped bytes E8 A6 B7 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bd59f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4bd582
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x4bd64d
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4bd5c7
        __asm _emit 0x7d
        __asm _emit 0x14
        push 152h
        push 6744e8h
        ; Exact mapped bytes E8 7E B7 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bd5c7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4bd5aa
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x4bd5ea
        __asm _emit 0x7d
        __asm _emit 0x14
        push 153h
        push 6744e8h
        ; Exact mapped bytes E8 5B B7 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bd5ea
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4bd5cd
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 7E 14: jle 0x4bd612
        __asm _emit 0x7e
        __asm _emit 0x14
        push 154h
        push 6744e8h
        ; Exact mapped bytes E8 33 B7 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bd612
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4bd5f0
        __asm _emit 0x75
        __asm _emit 0xd8
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        shl edx, 1
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 37 5E FE FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4bd647
        __asm _emit 0x75
        __asm _emit 0x14
        push 155h
        push 6744e8h
        ; Exact mapped bytes E8 FE B6 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xb6
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bd647
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CB: jne 0x4bd618
        __asm _emit 0x75
        __asm _emit 0xcb
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
