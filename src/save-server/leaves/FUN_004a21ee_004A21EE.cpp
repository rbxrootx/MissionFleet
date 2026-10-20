// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A21EE .. +0xAB bytes.
extern "C" __declspec(naked) void FUN_004a21ee_004A21EE() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 2A: je 0x4a2224
        __asm _emit 0x74
        __asm _emit 0x2a
        push 1
        mov eax, dword ptr [ebp + 10h]
        shl eax, 2
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 5A 12 00 00: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a2224
        __asm _emit 0x75
        __asm _emit 0x14
        push 3b3h
        push 671534h
        ; Exact mapped bytes E8 21 6B 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x6b
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a2224
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x4a21f4
        __asm _emit 0x75
        __asm _emit 0xca
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 2A: je 0x4a225a
        __asm _emit 0x74
        __asm _emit 0x2a
        push 1
        mov eax, dword ptr [ebp + 10h]
        shl eax, 2
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 24 12 00 00: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a225a
        __asm _emit 0x75
        __asm _emit 0x14
        push 3b5h
        push 671534h
        ; Exact mapped bytes E8 EB 6A 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x6a
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a225a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x4a222a
        __asm _emit 0x75
        __asm _emit 0xca
        ; Exact mapped bytes EB 12: jmp 0x4a2274
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 10h]
        sub eax, 1
        mov dword ptr [ebp + 10h], eax
        test edx, edx
        ; Exact mapped bytes 74 0E: je 0x4a2292
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 56 A8 02 00: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB D0: jmp 0x4a2262
        __asm _emit 0xeb
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
