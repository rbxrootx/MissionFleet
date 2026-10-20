// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58761A00 .. +0x198 bytes.
extern "C" __declspec(naked) void FUN_58761a00_58761A00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 8], ecx
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes EB 0C: jmp 0x58761a1d
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 4D FC: mov cx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        movzx edx, word ptr [ebp - 4]
        cmp edx, 20h
        ; Exact mapped bytes 0F 8D 6A 01 00 00: jge 0x58761b94
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 17ch], 0
        ; Exact mapped bytes 0F 84 50 01 00 00: je 0x58761b8f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 8]
        add edx, 34ch
        mov dword ptr [ebp - 20h], edx
        movzx eax, word ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 FA B5 D2 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xb5
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 5
        ; Exact mapped bytes 0F 85 B7 00 00 00: jne 0x58761b29
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        add edx, 34ch
        mov dword ptr [ebp - 24h], edx
        push 0
        movzx eax, word ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 83 B5 D2 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb5
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 34ch
        mov dword ptr [ebp - 28h], edx
        push 1
        movzx eax, word ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 5F B5 D2 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xb5
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 31: je 0x58761af1
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 8]
        add edx, 34ch
        mov dword ptr [ebp - 2ch], edx
        push 0
        movzx eax, word ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 35 E2 D4 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe2
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 88 98 00 00 00: and cx, word ptr [eax + 0x98]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, cx
        imul edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 30: je 0x58761b27
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 8]
        add eax, 34ch
        mov dword ptr [ebp - 30h], eax
        push 1
        movzx ecx, word ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 FF E1 D4 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xe1
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, 0ffh
        ; Exact mapped bytes 66 23 90 98 00 00 00: and dx, word ptr [eax + 0x98]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, dx
        imul eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 4D: jmp 0x58761b76
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 8]
        add ecx, 34ch
        mov dword ptr [ebp - 34h], ecx
        movzx edx, word ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 1E B5 D2 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xb5
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 6
        ; Exact mapped bytes 75 2C: jne 0x58761b76
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 8]
        add ecx, 34ch
        mov dword ptr [ebp - 38h], ecx
        push 0
        movzx edx, word ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 AB B4 D2 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xb4
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 74 06: je 0x58761b76
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        movzx ecx, word ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 D1 F1 FF: call 0x5867ece0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xd1
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 7D FE FF FF: jmp 0x58761a11
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
