// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00415029 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_00415029_00415029() {
    __asm {
        push ecx
        push ecx
        push ebx
        push ebp
        mov ebx, ecx
        xor ebp, ebp
        mov dword ptr [esp + 0ch], ebp
        cmp dword ptr [ebx + 14h], ebp
        ; Exact mapped bytes 76 7C: jbe 0x4150b6
        __asm _emit 0x76
        __asm _emit 0x7c
        push esi
        push edi
        mov dword ptr [esp + 10h], ebp
        mov esi, dword ptr [esp + 10h]
        add esi, dword ptr [ebx + 3ch]
        mov eax, dword ptr [esi + 8]
        cmp eax, 9
        ; Exact mapped bytes 7F 29: jg 0x415078
        __asm _emit 0x7f
        __asm _emit 0x29
        ; Exact mapped bytes 74 18: je 0x415069
        __asm _emit 0x74
        __asm _emit 0x18
        cmp eax, ebp
        ; Exact mapped bytes 7E 4D: jle 0x4150a2
        __asm _emit 0x7e
        __asm _emit 0x4d
        cmp eax, 4
        ; Exact mapped bytes 7E 46: jle 0x4150a0
        __asm _emit 0x7e
        __asm _emit 0x46
        cmp eax, 6
        ; Exact mapped bytes 74 41: je 0x4150a0
        __asm _emit 0x74
        __asm _emit 0x41
        cmp eax, 7
        ; Exact mapped bytes 74 24: je 0x415088
        __asm _emit 0x74
        __asm _emit 0x24
        cmp eax, 8
        ; Exact mapped bytes EB 1D: jmp 0x415086
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 31: je 0x4150a0
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes EB 28: jmp 0x4150a0
        __asm _emit 0xeb
        __asm _emit 0x28
        sub eax, 0ah
        ; Exact mapped bytes 74 0F: je 0x41508c
        __asm _emit 0x74
        __asm _emit 0x0f
        sub eax, 5
        ; Exact mapped bytes 74 06: je 0x415088
        __asm _emit 0x74
        __asm _emit 0x06
        dec eax
        ; Exact mapped bytes 74 03: je 0x415088
        __asm _emit 0x74
        __asm _emit 0x03
        dec eax
        ; Exact mapped bytes 75 1A: jne 0x4150a2
        __asm _emit 0x75
        __asm _emit 0x1a
        push dword ptr [esi]
        ; Exact mapped bytes EB 0E: jmp 0x41509a
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edi, dword ptr [esi]
        cmp edi, ebp
        ; Exact mapped bytes 74 0E: je 0x4150a0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, edi
        ; Exact mapped bytes E8 12 8B 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 76 88 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [esi], ebp
        inc dword ptr [esp + 14h]
        add dword ptr [esp + 10h], 10h
        mov eax, dword ptr [esp + 14h]
        cmp eax, dword ptr [ebx + 14h]
        ; Exact mapped bytes 72 8C: jb 0x415040
        __asm _emit 0x72
        __asm _emit 0x8c
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        pop ecx
        ret
    }
}
