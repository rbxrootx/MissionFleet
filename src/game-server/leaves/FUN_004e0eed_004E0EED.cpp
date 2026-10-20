// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E0EED .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_004e0eed_004E0EED() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
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
        ; Exact mapped bytes 75 14: jne 0x4e0f1e
        __asm _emit 0x75
        __asm _emit 0x14
        push 0deh
        push 5cb6b4h
        ; Exact mapped bytes E8 E7 3A 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x3a
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e0f1e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4e0ef9
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4e0f3e
        __asm _emit 0x75
        __asm _emit 0x14
        push 0dfh
        push 5cb6b4h
        ; Exact mapped bytes E8 C7 3A 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x3a
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e0f3e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4e0f24
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4e0f5e
        __asm _emit 0x75
        __asm _emit 0x14
        push 0e0h
        push 5cb6b4h
        ; Exact mapped bytes E8 A7 3A 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x3a
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e0f5e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e0f44
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 7A 01 00 00: call 0x4e10f2
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 99 80 FC FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x80
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        lea ecx, [ebp - 2ch]
        push ecx
        push 0
        push 406h
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 1ch]
        push eax
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
