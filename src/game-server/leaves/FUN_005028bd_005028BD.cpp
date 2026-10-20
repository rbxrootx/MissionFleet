// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005028BD .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_005028bd_005028BD() {
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
        ; Exact mapped bytes 75 14: jne 0x5028e6
        __asm _emit 0x75
        __asm _emit 0x14
        push 2a0h
        push 5c6db0h
        ; Exact mapped bytes E8 1F 21 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5028e6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5028c9
        __asm _emit 0x75
        __asm _emit 0xdd
        push 5c6f3ch
        ; Exact mapped bytes FF 15 3C 24 5E 00: call dword ptr [0x5e243c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x502914
        __asm _emit 0x75
        __asm _emit 0x14
        push 2a3h
        push 5c6db0h
        ; Exact mapped bytes E8 F1 20 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x502914
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5028fa
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 0ch], 0
        push 5c6f48h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 13: je 0x50294c
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 15: jmp 0x502961
        __asm _emit 0xeb
        __asm _emit 0x15
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0F: je 0x502961
        __asm _emit 0x74
        __asm _emit 0x0f
        mov dword ptr [ebp - 0ch], 0ffffffffh
        push 78h
        ; Exact mapped bytes FF 15 7C 23 5E 00: call dword ptr [0x5e237c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
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
