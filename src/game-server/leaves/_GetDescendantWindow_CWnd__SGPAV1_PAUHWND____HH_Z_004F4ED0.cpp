// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F4ED0 .. +0xC1 bytes.
extern "C" __declspec(naked) void _GetDescendantWindow_CWnd__SGPAV1_PAUHWND____HH_Z_004F4ED0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 D8 28 5E 00: call dword ptr [0x5e28d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 55: je 0x4f4f42
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 E0 26 5E 00: call dword ptr [0x5e26e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x4f4f1a
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 C4 FF FF FF: call 0x4f4ed0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 05: je 0x4f4f1a
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 71: jmp 0x4f4f8b
        __asm _emit 0xeb
        __asm _emit 0x71
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 0B: jne 0x4f4f2b
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 56 CA FF FF: call 0x4f197f
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 60: jmp 0x4f4f8b
        __asm _emit 0xeb
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 D0 CA FF FF: call 0x4f1a04
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 05: je 0x4f4f42
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 49: jmp 0x4f4f8b
        __asm _emit 0xeb
        __asm _emit 0x49
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 E0 26 5E 00: call dword ptr [0x5e26e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 11: jmp 0x4f4f62
        __asm _emit 0xeb
        __asm _emit 0x11
        push 2
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 64 82 F9 FF: call 0x48d1c0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x82
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 21: je 0x4f4f89
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 57 FF FF FF: call 0x4f4ed0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 05: je 0x4f4f87
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 04: jmp 0x4f4f8b
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB C8: jmp 0x4f4f51
        __asm _emit 0xeb
        __asm _emit 0xc8
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
