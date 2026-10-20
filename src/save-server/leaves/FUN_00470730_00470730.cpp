// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00470730 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_00470730_00470730() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        cmp dword ptr [ecx], 0e06d7363h
        ; Exact mapped bytes 75 1E: jne 0x47075e
        __asm _emit 0x75
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        cmp dword ptr [eax + 10h], 3
        ; Exact mapped bytes 75 13: jne 0x47075e
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        cmp dword ptr [edx + 14h], 19930520h
        ; Exact mapped bytes 75 05: jne 0x47075e
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 72 ED FF FF: call 0x46f4d0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D C4 72 68 00 00: cmp dword ptr [0x6872c4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1E: je 0x470785
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes A1 C4 72 68 00: mov eax, dword ptr [0x6872c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 DE AD 00 00: call 0x47b550
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x470785
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 C4 72 68 00: call dword ptr [0x6872c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x470787
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
