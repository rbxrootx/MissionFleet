// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A0930 .. +0x180 bytes.
extern "C" __declspec(naked) void FUN_584a0930_584A0930() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes A1 1C 5F 96 58: mov eax, dword ptr [0x58965f1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF 15 80 44 89 58: call dword ptr [0x58894480]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        or edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 68h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 50h], 2
        ; Exact mapped bytes 75 57: jne 0x584a09b4
        __asm _emit 0x75
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], 4
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 74 38: je 0x584a09a8
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 30h]
        ; Exact mapped bytes E8 15 FD FF FF: call 0x584a0690
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 26: je 0x584a09a8
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 0ch], edx
        push 1
        push 2
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        nop
        xor eax, eax
        ; Exact mapped bytes E9 0B 01 00 00: jmp 0x584a0aba
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 06 01 00 00: jmp 0x584a0aba
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 50h], 6
        ; Exact mapped bytes 75 4D: jne 0x584a0a0a
        __asm _emit 0x75
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 74 38: je 0x584a09fe
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes E8 BF FC FF FF: call 0x584a0690
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 26: je 0x584a09fe
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 14h], ecx
        push 1
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        nop
        xor eax, eax
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x584a0aba
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B0 00 00 00: jmp 0x584a0aba
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 3
        ; Exact mapped bytes 75 51: jne 0x584a0a64
        __asm _emit 0x75
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], 8
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 74 38: je 0x584a0a5e
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes E8 5F FC FF FF: call 0x584a0690
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 26: je 0x584a0a5e
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 1ch], ecx
        push 1
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        nop
        xor eax, eax
        ; Exact mapped bytes EB 58: jmp 0x584a0aba
        __asm _emit 0xeb
        __asm _emit 0x58
        ; Exact mapped bytes EB 56: jmp 0x584a0aba
        __asm _emit 0xeb
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 0ah
        ; Exact mapped bytes 75 47: jne 0x584a0ab4
        __asm _emit 0x75
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 30h], 0
        ; Exact mapped bytes 74 38: je 0x584a0aae
        __asm _emit 0x74
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 30h]
        ; Exact mapped bytes E8 0F FC FF FF: call 0x584a0690
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x584a0aae
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 24h], eax
        push 1
        push 2
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        nop
        xor eax, eax
    }
}
