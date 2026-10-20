// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CB600 .. +0xDE bytes.
extern "C" __declspec(naked) void FUN_584cb600_584CB600() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
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
        ; Exact mapped bytes 75 51: jne 0x584cb67e
        __asm _emit 0x75
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], 4
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 74 38: je 0x584cb678
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 30h]
        ; Exact mapped bytes E8 45 50 FD FF: call 0x584a0690
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 26: je 0x584cb678
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
        ; Exact mapped bytes EB 62: jmp 0x584cb6de
        __asm _emit 0xeb
        __asm _emit 0x62
        ; Exact mapped bytes EB 60: jmp 0x584cb6de
        __asm _emit 0xeb
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 50h], 3
        ; Exact mapped bytes 75 51: jne 0x584cb6d8
        __asm _emit 0x75
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], 6
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 74 38: je 0x584cb6d2
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 30h]
        ; Exact mapped bytes E8 EB 4F FD FF: call 0x584a0690
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x4f
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 26: je 0x584cb6d2
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
        push 1
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
        ; Exact mapped bytes EB 08: jmp 0x584cb6de
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes EB 06: jmp 0x584cb6de
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 34h]
    }
}
