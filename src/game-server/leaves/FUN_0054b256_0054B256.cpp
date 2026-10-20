// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054B256 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_0054b256_0054B256() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x54b269
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5E: jmp 0x54b2c7
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        shl ecx, 1
        push ecx
        ; Exact mapped bytes FF 15 80 2A 5E 00: call dword ptr [0x5e2a80]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 36: je 0x54b2c4
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        push 0
        ; Exact mapped bytes FF 15 DC 23 5E 00: call dword ptr [0x5e23dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54b2be
        __asm _emit 0x75
        __asm _emit 0x14
        push 9bh
        push 5ccafch
        ; Exact mapped bytes E8 47 97 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54b2be
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x54b28e
        __asm _emit 0x75
        __asm _emit 0xca
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
