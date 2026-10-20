// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CB6F0 .. +0xF0 bytes.
extern "C" __declspec(naked) void FUN_584cb6f0_584CB6F0() {
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
        ; Exact mapped bytes 75 5D: jne 0x584cb774
        __asm _emit 0x75
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ecx + 58h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], 3
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 74 38: je 0x584cb76e
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes E8 4F 4F FD FF: call 0x584a0690
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x4f
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 26: je 0x584cb76e
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        nop
        xor eax, eax
        ; Exact mapped bytes EB 6E: jmp 0x584cb7e0
        __asm _emit 0xeb
        __asm _emit 0x6e
        ; Exact mapped bytes EB 6C: jmp 0x584cb7e0
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 6
        ; Exact mapped bytes 75 5D: jne 0x584cb7da
        __asm _emit 0x75
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ecx + 58h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], 2
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 74 38: je 0x584cb7d4
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes E8 E9 4E FD FF: call 0x584a0690
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 26: je 0x584cb7d4
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
        push 0
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
        ; Exact mapped bytes EB 08: jmp 0x584cb7e0
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes EB 06: jmp 0x584cb7e0
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 34h]
    }
}
