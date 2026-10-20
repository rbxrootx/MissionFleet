// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00472C90 .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_00472c90_00472C90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 98 89 68 00 03: cmp dword ptr [0x688998], 3
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 75 22: jne 0x472cbf
        __asm _emit 0x75
        __asm _emit 0x22
        cmp dword ptr [ebp + 8], 3f8h
        ; Exact mapped bytes 77 12: ja 0x472cb8
        __asm _emit 0x77
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes A3 84 89 68 00: mov dword ptr [0x688984], eax
        __asm _emit 0xa3
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 DE 00 00 00: jmp 0x472d96
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 D7 00 00 00: jmp 0x472d96
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 98 89 68 00 02: cmp dword ptr [0x688998], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 75 2F: jne 0x472cf7
        __asm _emit 0x75
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp + 8]
        add ecx, 0fh
        and ecx, 0fffffff0h
        mov dword ptr [ebp + 8], ecx
        cmp dword ptr [ebp + 8], 780h
        ; Exact mapped bytes 77 13: ja 0x472cf0
        __asm _emit 0x77
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 89 15 4C 02 68 00: mov dword ptr [0x68024c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x472d96
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x472d96
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 98 89 68 00 01: cmp dword ptr [0x688998], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x472d94
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 86 86 00 00 00: jbe 0x472d94
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 4]
        push eax
        ; Exact mapped bytes E8 D9 EC FF FF: call 0x4719f0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffh
        cmp ecx, 6
        ; Exact mapped bytes 7C 34: jl 0x472d5c
        __asm _emit 0x7c
        __asm _emit 0x34
        cmp dword ptr [ebp + 8], 3f8h
        ; Exact mapped bytes 77 29: ja 0x472d5a
        __asm _emit 0x77
        __asm _emit 0x29
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 66 00 00 00: call 0x472da0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x472d5a
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes A3 84 89 68 00: mov dword ptr [0x688984], eax
        __asm _emit 0xa3
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 98 89 68 00 03 00 00 00: mov dword ptr [0x688998], 3
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 3C: jmp 0x472d96
        __asm _emit 0xeb
        __asm _emit 0x3c
        ; Exact mapped bytes EB 38: jmp 0x472d94
        __asm _emit 0xeb
        __asm _emit 0x38
        mov ecx, dword ptr [ebp + 8]
        add ecx, 0fh
        and ecx, 0fffffff0h
        mov dword ptr [ebp + 8], ecx
        cmp dword ptr [ebp + 8], 780h
        ; Exact mapped bytes 77 23: ja 0x472d94
        __asm _emit 0x77
        __asm _emit 0x23
        ; Exact mapped bytes E8 FA 1C 00 00: call 0x474a70
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x472d94
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 89 15 4C 02 68 00: mov dword ptr [0x68024c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 98 89 68 00 02 00 00 00: mov dword ptr [0x688998], 2
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x472d96
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
