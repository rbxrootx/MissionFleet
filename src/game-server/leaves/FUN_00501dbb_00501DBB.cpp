// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00501DBB .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_00501dbb_00501DBB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x501de4
        __asm _emit 0x75
        __asm _emit 0x14
        push 1bfh
        push 5c6db0h
        ; Exact mapped bytes E8 21 2C 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x501de4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x501dc7
        __asm _emit 0x75
        __asm _emit 0xdd
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 69 3B 03 00: call 0x53595b
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 74 37: je 0x501e37
        __asm _emit 0x74
        __asm _emit 0x37
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 98 20 5E 00: call dword ptr [0x5e2098]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x501e31
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c3h
        push 5c6db0h
        ; Exact mapped bytes E8 D4 2B 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x2b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x501e31
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C9: jne 0x501e00
        __asm _emit 0x75
        __asm _emit 0xc9
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 37: je 0x501e77
        __asm _emit 0x74
        __asm _emit 0x37
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 98 20 5E 00: call dword ptr [0x5e2098]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x501e71
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c5h
        push 5c6db0h
        ; Exact mapped bytes E8 94 2B 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x2b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x501e71
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C9: jne 0x501e40
        __asm _emit 0x75
        __asm _emit 0xc9
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
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
