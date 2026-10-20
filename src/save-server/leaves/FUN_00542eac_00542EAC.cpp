// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00542EAC .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_00542eac_00542EAC() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 83 3D 5C 70 68 00 00: cmp dword ptr [0x68705c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x542ecc
        __asm _emit 0x75
        __asm _emit 0x11
        push 7ah
        push 676978h
        ; Exact mapped bytes E8 79 5E FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x542ecc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x542eb2
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 11h
        ; Exact mapped bytes 72 11: jb 0x542ee9
        __asm _emit 0x72
        __asm _emit 0x11
        push 7bh
        push 676978h
        ; Exact mapped bytes E8 5C 5E FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x542ee9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x542ed2
        __asm _emit 0x75
        __asm _emit 0xe3
        ; Exact mapped bytes 83 3D 58 70 68 00 00: cmp dword ptr [0x687058], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 02: je 0x542efa
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 77: jmp 0x542f71
        __asm _emit 0xeb
        __asm _emit 0x77
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx*4 + 686e64h], 0
        ; Exact mapped bytes 75 14: jne 0x542f1b
        __asm _emit 0x75
        __asm _emit 0x14
        push 82h
        push 676978h
        ; Exact mapped bytes E8 2A 5E FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x542f1b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x542efa
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx*4 + 686e20h]
        sub edx, 1
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax*4 + 686e20h], edx
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx*4 + 686e20h], 0
        ; Exact mapped bytes 7D 14: jge 0x542f59
        __asm _emit 0x7d
        __asm _emit 0x14
        push 84h
        push 676978h
        ; Exact mapped bytes E8 EC 5D FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x542f59
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C2: jne 0x542f21
        __asm _emit 0x75
        __asm _emit 0xc2
        mov eax, dword ptr [ebp + 8]
        imul eax, eax, 18h
        add eax, 686ec0h
        push eax
        ; Exact mapped bytes FF 15 6C B9 68 00: call dword ptr [0x68b96c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
