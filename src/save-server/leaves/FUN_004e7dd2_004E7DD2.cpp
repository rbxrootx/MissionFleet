// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E7DD2 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_004e7dd2_004E7DD2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4e7dfb
        __asm _emit 0x75
        __asm _emit 0x14
        push 30ch
        push 6733e0h
        ; Exact mapped bytes E8 4A 0F 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x0f
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7dfb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4e7dde
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 38 B6 68 00: call dword ptr [0x68b638]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 74 6C: je 0x4e7e93
        __asm _emit 0x74
        __asm _emit 0x6c
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 1F A0 04 00: call 0x531e4e
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 9C B4 68 00: call dword ptr [0x68b49c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e7e58
        __asm _emit 0x75
        __asm _emit 0x14
        push 311h
        push 6733e0h
        ; Exact mapped bytes E8 ED 0E 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x0e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7e58
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D1: jne 0x4e7e2f
        __asm _emit 0x75
        __asm _emit 0xd1
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 00 B6 68 00: call dword ptr [0x68b600]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e7e8d
        __asm _emit 0x75
        __asm _emit 0x14
        push 312h
        push 6733e0h
        ; Exact mapped bytes E8 B8 0E 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x0e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7e8d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CB: jne 0x4e7e5e
        __asm _emit 0x75
        __asm _emit 0xcb
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
