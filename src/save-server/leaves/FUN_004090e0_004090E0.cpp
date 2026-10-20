// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004090E0 .. +0x15E bytes.
extern "C" __declspec(naked) void FUN_004090e0_004090E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 14h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8000h
        ; Exact mapped bytes 75 05: jne 0x409113
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 13 01 00 00: jmp 0x409226
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        cmp eax, 8001h
        ; Exact mapped bytes 0F 85 A5 00 00 00: jne 0x4091cc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 80010ef2h
        ; Exact mapped bytes 74 64: je 0x40919d
        __asm _emit 0x74
        __asm _emit 0x64
        cmp dword ptr [ebp - 0ch], 8001d000h
        ; Exact mapped bytes 74 05: je 0x409147
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x4091ca
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c7ch]
        ; Exact mapped bytes E8 46 84 FF FF: call 0x40159b
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FD 7F FF FF: call 0x401159
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x40916c
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 25 82 FF FF: call 0x40138e
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 29: je 0x40919b
        __asm _emit 0x74
        __asm _emit 0x29
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 C3 C5 05 00: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0
        push 0
        push 80010ef0h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 89 0F 02 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB C6: jmp 0x409161
        __asm _emit 0xeb
        __asm _emit 0xc6
        ; Exact mapped bytes EB 2D: jmp 0x4091ca
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 24: jne 0x4091ca
        __asm _emit 0x75
        __asm _emit 0x24
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 8F C5 05 00: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        push eax
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 2
        push 0
        push 8002d020h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 58 0F 02 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 5A: jmp 0x409226
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        cmp edx, 8002h
        ; Exact mapped bytes 75 49: jne 0x409226
        __asm _emit 0x75
        __asm _emit 0x49
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 8002d020h
        ; Exact mapped bytes 74 02: je 0x4091f1
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 35: jmp 0x409226
        __asm _emit 0xeb
        __asm _emit 0x35
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        cmp eax, 2
        ; Exact mapped bytes 75 27: jne 0x409226
        __asm _emit 0x75
        __asm _emit 0x27
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 36 C5 05 00: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0
        push 0
        push 80010ef1h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FC 0E 02 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 B8 BB 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xbb
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
