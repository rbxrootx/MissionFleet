// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883399F .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_5883399f_5883399F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push edi
        lea eax, [ebp - 0ch]
        mov dword ptr [ebp - 10h], 4
        push eax
        xor edi, edi
        lea eax, [ebp - 4]
        push eax
        push edi
        push 0f003fh
        push edi
        push edi
        push edi
        push dword ptr [ebp + 14h]
        mov ebx, 80000001h
        mov dword ptr [ebp - 8], edi
        push ebx
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 4D: je 0x58833a24
        __asm _emit 0x74
        __asm _emit 0x4d
        lea eax, [ebp - 0ch]
        push eax
        lea eax, [ebp - 4]
        push eax
        push edi
        push 20019h
        push edi
        push edi
        push edi
        push dword ptr [ebp + 14h]
        push ebx
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x58833a24
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 39 3D EC 83 96 58: cmp dword ptr [0x589683ec], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 1E: je 0x58833a1c
        __asm _emit 0x74
        __asm _emit 0x1e
        push eax
        push 588f17ach
        ; Exact mapped bytes E8 4A 89 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 71 66 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov al, 1
        pop edi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        lea eax, [ebp - 10h]
        push eax
        lea eax, [ebp - 8]
        push eax
        push edi
        push edi
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 1D 89 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [ebp + 10h], eax
        ; Exact mapped bytes 74 CA: je 0x58833a1c
        __asm _emit 0x74
        __asm _emit 0xca
        ; Exact mapped bytes 39 3D EC 83 96 58: cmp dword ptr [0x589683ec], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 21: je 0x58833a7b
        __asm _emit 0x74
        __asm _emit 0x21
        push eax
        push dword ptr [ebp + 10h]
        push 588f1794h
        ; Exact mapped bytes E8 EB 88 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 12 66 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        xor al, al
        ; Exact mapped bytes EB 9F: jmp 0x58833a1e
        __asm _emit 0xeb
        __asm _emit 0x9f
    }
}
