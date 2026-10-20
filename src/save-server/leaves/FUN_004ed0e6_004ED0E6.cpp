// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED0E6 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_004ed0e6_004ED0E6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D5 00 04 00: call 0x52d1d3
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 05: jne 0x4ed108
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 7C: jmp 0x4ed184
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 11: je 0x4ed122
        __asm _emit 0x74
        __asm _emit 0x11
        push 5bh
        push 677b4ch
        ; Exact mapped bytes E8 23 BC 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xbc
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ed122
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4ed108
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3A: je 0x4ed170
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 31: je 0x4ed170
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 DE 4E 00 00: call 0x4f202c
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 75 11: jne 0x4ed168
        __asm _emit 0x75
        __asm _emit 0x11
        push 62h
        push 677b4ch
        ; Exact mapped bytes E8 DD BB 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ed168
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4ed14e
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes EB 12: jmp 0x4ed182
        __asm _emit 0xeb
        __asm _emit 0x12
        push 677b78h
        push 677ba8h
        ; Exact mapped bytes E8 96 34 FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x34
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
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
