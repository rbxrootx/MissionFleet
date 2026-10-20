// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049E820 .. +0xAB bytes.
extern "C" __declspec(naked) void FUN_0049e820_0049E820() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 2A: je 0x49e856
        __asm _emit 0x74
        __asm _emit 0x2a
        push 1
        mov eax, dword ptr [ebp + 10h]
        shl eax, 4
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 18 16 03 00: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x16
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x49e856
        __asm _emit 0x75
        __asm _emit 0x14
        push 3b0h
        push 5cbe8ch
        ; Exact mapped bytes E8 AF 61 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x61
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49e856
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x49e826
        __asm _emit 0x75
        __asm _emit 0xca
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 2A: je 0x49e88c
        __asm _emit 0x74
        __asm _emit 0x2a
        push 1
        mov eax, dword ptr [ebp + 10h]
        shl eax, 4
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 E2 15 03 00: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x49e88c
        __asm _emit 0x75
        __asm _emit 0x14
        push 3b2h
        push 5cbe8ch
        ; Exact mapped bytes E8 79 61 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x61
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49e88c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x49e85c
        __asm _emit 0x75
        __asm _emit 0xca
        ; Exact mapped bytes EB 12: jmp 0x49e8a6
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 8]
        add eax, 10h
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 10h
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 10h]
        sub eax, 1
        mov dword ptr [ebp + 10h], eax
        test edx, edx
        ; Exact mapped bytes 74 0E: je 0x49e8c4
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 88 ED FF FF: call 0x49d64a
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB D0: jmp 0x49e894
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
