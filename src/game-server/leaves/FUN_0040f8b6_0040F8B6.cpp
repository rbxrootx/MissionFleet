// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040F8B6 .. +0x1B4 bytes.
extern "C" __declspec(naked) void FUN_0040f8b6_0040F8B6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 13 AB FF FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 54 01 00 00: je 0x40fa3e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DE 46 FF FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 501h
        ; Exact mapped bytes 74 12: je 0x40f910
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 0ch], 502h
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x40f9f3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 11 01 00 00: jmp 0x40fa21
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d78h]
        cmp dword ptr [ecx + 0fch], 2
        ; Exact mapped bytes 75 33: jne 0x40f955
        __asm _emit 0x75
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d78h]
        mov ecx, dword ptr [eax + 104h]
        add ecx, 1
        mov esi, esp
        push ecx
        push 5a0d4ch
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 90 8E 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x8e
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x40f9f1
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d78h]
        cmp dword ptr [ecx + 0fch], 4
        ; Exact mapped bytes 75 3D: jne 0x40f9a4
        __asm _emit 0x75
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d78h]
        add eax, 20h
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d78h]
        mov eax, dword ptr [edx + 104h]
        add eax, 1
        push eax
        push 5a0d78h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 10h
        cmp esi, esp
        ; Exact mapped bytes E8 3E 8E 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x8e
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 4D: jmp 0x40f9f1
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d78h]
        cmp dword ptr [eax + 0fch], 8
        ; Exact mapped bytes 75 3B: jne 0x40f9f1
        __asm _emit 0x75
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d78h]
        add edx, 20h
        mov esi, esp
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d78h]
        mov edx, dword ptr [ecx + 104h]
        add edx, 1
        push edx
        push 5a0da0h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 10h
        cmp esi, esp
        ; Exact mapped bytes E8 EF 8D 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 49: jmp 0x40fa3c
        __asm _emit 0xeb
        __asm _emit 0x49
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0cach
        ; Exact mapped bytes E8 F5 E5 0D 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe5
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, esp
        push eax
        push 5a0dc8h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 C1 8D 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x40fa3c
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov esi, esp
        push 5a0de0h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 A4 8D 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x40fa59
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov esi, esp
        push 5a0dfch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 87 8D 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x00
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 7C 8D 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
