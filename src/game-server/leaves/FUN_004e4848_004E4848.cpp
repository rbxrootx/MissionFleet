// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E4848 .. +0x111 bytes.
extern "C" __declspec(naked) void FUN_004e4848_004E4848() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 10 6A 01 00: call 0x4fb26a
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 4B: jne 0x4e48ae
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 14: je 0x4e4880
        __asm _emit 0x74
        __asm _emit 0x14
        push 124h
        push 5c7b7ch
        ; Exact mapped bytes E8 85 01 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e4880
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4e4863
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 14: je 0x4e48a3
        __asm _emit 0x74
        __asm _emit 0x14
        push 125h
        push 5c7b7ch
        ; Exact mapped bytes E8 62 01 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e48a3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4e4886
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x4e4952
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4e48cb
        __asm _emit 0x7d
        __asm _emit 0x14
        push 129h
        push 5c7b7ch
        ; Exact mapped bytes E8 3A 01 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e48cb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4e48ae
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x4e48ee
        __asm _emit 0x7d
        __asm _emit 0x14
        push 12ah
        push 5c7b7ch
        ; Exact mapped bytes E8 17 01 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e48ee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4e48d1
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 7E 14: jle 0x4e4916
        __asm _emit 0x7e
        __asm _emit 0x14
        push 12bh
        push 5c7b7ch
        ; Exact mapped bytes E8 EF 00 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e4916
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4e48f4
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
        ; Exact mapped bytes E8 22 B5 FE FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e494c
        __asm _emit 0x75
        __asm _emit 0x14
        push 12ch
        push 5c7b7ch
        ; Exact mapped bytes E8 B9 00 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e494c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x4e491c
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
