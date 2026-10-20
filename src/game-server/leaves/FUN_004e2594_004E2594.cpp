// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E2594 .. +0x10E bytes.
extern "C" __declspec(naked) void FUN_004e2594_004E2594() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 8C 01 00: call 0x4fb26a
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 4B: jne 0x4e25fa
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 14: je 0x4e25cc
        __asm _emit 0x74
        __asm _emit 0x14
        push 13bh
        push 5c7a18h
        ; Exact mapped bytes E8 39 24 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e25cc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4e25af
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 14: je 0x4e25ef
        __asm _emit 0x74
        __asm _emit 0x14
        push 13ch
        push 5c7a18h
        ; Exact mapped bytes E8 16 24 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e25ef
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4e25d2
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x4e269b
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4e2617
        __asm _emit 0x7d
        __asm _emit 0x14
        push 140h
        push 5c7a18h
        ; Exact mapped bytes E8 EE 23 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e2617
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4e25fa
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x4e263a
        __asm _emit 0x7d
        __asm _emit 0x14
        push 141h
        push 5c7a18h
        ; Exact mapped bytes E8 CB 23 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e263a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4e261d
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 7E 14: jle 0x4e2662
        __asm _emit 0x7e
        __asm _emit 0x14
        push 142h
        push 5c7a18h
        ; Exact mapped bytes E8 A3 23 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e2662
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4e2640
        __asm _emit 0x75
        __asm _emit 0xd8
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 D9 D7 FE FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e2695
        __asm _emit 0x75
        __asm _emit 0x14
        push 143h
        push 5c7a18h
        ; Exact mapped bytes E8 70 23 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e2695
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CD: jne 0x4e2668
        __asm _emit 0x75
        __asm _emit 0xcd
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
