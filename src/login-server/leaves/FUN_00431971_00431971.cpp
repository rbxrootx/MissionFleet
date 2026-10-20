// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431971 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_00431971_00431971() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 20h]
        push ebx
        push esi
        push 1
        test eax, eax
        pop ebx
        ; Exact mapped bytes 74 10: je 0x431990
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x431a70
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        cmp eax, 28h
        ; Exact mapped bytes 77 71: ja 0x431a09
        __asm _emit 0x77
        __asm _emit 0x71
        ; Exact mapped bytes 74 5C: je 0x4319f6
        __asm _emit 0x74
        __asm _emit 0x5c
        dec eax
        dec eax
        ; Exact mapped bytes 74 53: je 0x4319f1
        __asm _emit 0x74
        __asm _emit 0x53
        sub eax, 0ah
        ; Exact mapped bytes 74 46: je 0x4319e9
        __asm _emit 0x74
        __asm _emit 0x46
        dec eax
        ; Exact mapped bytes 74 3E: je 0x4319e4
        __asm _emit 0x74
        __asm _emit 0x3e
        sub eax, 16h
        ; Exact mapped bytes 74 2E: je 0x4319d9
        __asm _emit 0x74
        __asm _emit 0x2e
        sub eax, 3
        ; Exact mapped bytes 74 16: je 0x4319c6
        __asm _emit 0x74
        __asm _emit 0x16
        dec eax
        ; Exact mapped bytes 75 69: jne 0x431a1c
        __asm _emit 0x75
        __asm _emit 0x69
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 8]
        push dword ptr [eax]
        push dword ptr [eax + 4]
        ; Exact mapped bytes FF 55 14: call dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes E9 A8 00 00 00: jmp 0x431a6e
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 8]
        push dword ptr [eax]
        push dword ptr [eax + 4]
        ; Exact mapped bytes FF 55 14: call dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x431a70
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 14: call dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x431a6e
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes EB 45: jmp 0x431a2e
        __asm _emit 0xeb
        __asm _emit 0x45
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 14: call dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes EB 7F: jmp 0x431a70
        __asm _emit 0xeb
        __asm _emit 0x7f
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes EB 2D: jmp 0x431a23
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 8]
        push dword ptr [eax]
        push dword ptr [eax + 4]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 55 14: call dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes EB 67: jmp 0x431a70
        __asm _emit 0xeb
        __asm _emit 0x67
        sub eax, 29h
        ; Exact mapped bytes 74 4F: je 0x431a5d
        __asm _emit 0x74
        __asm _emit 0x4f
        sub eax, 3
        ; Exact mapped bytes 74 3E: je 0x431a51
        __asm _emit 0x74
        __asm _emit 0x3e
        dec eax
        ; Exact mapped bytes 74 20: je 0x431a36
        __asm _emit 0x74
        __asm _emit 0x20
        dec eax
        ; Exact mapped bytes 74 12: je 0x431a2b
        __asm _emit 0x74
        __asm _emit 0x12
        dec eax
        ; Exact mapped bytes 74 04: je 0x431a20
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 52: jmp 0x431a72
        __asm _emit 0xeb
        __asm _emit 0x52
        push dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 14: call dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes EB 43: jmp 0x431a6e
        __asm _emit 0xeb
        __asm _emit 0x43
        push dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 14: call dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes EB 3A: jmp 0x431a70
        __asm _emit 0xeb
        __asm _emit 0x3a
        push dword ptr [ebp + 0ch]
        mov esi, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 8]
        push esi
        ; Exact mapped bytes FF 55 14: call dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x14
        xor ebx, ebx
        cmp dword ptr [esi + 1ch], ebx
        sete bl
        and dword ptr [esi + 1ch], 0
        ; Exact mapped bytes EB 1F: jmp 0x431a70
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov esi, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 8]
        push esi
        ; Exact mapped bytes FF 55 14: call dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes EB E6: jmp 0x431a43
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 8]
        push dword ptr [eax]
        push dword ptr [eax + 4]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 55 14: call dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x14
        mov ebx, eax
        mov eax, ebx
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
