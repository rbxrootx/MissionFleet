// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00463F64 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_00463f64_00463F64() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 38h
        mov dword ptr [ebp - 8], eax
        push 0feh
        push 67cd04h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 D7 62 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x62
        __asm _emit 0x07
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x463fa3
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ffh
        push 67cd04h
        ; Exact mapped bytes E8 A2 4D 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x4d
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x463fa3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x463f89
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 640d30h
        mov ecx, dword ptr [ebp - 8]
        add ecx, 34h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 34h]
        push ecx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 14: jne 0x463fe0
        __asm _emit 0x75
        __asm _emit 0x14
        push 103h
        push 67cd04h
        ; Exact mapped bytes E8 65 4D 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x4d
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x463fe0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x463fc4
        __asm _emit 0x75
        __asm _emit 0xde
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
