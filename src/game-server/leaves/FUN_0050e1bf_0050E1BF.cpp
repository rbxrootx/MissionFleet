// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050E1BF .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_0050e1bf_0050E1BF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 14: jne 0x50e1e2
        __asm _emit 0x75
        __asm _emit 0x14
        push 5c68fch
        push 5c6938h
        ; Exact mapped bytes E8 38 1A FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x1a
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 49: jmp 0x50e22b
        __asm _emit 0xeb
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 2E: je 0x50e219
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 0C 26 5E 00: call dword ptr [0x5e260c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 16: je 0x50e217
        __asm _emit 0x74
        __asm _emit 0x16
        push -1
        push 0
        push 0b1h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x50e22b
        __asm _emit 0xeb
        __asm _emit 0x12
        push 5c693ch
        push 5c697ch
        ; Exact mapped bytes E8 ED 19 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x19
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E8 B0 63 FF FF: call 0x5045e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
