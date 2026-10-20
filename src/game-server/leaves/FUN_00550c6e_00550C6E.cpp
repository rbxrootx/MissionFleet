// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00550C6E .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_00550c6e_00550C6E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 5cf7d0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0B A4 FA FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa4
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x550c9a
        __asm _emit 0x75
        __asm _emit 0x11
        push 58h
        push 5cf7b8h
        ; Exact mapped bytes E8 6B 3D FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x3d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x550c9a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x550c78
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 11: je 0x550cba
        __asm _emit 0x74
        __asm _emit 0x11
        push 5ah
        push 5cf7b8h
        ; Exact mapped bytes E8 4B 3D FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x3d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x550cba
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x550ca0
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 50h
        ; Exact mapped bytes E8 93 73 F9 FF: call 0x4e8062
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x73
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1ch], edx
        push 5eh
        push 5cf7b8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 78 A4 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xa4
        __asm _emit 0xfa
        __asm _emit 0xff
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
