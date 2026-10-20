// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DF07F .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_004df07f_004DF07F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10ch
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 28: je 0x4df0b9
        __asm _emit 0x74
        __asm _emit 0x28
        push 1
        push 100h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 C5 43 FC FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4df0b9
        __asm _emit 0x75
        __asm _emit 0x14
        push 2a6h
        push 677f28h
        ; Exact mapped bytes E8 8C 9C 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4df0b9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CC: jne 0x4df08b
        __asm _emit 0x75
        __asm _emit 0xcc
        push -1
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 78 43 FC FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x43
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4df0e2
        __asm _emit 0x75
        __asm _emit 0x14
        push 2a7h
        push 677f28h
        ; Exact mapped bytes E8 63 9C 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4df0e2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x4df0bf
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 10: jne 0x4df104
        __asm _emit 0x75
        __asm _emit 0x10
        lea edx, [ebp - 108h]
        mov dword ptr [ebp - 4], edx
        mov dword ptr [ebp + 10h], 104h
        ; Exact mapped bytes 66 8B 45 10: mov ax, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 5A 9C F7 FF: call 0x458d70
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x9c
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x4df130
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 16 59 06 00: call 0x544a44
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x59
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 2B: jmp 0x4df15b
        __asm _emit 0xeb
        __asm _emit 0x2b
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 15: jne 0x4df14b
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x4df155
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov eax, dword ptr [ebp - 10ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
