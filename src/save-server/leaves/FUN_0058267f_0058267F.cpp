// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0058267F .. +0x143 bytes.
extern "C" __declspec(naked) void FUN_0058267f_0058267F() {
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
        ; Exact mapped bytes 74 11: je 0x5826a4
        __asm _emit 0x74
        __asm _emit 0x11
        push 50h
        push 6788ach
        ; Exact mapped bytes E8 A1 66 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x66
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5826a4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x58268b
        __asm _emit 0x75
        __asm _emit 0xe1
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 4], 1
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 4]
        push eax
        push 640d30h
        push 17h
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 1C C3 68 00: call dword ptr [0x68c31c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 80070057h
        ; Exact mapped bytes 75 1A: jne 0x5826f8
        __asm _emit 0x75
        __asm _emit 0x1a
        lea edx, [ebp - 4]
        push edx
        push 640d30h
        push 7
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 1C C3 68 00: call dword ptr [0x68c31c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 05: jge 0x582703
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x5827b7
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 0C C3 68 00: call dword ptr [0x68c30c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 05: jge 0x58271b
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x5827b5
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 63fc30h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 CD 81 FC FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 02: jne 0x582738
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 7B: jmp 0x5827b3
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
        ; Exact mapped bytes 75 11: jne 0x58275d
        __asm _emit 0x75
        __asm _emit 0x11
        push 6ch
        push 6788ach
        ; Exact mapped bytes E8 E8 65 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x58275d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x582744
        __asm _emit 0x75
        __asm _emit 0xe1
        mov eax, 1
        ; Exact mapped bytes EB 4F: jmp 0x5827b9
        __asm _emit 0xeb
        __asm _emit 0x4f
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x582783
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
        ; Exact mapped bytes 75 E1: jne 0x58276a
        __asm _emit 0x75
        __asm _emit 0xe1
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 09: je 0x582798
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 C1 96 FC FF: call 0x54be62
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 6788bch
        ; Exact mapped bytes E8 69 DE F1 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xde
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 06: jmp 0x5827b9
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes EB B5: jmp 0x58276a
        __asm _emit 0xeb
        __asm _emit 0xb5
        ; Exact mapped bytes EB B3: jmp 0x58276a
        __asm _emit 0xeb
        __asm _emit 0xb3
        ; Exact mapped bytes EB B1: jmp 0x58276a
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
