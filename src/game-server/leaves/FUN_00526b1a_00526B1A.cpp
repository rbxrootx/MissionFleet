// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00526B1A .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_00526b1a_00526B1A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 22 F2 00 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18h
        ; Exact mapped bytes E8 F8 EA 00 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 28h
        ; Exact mapped bytes E8 0C F2 00 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 38h
        ; Exact mapped bytes E8 E2 EA 00 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 5822b8h
        push 0
        push 10h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 F0 92 FA FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x526b7b
        __asm _emit 0x75
        __asm _emit 0x11
        push 5bh
        push 5c8e54h
        ; Exact mapped bytes E8 8A DE 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x526b7b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x526b59
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 00 00 00: call 0x526bad
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 C8 F4 00 00: call 0x536060
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
