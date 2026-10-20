// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F74F .. +0x134 bytes.
extern "C" __declspec(naked) void FUN_5884f74f_5884F74F() {
    __asm {
        push 10h
        push 588ecfe8h
        ; Exact mapped bytes E8 05 30 FE FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        xor ebx, ebx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 4]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x5884f875
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ecx + 8], bl
        ; Exact mapped bytes 0F 84 01 01 00 00: je 0x5884f875
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 8]
        test edx, edx
        ; Exact mapped bytes 75 08: jne 0x5884f783
        __asm _emit 0x75
        __asm _emit 0x08
        cmp dword ptr [eax], ebx
        ; Exact mapped bytes 0F 8D F2 00 00 00: jge 0x5884f875
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [ebp + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 78 05: js 0x5884f791
        __asm _emit 0x78
        __asm _emit 0x05
        add esi, 0ch
        add esi, edx
        mov dword ptr [ebp - 4], ebx
        mov edi, dword ptr [ebp + 14h]
        test cl, cl
        ; Exact mapped bytes 79 20: jns 0x5884f7bb
        __asm _emit 0x79
        __asm _emit 0x20
        test byte ptr [edi], 10h
        ; Exact mapped bytes 74 1B: je 0x5884f7bb
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes A1 94 95 96 58: mov eax, dword ptr [0x58969594]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1ch], eax
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x5884f7bb
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, eax
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        mov ecx, eax
        ; Exact mapped bytes EB 0B: jmp 0x5884f7c6
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 8]
        test cl, 8
        ; Exact mapped bytes 74 1C: je 0x5884f7df
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [eax + 18h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x5884f887
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x5884f887
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi], ecx
        lea eax, [edi + 8]
        push eax
        push ecx
        ; Exact mapped bytes EB 37: jmp 0x5884f816
        __asm _emit 0xeb
        __asm _emit 0x37
        test byte ptr [edi], 1
        ; Exact mapped bytes 74 3D: je 0x5884f821
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x5884f887
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x5884f887
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [edi + 14h]
        push dword ptr [eax + 18h]
        push esi
        ; Exact mapped bytes E8 8E D0 FF FF: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [edi + 14h], 4
        ; Exact mapped bytes 75 56: jne 0x5884f861
        __asm _emit 0x75
        __asm _emit 0x56
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 51: je 0x5884f861
        __asm _emit 0x74
        __asm _emit 0x51
        lea eax, [edi + 8]
        push eax
        push dword ptr [esi]
        ; Exact mapped bytes E8 06 F8 FF FF: call 0x5884f021
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov dword ptr [esi], eax
        ; Exact mapped bytes EB 40: jmp 0x5884f861
        __asm _emit 0xeb
        __asm _emit 0x40
        mov ecx, dword ptr [eax + 18h]
        cmp dword ptr [edi + 18h], ebx
        ; Exact mapped bytes 75 23: jne 0x5884f84c
        __asm _emit 0x75
        __asm _emit 0x23
        test ecx, ecx
        ; Exact mapped bytes 74 5A: je 0x5884f887
        __asm _emit 0x74
        __asm _emit 0x5a
        test esi, esi
        ; Exact mapped bytes 74 56: je 0x5884f887
        __asm _emit 0x74
        __asm _emit 0x56
        push dword ptr [edi + 14h]
        lea eax, [edi + 8]
        push eax
        push ecx
        ; Exact mapped bytes E8 E3 F7 FF FF: call 0x5884f021
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 49 D0 FF FF: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 15: jmp 0x5884f861
        __asm _emit 0xeb
        __asm _emit 0x15
        test ecx, ecx
        ; Exact mapped bytes 74 37: je 0x5884f887
        __asm _emit 0x74
        __asm _emit 0x37
        test esi, esi
        ; Exact mapped bytes 74 33: je 0x5884f887
        __asm _emit 0x74
        __asm _emit 0x33
        test byte ptr [edi], 4
        push 0
        pop ebx
        setne bl
        inc ebx
        mov dword ptr [ebp - 20h], ebx
        mov dword ptr [ebp - 4], 0fffffffeh
        mov eax, ebx
        ; Exact mapped bytes EB 0B: jmp 0x5884f877
        __asm _emit 0xeb
        __asm _emit 0x0b
        xor eax, eax
        inc eax
        ret
        mov esp, dword ptr [ebp - 18h]
        ; Exact mapped bytes EB 12: jmp 0x5884f887
        __asm _emit 0xeb
        __asm _emit 0x12
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
    }
}
