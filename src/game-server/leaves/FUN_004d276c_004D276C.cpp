// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D276C .. +0xF4 bytes.
extern "C" __declspec(naked) void FUN_004d276c_004D276C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 2bh
        push 5d0e18h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 D8 89 02 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 6ch]
        and edx, 2000h
        test edx, edx
        ; Exact mapped bytes 75 11: jne 0x4d27a9
        __asm _emit 0x75
        __asm _emit 0x11
        push 2ch
        push 5d0e18h
        ; Exact mapped bytes E8 5C 22 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x22
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d27a9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4d2788
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 6ch]
        and edx, 40000h
        test edx, edx
        ; Exact mapped bytes 75 11: jne 0x4d27d0
        __asm _emit 0x75
        __asm _emit 0x11
        push 2dh
        push 5d0e18h
        ; Exact mapped bytes E8 35 22 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x22
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d27d0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4d27af
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0a0h], 0
        ; Exact mapped bytes 75 11: jne 0x4d27f3
        __asm _emit 0x75
        __asm _emit 0x11
        push 2eh
        push 5d0e18h
        ; Exact mapped bytes E8 12 22 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x22
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d27f3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4d27d6
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0a4h], 0
        ; Exact mapped bytes 75 11: jne 0x4d2816
        __asm _emit 0x75
        __asm _emit 0x11
        push 2fh
        push 5d0e18h
        ; Exact mapped bytes E8 EF 21 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x21
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d2816
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4d27f9
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 33 DE 01 00: call 0x4f0657
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 60h], eax
        mov eax, dword ptr [ebp - 8]
        add eax, 5ch
        push eax
        ; Exact mapped bytes E8 E2 63 FF FF: call 0x4c8c18
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8B DE 01 00: call 0x4f06cc
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 08: je 0x4d284f
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x4d2856
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 2
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
