// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F9B74 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_004f9b74_004F9B74() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        ; Exact mapped bytes E8 25 B9 04 00: call 0x5454a4
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 74 16: je 0x4f9b9b
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes E8 1A B9 04 00: call 0x5454a4
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [eax + 10h]
        push eax
        push 5c6120h
        ; Exact mapped bytes E8 7D 60 FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E8 D0 31 00 00: call 0x4fcd70
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes E8 E8 31 00 00: call 0x4fcd8f
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 74: jne 0x4f9c21
        __asm _emit 0x75
        __asm _emit 0x74
        mov ecx, 5de7b4h
        ; Exact mapped bytes E8 69 9E 04 00: call 0x543a20
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 61: je 0x4f9c21
        __asm _emit 0x74
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0cch], 0
        ; Exact mapped bytes 74 55: je 0x4f9c21
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0cch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0cch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 60: call dword ptr [eax + 0x60]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x4f9c0d
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 07: jmp 0x4f9c14
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0cch], 0
        ; Exact mapped bytes 83 3D 4C EB 5D 00 00: cmp dword ptr [0x5deb4c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x4f9c3b
        __asm _emit 0x74
        __asm _emit 0x11
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 4C EB 5D 00: mov ecx, dword ptr [0x5deb4c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 F6 EC 04 00: call 0x548931
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
