// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E0A1B .. +0xFC bytes.
extern "C" __declspec(naked) void FUN_004e0a1b_004E0A1B() {
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
        ; Exact mapped bytes 75 14: jne 0x4e0a4c
        __asm _emit 0x75
        __asm _emit 0x14
        push 83h
        push 5cb6b4h
        ; Exact mapped bytes E8 B9 3F 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x3f
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e0a4c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4e0a27
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4e0a6c
        __asm _emit 0x75
        __asm _emit 0x14
        push 84h
        push 5cb6b4h
        ; Exact mapped bytes E8 99 3F 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x3f
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e0a6c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4e0a52
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4e0a8c
        __asm _emit 0x75
        __asm _emit 0x14
        push 85h
        push 5cb6b4h
        ; Exact mapped bytes E8 79 3F 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x3f
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e0a8c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e0a72
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 06: je 0x4e0a9e
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 20: jne 0x4e0abe
        __asm _emit 0x75
        __asm _emit 0x20
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 06: jne 0x4e0aaa
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 14: je 0x4e0abe
        __asm _emit 0x74
        __asm _emit 0x14
        push 88h
        push 5cb6b4h
        ; Exact mapped bytes E8 47 3F 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x3f
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e0abe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CE: jne 0x4e0a92
        __asm _emit 0x75
        __asm _emit 0xce
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 1A 06 00 00: call 0x4e10f2
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 12: je 0x4e0af0
        __asm _emit 0x74
        __asm _emit 0x12
        push 10h
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 33 85 FC FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 2ch]
        push eax
        push 0
        push 404h
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
