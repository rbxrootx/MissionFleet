// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586CAA80 .. +0x1E7 bytes.
extern "C" __declspec(naked) void FUN_586caa80_586CAA80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0e0h]
        cmp ecx, 1
        ; Exact mapped bytes 74 13: je 0x586caaab
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0e0h]
        cmp eax, 2
        ; Exact mapped bytes 0F 85 B6 01 00 00: jne 0x586cac61
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp + 8]
        imul edx, ecx, 0e84h
        movzx eax, word ptr [edx + 588f4f90h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 0C 06 96 58: cmp ecx, dword ptr [0x5896060c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 26: jne 0x586caaf3
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 EC E5 FF: call 0x58529750
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xec
        __asm _emit 0xe5
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 13: jne 0x586caaf3
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 6E 01 00 00: jmp 0x586cac61
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 80h
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 0ch], 588b1ee0h
        lea ecx, [ebp - 8]
        push ecx
        push 0f003fh
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 80000002h
        ; Exact mapped bytes FF 15 20 40 89 58: call dword ptr [0x58894020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x586cab4e
        __asm _emit 0x74
        __asm _emit 0x28
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        push 0
        push 0f003fh
        push 0
        push 588b1dcfh
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 4
        lea eax, [ebp - 10h]
        push eax
        push 4
        push 0
        push 588b1f08h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x586cabac
        __asm _emit 0x74
        __asm _emit 0x41
        lea edx, [ebp - 14h]
        push edx
        lea eax, [ebp - 8]
        push eax
        push 0
        push 0f003fh
        push 0
        push 588b1f10h
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 4
        lea edx, [ebp - 10h]
        push edx
        push 4
        push 0
        push 588b1f18h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0e0h]
        cmp eax, 2
        ; Exact mapped bytes 75 40: jne 0x586cac06
        __asm _emit 0x75
        __asm _emit 0x40
        ; Exact mapped bytes 83 3D 0C 06 96 58 00: cmp dword ptr [0x5896060c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x586cabdd
        __asm _emit 0x74
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 B2 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xb2
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 0
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 B1 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xb1
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 8C E6 FF: call 0x585338e0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x8c
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB 3B EB FF: call 0x5857e7b0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x3b
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        movzx edx, word ptr [ebp + 8]
        test edx, edx
        ; Exact mapped bytes 74 29: je 0x586cac37
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        movzx ecx, word ptr [ebp + 8]
        sub ecx, 1
        imul edx, ecx, 11h
        lea eax, [eax + edx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FC AA 0E 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xaa
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1C: jmp 0x586cac53
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, 54h
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 DE AA 0E 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xaa
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
