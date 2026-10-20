// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049E7B6 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_0049e7b6_0049E7B6() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 2A: je 0x49e7ec
        __asm _emit 0x74
        __asm _emit 0x2a
        push 1
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 4
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 82 16 03 00: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x16
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x49e7ec
        __asm _emit 0x75
        __asm _emit 0x14
        push 3a3h
        push 5cbe8ch
        ; Exact mapped bytes E8 19 62 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x62
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49e7ec
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x49e7bc
        __asm _emit 0x75
        __asm _emit 0xca
        ; Exact mapped bytes EB 09: jmp 0x49e7fd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        add eax, 10h
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        mov dword ptr [ebp + 0ch], edx
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x49e819
        __asm _emit 0x74
        __asm _emit 0x0c
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 45 00 00: call 0x4a2d50
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB DB: jmp 0x49e7f4
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
