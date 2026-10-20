// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A2184 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_004a2184_004A2184() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 2A: je 0x4a21ba
        __asm _emit 0x74
        __asm _emit 0x2a
        push 1
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 2
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C4 12 00 00: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a21ba
        __asm _emit 0x75
        __asm _emit 0x14
        push 3a6h
        push 671534h
        ; Exact mapped bytes E8 8B 6B 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6b
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a21ba
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x4a218a
        __asm _emit 0x75
        __asm _emit 0xca
        ; Exact mapped bytes EB 09: jmp 0x4a21cb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        mov dword ptr [ebp + 0ch], edx
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x4a21e7
        __asm _emit 0x74
        __asm _emit 0x0c
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B 42 02 00: call 0x4c6460
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB DB: jmp 0x4a21c2
        __asm _emit 0xeb
        __asm _emit 0xdb
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
