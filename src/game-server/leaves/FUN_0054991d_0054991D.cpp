// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054991D .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_0054991d_0054991D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 40: jne 0x549969
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        push 80000000h
        ; Exact mapped bytes FF 15 24 1E 5E 00: call dword ptr [0x5e1e24]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x549962
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 8]
        push eax
        push 5cb864h
        ; Exact mapped bytes E8 BA 62 F8 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x62
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 73: jmp 0x5499d5
        __asm _emit 0xeb
        __asm _emit 0x73
        mov eax, 1
        ; Exact mapped bytes EB 6C: jmp 0x5499d5
        __asm _emit 0xeb
        __asm _emit 0x6c
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 80000000h
        ; Exact mapped bytes FF 15 20 1E 5E 00: call dword ptr [0x5e1e20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 42: jne 0x5499c2
        __asm _emit 0x75
        __asm _emit 0x42
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 1
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 0C 1E 5E 00: call dword ptr [0x5e1e0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x5499c2
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 07: jne 0x5499c2
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 13: jmp 0x5499d5
        __asm _emit 0xeb
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 8]
        push edx
        push 5cb8a0h
        ; Exact mapped bytes E8 45 62 F8 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x62
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
