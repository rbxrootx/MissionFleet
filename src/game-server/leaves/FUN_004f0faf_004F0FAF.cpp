// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F0FAF .. +0x1C2 bytes.
extern "C" __declspec(naked) void FUN_004f0faf_004F0FAF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4f0fd2
        __asm _emit 0x75
        __asm _emit 0x14
        push 339h
        push 5c5060h
        ; Exact mapped bytes E8 33 3A 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x3a
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f0fd2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f0fb8
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E8 65 45 04 00: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x45
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 5
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 B8 23 5E 00: call dword ptr [0x5e23b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 45: jne 0x4f103e
        __asm _emit 0x75
        __asm _emit 0x45
        mov eax, dword ptr [ebp + 8]
        shr eax, 10h
        and eax, 0ffffh
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x4f1020
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 5c53e0h
        ; Exact mapped bytes E8 FA EB FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 17: jmp 0x4f1037
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        push edx
        push 5c5410h
        ; Exact mapped bytes E8 E1 EB FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 2A 01 00 00: jmp 0x4f1168
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 0A: jne 0x4f104e
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 1A 01 00 00: jmp 0x4f1168
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 BC 23 5E 00: call dword ptr [0x5e23bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 1C: jne 0x4f1081
        __asm _emit 0x75
        __asm _emit 0x1c
        push 5c5448h
        push 5c547ch
        ; Exact mapped bytes E8 A1 EB FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov eax, 1
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x4f1168
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 B4 23 5E 00: call dword ptr [0x5e23b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        cmp ecx, 0ffffh
        ; Exact mapped bytes 75 0B: jne 0x4f10aa
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x4f10b2
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 65 C1 F9 FF: call 0x48d220
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xc1
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 C0 23 5E 00: call dword ptr [0x5e23c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        and edx, 10000000h
        test edx, edx
        ; Exact mapped bytes 74 42: je 0x4f1114
        __asm _emit 0x74
        __asm _emit 0x42
        mov eax, dword ptr [ebp + 8]
        shr eax, 10h
        and eax, 0ffffh
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x4f10f9
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 5c5480h
        ; Exact mapped bytes E8 21 EB FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 17: jmp 0x4f1110
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        push edx
        push 5c54b0h
        ; Exact mapped bytes E8 08 EB FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 54: jmp 0x4f1168
        __asm _emit 0xeb
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 14h]
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 75 43: jne 0x4f1163
        __asm _emit 0x75
        __asm _emit 0x43
        mov ecx, dword ptr [ebp + 8]
        shr ecx, 10h
        and ecx, 0ffffh
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 74 13: je 0x4f1149
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 8]
        push edx
        push 5c54e4h
        ; Exact mapped bytes E8 D1 EA FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 16: jmp 0x4f115f
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        push eax
        push 5c551ch
        ; Exact mapped bytes E8 B9 EA FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x4f1168
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
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
