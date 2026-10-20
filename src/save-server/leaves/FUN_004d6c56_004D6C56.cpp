// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D6C56 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_004d6c56_004D6C56() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4d6c7a
        __asm _emit 0x75
        __asm _emit 0x14
        push 1abh
        push 672048h
        ; Exact mapped bytes E8 CB 20 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d6c7a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d6c60
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4d6c9a
        __asm _emit 0x75
        __asm _emit 0x14
        push 1ach
        push 672048h
        ; Exact mapped bytes E8 AB 20 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d6c9a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4d6c80
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 38h], 0
        ; Exact mapped bytes 75 21: jne 0x4d6cca
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 74 18: je 0x4d6cca
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 34h]
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 34h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 94 00 00 00: call dword ptr [eax + 0x94]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
