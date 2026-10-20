// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049BB2E .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_0049bb2e_0049BB2E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 D8 FD FF FF: call 0x49b920
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 62 11 0A 00: call 0x53ccbb
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x11
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3A: je 0x49bb9c
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 06: je 0x49bb79
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 8], 3ch
        ; Exact mapped bytes 7E 02: jle 0x49bb7b
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB 21: jmp 0x49bb9c
        __asm _emit 0xeb
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 69 FF FF FF: call 0x49baf7
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x49bb9a
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 5A: jmp 0x49bbf4
        __asm _emit 0xeb
        __asm _emit 0x5a
        ; Exact mapped bytes EB AF: jmp 0x49bb4b
        __asm _emit 0xeb
        __asm _emit 0xaf
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 77 FD FF FF: call 0x49b920
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp + 0ch], ecx
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 36: je 0x49bbf1
        __asm _emit 0x74
        __asm _emit 0x36
        push 3
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 13 FE FF FF: call 0x49b9dd
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 0ch], eax
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 1D FF FF FF: call 0x49baf7
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x49bbe3
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0E: jmp 0x49bbf1
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 04: jne 0x49bbef
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x49bbf4
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB C1: jmp 0x49bbb2
        __asm _emit 0xeb
        __asm _emit 0xc1
        mov eax, dword ptr [ebp + 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
