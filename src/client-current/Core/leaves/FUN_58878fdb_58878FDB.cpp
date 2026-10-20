// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58878FDB .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_58878fdb_58878FDB() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        mov edx, 700h
        and eax, edx
        mov ecx, 400h
        cmp eax, ecx
        ; Exact mapped bytes 77 28: ja 0x5887901b
        __asm _emit 0x77
        __asm _emit 0x28
        ; Exact mapped bytes 74 21: je 0x58879016
        __asm _emit 0x74
        __asm _emit 0x21
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x58879016
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp eax, 100h
        ; Exact mapped bytes 74 12: je 0x58879012
        __asm _emit 0x74
        __asm _emit 0x12
        cmp eax, 200h
        ; Exact mapped bytes 74 3B: je 0x58879042
        __asm _emit 0x74
        __asm _emit 0x3b
        cmp eax, 300h
        ; Exact mapped bytes 75 1F: jne 0x5887902d
        __asm _emit 0x75
        __asm _emit 0x1f
        push 2
        ; Exact mapped bytes EB 06: jmp 0x58879018
        __asm _emit 0xeb
        __asm _emit 0x06
        push 4
        ; Exact mapped bytes EB 02: jmp 0x58879018
        __asm _emit 0xeb
        __asm _emit 0x02
        push 3
        pop eax
        pop ebp
        ret
        cmp eax, 500h
        ; Exact mapped bytes 74 24: je 0x58879046
        __asm _emit 0x74
        __asm _emit 0x24
        cmp eax, 600h
        ; Exact mapped bytes 74 19: je 0x58879042
        __asm _emit 0x74
        __asm _emit 0x19
        cmp eax, edx
        ; Exact mapped bytes 74 19: je 0x58879046
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes E8 3D 94 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 6E 7F FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        or eax, 0ffffffffh
        pop ebp
        ret
        push 5
        ; Exact mapped bytes EB D2: jmp 0x58879018
        __asm _emit 0xeb
        __asm _emit 0xd2
        xor eax, eax
        inc eax
        pop ebp
        ret
    }
}
