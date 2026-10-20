// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00500E67 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_00500e67_00500E67() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 11: je 0x500e8d
        __asm _emit 0x74
        __asm _emit 0x11
        push 6dh
        push 5c6db0h
        ; Exact mapped bytes E8 78 3B 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x500e8d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x500e73
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 11: je 0x500ead
        __asm _emit 0x74
        __asm _emit 0x11
        push 6eh
        push 5c6db0h
        ; Exact mapped bytes E8 58 3B 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x500ead
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x500e93
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x500ebd
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 57: jmp 0x500f14
        __asm _emit 0xeb
        __asm _emit 0x57
        push 1
        ; Exact mapped bytes E8 72 FE FF FF: call 0x500d36
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 11: jne 0x500ede
        __asm _emit 0x75
        __asm _emit 0x11
        push 73h
        push 5c6db0h
        ; Exact mapped bytes E8 27 3B 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x500ede
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x500ec7
        __asm _emit 0x75
        __asm _emit 0xe3
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4D C3 FF FF: call 0x4fd24a
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov eax, 1
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
