// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E3D1E .. +0x111 bytes.
extern "C" __declspec(naked) void FUN_004e3d1e_004E3D1E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3A 75 01 00: call 0x4fb26a
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 4B: jne 0x4e3d84
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 14: je 0x4e3d56
        __asm _emit 0x74
        __asm _emit 0x14
        push 14dh
        push 5c7b08h
        ; Exact mapped bytes E8 AF 0C 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e3d56
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4e3d39
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 14: je 0x4e3d79
        __asm _emit 0x74
        __asm _emit 0x14
        push 14eh
        push 5c7b08h
        ; Exact mapped bytes E8 8C 0C 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e3d79
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4e3d5c
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x4e3e28
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4e3da1
        __asm _emit 0x7d
        __asm _emit 0x14
        push 152h
        push 5c7b08h
        ; Exact mapped bytes E8 64 0C 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e3da1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4e3d84
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x4e3dc4
        __asm _emit 0x7d
        __asm _emit 0x14
        push 153h
        push 5c7b08h
        ; Exact mapped bytes E8 41 0C 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e3dc4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4e3da7
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 7E 14: jle 0x4e3dec
        __asm _emit 0x7e
        __asm _emit 0x14
        push 154h
        push 5c7b08h
        ; Exact mapped bytes E8 19 0C 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e3dec
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4e3dca
        __asm _emit 0x75
        __asm _emit 0xd8
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        shl edx, 2
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 4C C0 FE FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e3e22
        __asm _emit 0x75
        __asm _emit 0x14
        push 155h
        push 5c7b08h
        ; Exact mapped bytes E8 E3 0B 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x0b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e3e22
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x4e3df2
        __asm _emit 0x75
        __asm _emit 0xca
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
