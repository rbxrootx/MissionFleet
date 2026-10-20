// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58869FE9 .. +0x1DA bytes.
extern "C" __declspec(naked) void FUN_58869fe9_58869FE9() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 44h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 0ch]
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        xor ebx, ebx
        push edi
        push 1cah
        push ebx
        push esi
        mov dword ptr [ebp - 44h], esi
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes E8 F8 2D FE FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x2d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 3ch]
        lea ecx, [ebp - 30h]
        add esp, 0ch
        mov dword ptr [ebp - 38h], ecx
        mov edi, ebx
        mov eax, ebx
        mov dword ptr [ebp - 40h], eax
        cmp edi, 4
        ; Exact mapped bytes 0F 83 7E 01 00 00: jae 0x5886a1b2
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 14: je 0x5886a04d
        __asm _emit 0x74
        __asm _emit 0x14
        push 588c4e5ch
        push edx
        ; Exact mapped bytes E8 CC CE 00 00: call 0x58876f10
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3ch]
        pop ecx
        pop ecx
        mov ecx, eax
        ; Exact mapped bytes EB 14: jmp 0x5886a061
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, edx
        lea esi, [ecx + 2]
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 F5: jne 0x5886a052
        __asm _emit 0x75
        __asm _emit 0xf5
        sub ecx, esi
        sar ecx, 1
        mov eax, dword ptr [ebp - 38h]
        inc edi
        mov esi, dword ptr [ebp - 38h]
        add dword ptr [ebp - 38h], 0ch
        mov dword ptr [eax - 4], edx
        lea edx, [edx + ecx*2]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [esi + 4], eax
        movzx eax, word ptr [edx]
        add edx, 2
        mov esi, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 3ch], edx
        sub eax, ebx
        ; Exact mapped bytes 74 0F: je 0x5886a099
        __asm _emit 0x74
        __asm _emit 0x0f
        sub eax, 2dh
        ; Exact mapped bytes 74 97: je 0x5886a026
        __asm _emit 0x74
        __asm _emit 0x97
        sub eax, 1
        ; Exact mapped bytes 74 69: je 0x5886a0fd
        __asm _emit 0x74
        __asm _emit 0x69
        sub eax, 31h
        ; Exact mapped bytes 74 8D: je 0x5886a026
        __asm _emit 0x74
        __asm _emit 0x8d
        sub edi, 1
        ; Exact mapped bytes 0F 84 02 01 00 00: je 0x5886a1a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub edi, 1
        ; Exact mapped bytes 0F 84 B3 00 00 00: je 0x5886a15e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub edi, 1
        ; Exact mapped bytes 74 55: je 0x5886a105
        __asm _emit 0x74
        __asm _emit 0x55
        sub edi, 1
        ; Exact mapped bytes 0F 85 F9 00 00 00: jne 0x5886a1b2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 34h]
        push eax
        push esi
        ; Exact mapped bytes E8 3F 01 00 00: call 0x5886a202
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 0F 84 D3 00 00 00: je 0x5886a1a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 28h]
        push eax
        push esi
        ; Exact mapped bytes E8 5B 02 00 00: call 0x5886a332
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 0F 84 BF 00 00 00: je 0x5886a1a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 1ch]
        push eax
        push esi
        ; Exact mapped bytes E8 89 01 00 00: call 0x5886a274
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x5886a1a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x5886a191
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        pop eax
        ; Exact mapped bytes E9 23 FF FF FF: jmp 0x5886a028
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 34h]
        push eax
        push esi
        ; Exact mapped bytes E8 F3 00 00 00: call 0x5886a202
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x5886a1a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 28h]
        push eax
        push esi
        ; Exact mapped bytes E8 0F 02 00 00: call 0x5886a332
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 74 20: je 0x5886a149
        __asm _emit 0x74
        __asm _emit 0x20
        lea eax, [ebp - 1ch]
        push eax
        push esi
        ; Exact mapped bytes E8 41 01 00 00: call 0x5886a274
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 75 65: jne 0x5886a19e
        __asm _emit 0x75
        __asm _emit 0x65
        lea eax, [ebp - 1ch]
        push eax
        push esi
        ; Exact mapped bytes E8 80 00 00 00: call 0x5886a1c3
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 75 55: jne 0x5886a19e
        __asm _emit 0x75
        __asm _emit 0x55
        lea eax, [ebp - 28h]
        push eax
        push esi
        ; Exact mapped bytes E8 21 01 00 00: call 0x5886a274
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 74 47: je 0x5886a1a0
        __asm _emit 0x74
        __asm _emit 0x47
        lea eax, [ebp - 1ch]
        ; Exact mapped bytes EB 33: jmp 0x5886a191
        __asm _emit 0xeb
        __asm _emit 0x33
        lea eax, [ebp - 34h]
        push eax
        push esi
        ; Exact mapped bytes E8 9A 00 00 00: call 0x5886a202
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 74 32: je 0x5886a1a0
        __asm _emit 0x74
        __asm _emit 0x32
        lea eax, [ebp - 28h]
        push eax
        push esi
        ; Exact mapped bytes E8 BA 01 00 00: call 0x5886a332
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 75 20: jne 0x5886a19e
        __asm _emit 0x75
        __asm _emit 0x20
        lea eax, [ebp - 28h]
        push eax
        push esi
        ; Exact mapped bytes E8 EC 00 00 00: call 0x5886a274
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 75 10: jne 0x5886a19e
        __asm _emit 0x75
        __asm _emit 0x10
        lea eax, [ebp - 28h]
        push eax
        push esi
        ; Exact mapped bytes E8 2B 00 00 00: call 0x5886a1c3
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 74 02: je 0x5886a1a0
        __asm _emit 0x74
        __asm _emit 0x02
        mov bl, 1
        mov al, bl
        ; Exact mapped bytes EB 10: jmp 0x5886a1b4
        __asm _emit 0xeb
        __asm _emit 0x10
        lea eax, [ebp - 34h]
        push eax
        push esi
        ; Exact mapped bytes E8 54 00 00 00: call 0x5886a202
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 02: jmp 0x5886a1b4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 8F 6E FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x6e
        __asm _emit 0xfc
        __asm _emit 0xff
        leave
        ret
    }
}
