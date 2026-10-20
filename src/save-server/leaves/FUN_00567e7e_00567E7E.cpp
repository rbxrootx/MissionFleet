// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00567E7E .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_00567e7e_00567E7E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4E 5D FD FF: call 0x53dbde
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x5d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 26: je 0x567ebf
        __asm _emit 0x74
        __asm _emit 0x26
        push -1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        ; Exact mapped bytes E8 9B B5 F3 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xb5
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x567ebf
        __asm _emit 0x75
        __asm _emit 0x14
        push 226h
        push 67aea0h
        ; Exact mapped bytes E8 86 0E FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x0e
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x567ebf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CB: jne 0x567e90
        __asm _emit 0x75
        __asm _emit 0xcb
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 74 28: je 0x567ef6
        __asm _emit 0x74
        __asm _emit 0x28
        push 0
        push 18h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 34h]
        push eax
        ; Exact mapped bytes E8 88 B5 F3 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xb5
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x567ef6
        __asm _emit 0x75
        __asm _emit 0x14
        push 228h
        push 67aea0h
        ; Exact mapped bytes E8 4F 0E FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x0e
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x567ef6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C9: jne 0x567ec5
        __asm _emit 0x75
        __asm _emit 0xc9
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 28: je 0x567f2d
        __asm _emit 0x74
        __asm _emit 0x28
        push 1
        push 48h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 51 B5 F3 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xb5
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x567f2d
        __asm _emit 0x75
        __asm _emit 0x14
        push 22ah
        push 67aea0h
        ; Exact mapped bytes E8 18 0E FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x0e
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x567f2d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C9: jne 0x567efc
        __asm _emit 0x75
        __asm _emit 0xc9
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
