// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DD55F .. +0xAB bytes.
extern "C" __declspec(naked) void FUN_004dd55f_004DD55F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4dd590
        __asm _emit 0x75
        __asm _emit 0x14
        push 106h
        push 5c6d18h
        ; Exact mapped bytes E8 75 74 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dd590
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4dd56b
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 15: jne 0x4dd5b7
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AA D4 FF FF: call 0x4daa54
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 04: jne 0x4dd5b7
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4A: jmp 0x4dd601
        __asm _emit 0xeb
        __asm _emit 0x4a
        push 1
        mov ecx, dword ptr [ebp + 0ch]
        shl ecx, 2
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 8D 28 FF FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4dd5e1
        __asm _emit 0x75
        __asm _emit 0x14
        push 113h
        push 5c6d28h
        ; Exact mapped bytes E8 24 74 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dd5e1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D0: jne 0x4dd5b7
        __asm _emit 0x75
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 1211h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
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
