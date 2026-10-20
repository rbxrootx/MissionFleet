// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A0AC0 .. +0x117 bytes.
extern "C" __declspec(naked) void FUN_584a0ac0_584A0AC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes FF 15 F4 44 89 58: call dword ptr [0x588944f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        and ecx, 0fffffffeh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 68h], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 4
        ; Exact mapped bytes 74 12: je 0x584a0af9
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 50h], 5
        ; Exact mapped bytes 74 09: je 0x584a0af9
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 50h], 6
        ; Exact mapped bytes 75 60: jne 0x584a0b59
        __asm _emit 0x75
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [eax + 58h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 3
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 30h], 0
        ; Exact mapped bytes 74 38: je 0x584a0b50
        __asm _emit 0x74
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 30h]
        ; Exact mapped bytes E8 6D FB FF FF: call 0x584a0690
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x584a0b50
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 2
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        nop
        xor eax, eax
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x584a0bd7
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 7E: jmp 0x584a0bd7
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 50h], 8
        ; Exact mapped bytes 74 12: je 0x584a0b74
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 9
        ; Exact mapped bytes 74 09: je 0x584a0b74
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 50h], 0ah
        ; Exact mapped bytes 75 5D: jne 0x584a0bd1
        __asm _emit 0x75
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [edx + 58h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], 2
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 74 38: je 0x584a0bcb
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 30h]
        ; Exact mapped bytes E8 F2 FA FF FF: call 0x584a0690
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 26: je 0x584a0bcb
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 14h], edx
        push 0
        push 2
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        nop
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x584a0bd7
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes EB 06: jmp 0x584a0bd7
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 34h]
    }
}
