// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F6D10 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_004f6d10_004F6D10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0a0h], 0
        ; Exact mapped bytes 74 2B: je 0x4f6d50
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0a0h], 3f107h
        ; Exact mapped bytes 74 1A: je 0x4f6d4e
        __asm _emit 0x74
        __asm _emit 0x1a
        push 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 A0 00 00 00: call dword ptr [edx + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3C: jmp 0x4f6d8c
        __asm _emit 0xeb
        __asm _emit 0x3c
        ; Exact mapped bytes E8 1B AE 03 00: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 25h
        push 6722c0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 F8 34 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 B8 00 00 00: call dword ptr [edx + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x4f6d84
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E C5 00 00: call 0x503310
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x4f6d8c
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5E C6 00 00: call 0x5033ea
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
