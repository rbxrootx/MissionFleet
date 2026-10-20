// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B9610 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_584b9610_584B9610() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 75 04: jne 0x584b9626
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2F: jmp 0x584b9655
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 0B: jmp 0x584b963c
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F7 C0 FD FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 11: je 0x584b9653
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 07: jne 0x584b9651
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x584b9655
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB DE: jmp 0x584b9631
        __asm _emit 0xeb
        __asm _emit 0xde
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
