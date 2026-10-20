// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D2B60 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_004d2b60_004D2B60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x4d2b73
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x4d2c0a
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 81 EE 01 00: call 0x4f1a04
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push 58b6f0h
        ; Exact mapped bytes E8 75 85 02 00: call 0x4fb103
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x4d2b9e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 6C: jmp 0x4d2c0a
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 400h
        ; Exact mapped bytes 74 14: je 0x4d2bc1
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 8], 400h
        ; Exact mapped bytes 76 52: jbe 0x4d2c08
        __asm _emit 0x76
        __asm _emit 0x52
        cmp dword ptr [ebp - 8], 406h
        ; Exact mapped bytes 76 27: jbe 0x4d2be6
        __asm _emit 0x76
        __asm _emit 0x27
        ; Exact mapped bytes EB 47: jmp 0x4d2c08
        __asm _emit 0xeb
        __asm _emit 0x47
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        shr eax, 10h
        and eax, 0ffffh
        push eax
        ; Exact mapped bytes 66 8B 4D 10: mov cx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 D8 00 00 00: call dword ptr [eax + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 24: jmp 0x4d2c0a
        __asm _emit 0xeb
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 FD E1 02 00: call 0x500df4
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 DC 00 00 00: call dword ptr [edx + 0xdc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x4d2c0a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
