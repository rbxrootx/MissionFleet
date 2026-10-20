// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051A740 .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_0051a740_0051A740() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51a76b
        __asm _emit 0x75
        __asm _emit 0x14
        push 110h
        push 5ca2b4h
        ; Exact mapped bytes E8 9A A2 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51a76b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x51a749
        __asm _emit 0x75
        __asm _emit 0xd8
        lea edx, [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 78 27 5E 00: call dword ptr [0x5e2778]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp + 10h]
        and edx, 0ffffh
        shl edx, 10h
        or ecx, edx
        push ecx
        push 0
        push 366h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 7C 27 5E 00: call dword ptr [0x5e277c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push -10h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x51a7d0
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 1D: jmp 0x51a7ed
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp + 8], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0A: je 0x51a7ed
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 5C FF FF FF: je 0x51a749
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x51a7fc
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0ffffffffh
        ; Exact mapped bytes EB 06: jmp 0x51a802
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
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
