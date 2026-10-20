// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E7B50 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_004e7b50_004E7B50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 37 01 00: call 0x4fb26a
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 48: jne 0x4e7bb3
        __asm _emit 0x75
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 14: je 0x4e7b88
        __asm _emit 0x74
        __asm _emit 0x14
        push 183h
        push 5c8f3ch
        ; Exact mapped bytes E8 7D CE 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xce
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7b88
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4e7b6b
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 14: je 0x4e7bab
        __asm _emit 0x74
        __asm _emit 0x14
        push 184h
        push 5c8f3ch
        ; Exact mapped bytes E8 5A CE 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xce
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7bab
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4e7b8e
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes EB 5C: jmp 0x4e7c0f
        __asm _emit 0xeb
        __asm _emit 0x5c
        push 1
        push 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 93 82 FE FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e7bdb
        __asm _emit 0x75
        __asm _emit 0x14
        push 189h
        push 5c8f3ch
        ; Exact mapped bytes E8 2A CE 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xce
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7bdb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x4e7bb3
        __asm _emit 0x75
        __asm _emit 0xd2
        push 1
        push 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes E8 65 82 FE FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e7c09
        __asm _emit 0x75
        __asm _emit 0x14
        push 18ah
        push 5c8f3ch
        ; Exact mapped bytes E8 FC CD 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xcd
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7c09
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x4e7be1
        __asm _emit 0x75
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
