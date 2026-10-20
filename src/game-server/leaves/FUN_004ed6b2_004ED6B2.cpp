// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED6B2 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_004ed6b2_004ED6B2() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F5 37 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x37
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 05: jne 0x4ed6cf
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x4ed750
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E2 37 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x37
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 7C 0A: jl 0x4ed6e6
        __asm _emit 0x7c
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0C FF FF FF: call 0x4ed5f0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x4ed6f3
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5dcbech
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A 04 00 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BE 37 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x37
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 14: je 0x4ed715
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b3h
        push 5c4bd4h
        ; Exact mapped bytes E8 F0 72 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ed715
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4ed6f3
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 96 37 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x37
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 7C 22: jl 0x4ed74a
        __asm _emit 0x7c
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 89 37 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x37
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 14: je 0x4ed74a
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b4h
        push 5c4bd4h
        ; Exact mapped bytes E8 BB 72 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ed74a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CB: jne 0x4ed71b
        __asm _emit 0x75
        __asm _emit 0xcb
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
