// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58878D60 .. +0x255 bytes.
extern "C" __declspec(naked) void FUN_58878d60_58878D60() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 8]
        and eax, 3fh
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 28h]
        xor ebx, ebx
        sar edx, 6
        imul ecx, eax, 38h
        mov byte ptr [edi], bl
        mov eax, dword ptr [edx*4 + 589699b0h]
        cmp byte ptr [eax + ecx + 28h], bl
        ; Exact mapped bytes 0F 8D 13 02 00 00: jge 0x58878fa4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 24h]
        test esi, 74000h
        ; Exact mapped bytes 75 25: jne 0x58878dc1
        __asm _emit 0x75
        __asm _emit 0x25
        lea eax, [ebp - 4]
        mov dword ptr [ebp - 4], ebx
        push eax
        ; Exact mapped bytes E8 72 2F 00 00: call 0x5887bd1a
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 0F 85 FA 01 00 00: jne 0x58878fab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        and eax, 74000h
        ; Exact mapped bytes 75 49: jne 0x58878e04
        __asm _emit 0x75
        __asm _emit 0x49
        or esi, 4000h
        mov eax, esi
        push 2
        and eax, 74000h
        pop ecx
        mov dword ptr [ebp - 8], ecx
        cmp eax, 4000h
        ; Exact mapped bytes 74 44: je 0x58878e19
        __asm _emit 0x74
        __asm _emit 0x44
        cmp eax, 10000h
        ; Exact mapped bytes 74 2C: je 0x58878e08
        __asm _emit 0x74
        __asm _emit 0x2c
        cmp eax, 14000h
        ; Exact mapped bytes 74 25: je 0x58878e08
        __asm _emit 0x74
        __asm _emit 0x25
        cmp eax, 20000h
        ; Exact mapped bytes 74 2B: je 0x58878e15
        __asm _emit 0x74
        __asm _emit 0x2b
        cmp eax, 24000h
        ; Exact mapped bytes 74 24: je 0x58878e15
        __asm _emit 0x74
        __asm _emit 0x24
        cmp eax, 40000h
        ; Exact mapped bytes 74 07: je 0x58878dff
        __asm _emit 0x74
        __asm _emit 0x07
        cmp eax, 44000h
        ; Exact mapped bytes 75 1C: jne 0x58878e1b
        __asm _emit 0x75
        __asm _emit 0x1c
        mov byte ptr [edi], 1
        ; Exact mapped bytes EB 17: jmp 0x58878e1b
        __asm _emit 0xeb
        __asm _emit 0x17
        or esi, eax
        ; Exact mapped bytes EB B9: jmp 0x58878dc1
        __asm _emit 0xeb
        __asm _emit 0xb9
        mov edx, 301h
        mov eax, esi
        and eax, edx
        cmp eax, edx
        ; Exact mapped bytes 75 06: jne 0x58878e1b
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [edi], cl
        ; Exact mapped bytes EB 02: jmp 0x58878e1b
        __asm _emit 0xeb
        __asm _emit 0x02
        mov byte ptr [edi], bl
        test esi, 70000h
        ; Exact mapped bytes 0F 84 7D 01 00 00: je 0x58878fa4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [ebp + 0ch], 40h
        ; Exact mapped bytes 0F 85 73 01 00 00: jne 0x58878fa4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov edx, 0c0000000h
        and eax, edx
        mov esi, 80000000h
        cmp eax, 40000000h
        ; Exact mapped bytes 74 0C: je 0x58878e53
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp eax, esi
        ; Exact mapped bytes 74 75: je 0x58878ec0
        __asm _emit 0x74
        __asm _emit 0x75
        cmp eax, edx
        ; Exact mapped bytes 0F 85 51 01 00 00: jne 0x58878fa4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        sub eax, 1
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x58878f59
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x58878f59
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 74 13: je 0x58878e80
        __asm _emit 0x74
        __asm _emit 0x13
        sub eax, 1
        ; Exact mapped bytes 74 0E: je 0x58878e80
        __asm _emit 0x74
        __asm _emit 0x0e
        sub eax, 1
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x58878f59
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 24 01 00 00: jmp 0x58878fa4
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        push ebx
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 83 84 FF FF: call 0x5887130e
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        or eax, edx
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x58878f56
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push ebx
        push ebx
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6D 84 FF FF: call 0x5887130e
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, edx
        add esp, 10h
        cmp eax, -1
        ; Exact mapped bytes 75 0C: jne 0x58878eb7
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes E8 BF 95 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes E9 EF 00 00 00: jmp 0x58878fa6
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test dword ptr [ebp + 10h], esi
        ; Exact mapped bytes 0F 84 E4 00 00 00: je 0x58878fa4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 3
        lea eax, [ebp - 4]
        mov dword ptr [ebp - 4], ebx
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 56 5C FF FF: call 0x5886eb27
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        add esp, 0ch
        test ecx, ecx
        ; Exact mapped bytes 7F 05: jg 0x58878edf
        __asm _emit 0x7f
        __asm _emit 0x05
        cmp ecx, -1
        ; Exact mapped bytes 74 CC: je 0x58878eab
        __asm _emit 0x74
        __asm _emit 0xcc
        mov edx, dword ptr [ebp - 4]
        push 2
        pop eax
        cmp ecx, eax
        ; Exact mapped bytes 74 15: je 0x58878efe
        __asm _emit 0x74
        __asm _emit 0x15
        cmp ecx, 3
        ; Exact mapped bytes 75 4E: jne 0x58878f3c
        __asm _emit 0x75
        __asm _emit 0x4e
        cmp edx, 0bfbbefh
        ; Exact mapped bytes 75 08: jne 0x58878efe
        __asm _emit 0x75
        __asm _emit 0x08
        mov byte ptr [edi], 1
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x58878fa4
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, dx
        cmp ecx, 0fffeh
        ; Exact mapped bytes 75 0D: jne 0x58878f16
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes E8 61 95 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes EB 95: jmp 0x58878eab
        __asm _emit 0xeb
        __asm _emit 0x95
        cmp ecx, 0feffh
        ; Exact mapped bytes 75 1E: jne 0x58878f3c
        __asm _emit 0x75
        __asm _emit 0x1e
        push ebx
        push ebx
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E5 83 FF FF: call 0x5887130e
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, edx
        add esp, 10h
        cmp eax, -1
        ; Exact mapped bytes 0F 84 74 FF FF FF: je 0x58878eab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [edi], 2
        ; Exact mapped bytes EB 68: jmp 0x58878fa4
        __asm _emit 0xeb
        __asm _emit 0x68
        push ebx
        push ebx
        push ebx
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C7 83 FF FF: call 0x5887130e
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, edx
        add esp, 10h
        cmp eax, -1
        ; Exact mapped bytes 75 53: jne 0x58878fa4
        __asm _emit 0x75
        __asm _emit 0x53
        ; Exact mapped bytes E9 55 FF FF FF: jmp 0x58878eab
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        pop ecx
        ; Exact mapped bytes 0F BE 07: movsx eax, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x07
        mov dword ptr [ebp - 4], ebx
        sub eax, 1
        ; Exact mapped bytes 74 0C: je 0x58878f70
        __asm _emit 0x74
        __asm _emit 0x0c
        sub eax, 1
        ; Exact mapped bytes 75 3B: jne 0x58878fa4
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, 0feffh
        ; Exact mapped bytes EB 0B: jmp 0x58878f7b
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 3
        pop ecx
        mov dword ptr [ebp - 8], ecx
        mov eax, 0bfbbefh
        mov dword ptr [ebp - 4], eax
        sub ecx, ebx
        lea eax, [ebp - 4]
        push ecx
        add eax, ebx
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B3 7B FF FF: call 0x58870b42
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        cmp eax, -1
        ; Exact mapped bytes 0F 84 10 FF FF FF: je 0x58878eab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ebx, eax
        cmp ecx, ebx
        ; Exact mapped bytes 7F DA: jg 0x58878f7e
        __asm _emit 0x7f
        __asm _emit 0xda
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 24 80 FD FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
    }
}
