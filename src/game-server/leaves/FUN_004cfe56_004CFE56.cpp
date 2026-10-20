// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CFE56 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_004cfe56_004CFE56() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 33: je 0x4cfe93
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 0C 24 5E 00: call dword ptr [0x5e240c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x4cfe93
        __asm _emit 0x75
        __asm _emit 0x21
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 12: je 0x4cfe8a
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 34 24 5E 00: call dword ptr [0x5e2434]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x4cfe93
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x4cfe9a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
