// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EE684 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_004ee684_004EE684() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 04: jne 0x4ee694
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 61: jmp 0x4ee6f5
        __asm _emit 0xeb
        __asm _emit 0x61
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4ee6ae
        __asm _emit 0x75
        __asm _emit 0x14
        push 290h
        push 5c4bd4h
        ; Exact mapped bytes E8 57 63 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee6ae
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4ee694
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 01 00 00: mov word ptr [ecx], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push -1
        mov ecx, dword ptr [ebp + 0ch]
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
        ; Exact mapped bytes 75 14: jne 0x4ee6ec
        __asm _emit 0x75
        __asm _emit 0x14
        push 295h
        push 5c4bd4h
        ; Exact mapped bytes E8 19 63 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee6ec
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x4ee6bc
        __asm _emit 0x75
        __asm _emit 0xca
        mov eax, dword ptr [ebp + 8]
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
