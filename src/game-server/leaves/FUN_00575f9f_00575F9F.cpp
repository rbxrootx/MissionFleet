// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00575F9F .. +0x143 bytes.
extern "C" __declspec(naked) void FUN_00575f9f_00575F9F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 11: je 0x575fc4
        __asm _emit 0x74
        __asm _emit 0x11
        push 50h
        push 5cc0d4h
        ; Exact mapped bytes E8 41 EA FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xea
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x575fc4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x575fab
        __asm _emit 0x75
        __asm _emit 0xe1
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 4], 1
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 4]
        push eax
        push 58e540h
        push 17h
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 7C 2A 5E 00: call dword ptr [0x5e2a7c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 80070057h
        ; Exact mapped bytes 75 1A: jne 0x576018
        __asm _emit 0x75
        __asm _emit 0x1a
        lea edx, [ebp - 4]
        push edx
        push 58e540h
        push 7
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 7C 2A 5E 00: call dword ptr [0x5e2a7c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 05: jge 0x576023
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x5760d7
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 78 2A 5E 00: call dword ptr [0x5e2a78]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 05: jge 0x57603b
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x5760d5
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58d5d0h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 3D 5E FD FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x5e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 02: jne 0x576058
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 7B: jmp 0x5760d3
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 11: jne 0x57607d
        __asm _emit 0x75
        __asm _emit 0x11
        push 6ch
        push 5cc0d4h
        ; Exact mapped bytes E8 88 E9 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57607d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x576064
        __asm _emit 0x75
        __asm _emit 0xe1
        mov eax, 1
        ; Exact mapped bytes EB 4F: jmp 0x5760d9
        __asm _emit 0xeb
        __asm _emit 0x4f
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x5760a3
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov dword ptr [ebp - 4], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E1: jne 0x57608a
        __asm _emit 0x75
        __asm _emit 0xe1
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 09: je 0x5760b8
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 31 73 FD FF: call 0x54d3f2
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x73
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 5cc0e4h
        ; Exact mapped bytes E8 49 9B F5 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x9b
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 06: jmp 0x5760d9
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes EB B5: jmp 0x57608a
        __asm _emit 0xeb
        __asm _emit 0xb5
        ; Exact mapped bytes EB B3: jmp 0x57608a
        __asm _emit 0xeb
        __asm _emit 0xb3
        ; Exact mapped bytes EB B1: jmp 0x57608a
        __asm _emit 0xeb
        __asm _emit 0xb1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
