// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E5F76 .. +0x111 bytes.
extern "C" __declspec(naked) void FUN_004e5f76_004E5F76() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E2 52 01 00: call 0x4fb26a
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 4B: jne 0x4e5fdc
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 14: je 0x4e5fae
        __asm _emit 0x74
        __asm _emit 0x14
        push 13dh
        push 5c7c28h
        ; Exact mapped bytes E8 57 EA 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e5fae
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4e5f91
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 14: je 0x4e5fd1
        __asm _emit 0x74
        __asm _emit 0x14
        push 13eh
        push 5c7c28h
        ; Exact mapped bytes E8 34 EA 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e5fd1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4e5fb4
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x4e6080
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4e5ff9
        __asm _emit 0x7d
        __asm _emit 0x14
        push 142h
        push 5c7c28h
        ; Exact mapped bytes E8 0C EA 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e5ff9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4e5fdc
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x4e601c
        __asm _emit 0x7d
        __asm _emit 0x14
        push 143h
        push 5c7c28h
        ; Exact mapped bytes E8 E9 E9 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e601c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4e5fff
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 7E 14: jle 0x4e6044
        __asm _emit 0x7e
        __asm _emit 0x14
        push 144h
        push 5c7c28h
        ; Exact mapped bytes E8 C1 E9 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e6044
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4e6022
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
        ; Exact mapped bytes E8 F4 9D FE FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e607a
        __asm _emit 0x75
        __asm _emit 0x14
        push 145h
        push 5c7c28h
        ; Exact mapped bytes E8 8B E9 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e607a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x4e604a
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
