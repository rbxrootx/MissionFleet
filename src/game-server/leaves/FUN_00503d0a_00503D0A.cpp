// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00503D0A .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_00503d0a_00503D0A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 14: je 0x503d33
        __asm _emit 0x74
        __asm _emit 0x14
        push 460h
        push 5c6db0h
        ; Exact mapped bytes E8 D2 0C 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x503d33
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x503d16
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x503d43
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 48: jmp 0x503d8b
        __asm _emit 0xeb
        __asm _emit 0x48
        push 1
        ; Exact mapped bytes E8 89 FE FF FF: call 0x503bd3
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x503d67
        __asm _emit 0x75
        __asm _emit 0x14
        push 464h
        push 5c6db0h
        ; Exact mapped bytes E8 9E 0C 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x503d67
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x503d4d
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 94 FF FF: call 0x4fd24a
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
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
