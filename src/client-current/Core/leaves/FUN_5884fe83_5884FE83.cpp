// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884FE83 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_5884fe83_5884FE83() {
    __asm {
        push ebp
        mov ebp, esp
        mov edx, dword ptr [ebp + 8]
        push ebx
        push esi
        push edi
        mov eax, dword ptr [edx + 4]
        test eax, eax
        ; Exact mapped bytes 74 76: je 0x5884ff09
        __asm _emit 0x74
        __asm _emit 0x76
        lea ecx, [eax + 8]
        cmp byte ptr [ecx], 0
        ; Exact mapped bytes 74 6E: je 0x5884ff09
        __asm _emit 0x74
        __asm _emit 0x6e
        test byte ptr [edx], 80h
        mov edi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 05: je 0x5884fea8
        __asm _emit 0x74
        __asm _emit 0x05
        test byte ptr [edi], 10h
        ; Exact mapped bytes 75 61: jne 0x5884ff09
        __asm _emit 0x75
        __asm _emit 0x61
        mov ebx, dword ptr [edi + 4]
        xor esi, esi
        cmp eax, ebx
        ; Exact mapped bytes 74 30: je 0x5884fee1
        __asm _emit 0x74
        __asm _emit 0x30
        lea eax, [ebx + 8]
        mov bl, byte ptr [ecx]
        cmp bl, byte ptr [eax]
        ; Exact mapped bytes 75 1A: jne 0x5884fed4
        __asm _emit 0x75
        __asm _emit 0x1a
        test bl, bl
        ; Exact mapped bytes 74 12: je 0x5884fed0
        __asm _emit 0x74
        __asm _emit 0x12
        mov bl, byte ptr [ecx + 1]
        cmp bl, byte ptr [eax + 1]
        ; Exact mapped bytes 75 0E: jne 0x5884fed4
        __asm _emit 0x75
        __asm _emit 0x0e
        add ecx, 2
        add eax, 2
        test bl, bl
        ; Exact mapped bytes 75 E4: jne 0x5884feb4
        __asm _emit 0x75
        __asm _emit 0xe4
        mov eax, esi
        ; Exact mapped bytes EB 05: jmp 0x5884fed9
        __asm _emit 0xeb
        __asm _emit 0x05
        sbb eax, eax
        or eax, 1
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x5884fee1
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2B: jmp 0x5884ff0c
        __asm _emit 0xeb
        __asm _emit 0x2b
        test byte ptr [edi], 2
        ; Exact mapped bytes 74 05: je 0x5884feeb
        __asm _emit 0x74
        __asm _emit 0x05
        test byte ptr [edx], 8
        ; Exact mapped bytes 74 1A: je 0x5884ff05
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 10h]
        test byte ptr [eax], 1
        ; Exact mapped bytes 74 05: je 0x5884fef8
        __asm _emit 0x74
        __asm _emit 0x05
        test byte ptr [edx], 1
        ; Exact mapped bytes 74 0D: je 0x5884ff05
        __asm _emit 0x74
        __asm _emit 0x0d
        test byte ptr [eax], 2
        ; Exact mapped bytes 74 05: je 0x5884ff02
        __asm _emit 0x74
        __asm _emit 0x05
        test byte ptr [edx], 2
        ; Exact mapped bytes 74 03: je 0x5884ff05
        __asm _emit 0x74
        __asm _emit 0x03
        xor esi, esi
        inc esi
        mov eax, esi
        ; Exact mapped bytes EB 03: jmp 0x5884ff0c
        __asm _emit 0xeb
        __asm _emit 0x03
        xor eax, eax
        inc eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
