// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E61A7 .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_004e61a7_004E61A7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4e61d0
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d6h
        push 6733e0h
        ; Exact mapped bytes E8 75 2B 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x2b
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e61d0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4e61b3
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 74 1A: je 0x4e61fe
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 74 14: je 0x4e61fe
        __asm _emit 0x74
        __asm _emit 0x14
        push 0d7h
        push 6733e0h
        ; Exact mapped bytes E8 47 2B 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x2b
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e61fe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x4e61d6
        __asm _emit 0x75
        __asm _emit 0xd2
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 74 14: je 0x4e622d
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 B4 B5 68 00: call dword ptr [0x68b5b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 31: je 0x4e6267
        __asm _emit 0x74
        __asm _emit 0x31
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1E: je 0x4e625a
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 B4 B5 68 00: call dword ptr [0x68b5b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4e625a
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 07: jmp 0x4e6261
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
