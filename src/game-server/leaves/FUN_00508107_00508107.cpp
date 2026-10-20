// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00508107 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_00508107_00508107() {
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
        ; Exact mapped bytes E8 54 56 03 00: call 0x53d773
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 05: jne 0x508129
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 7C: jmp 0x5081a5
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 11: je 0x508143
        __asm _emit 0x74
        __asm _emit 0x11
        push 58h
        push 5cb374h
        ; Exact mapped bytes E8 C2 C8 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x508143
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x508129
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3A: je 0x508191
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 31: je 0x508191
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 0D 4F 00 00: call 0x50d07c
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 75 11: jne 0x508189
        __asm _emit 0x75
        __asm _emit 0x11
        push 5fh
        push 5cb374h
        ; Exact mapped bytes E8 7C C8 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x508189
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x50816f
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes EB 12: jmp 0x5081a3
        __asm _emit 0xeb
        __asm _emit 0x12
        push 5cb3a0h
        push 5cb3d0h
        ; Exact mapped bytes E8 75 7A FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x7a
        __asm _emit 0xfc
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
