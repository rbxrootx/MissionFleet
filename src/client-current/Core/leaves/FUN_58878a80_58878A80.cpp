// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58878A80 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_58878a80_58878A80() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 80 99 96 58 00: cmp dword ptr [0x58969980], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 26: jne 0x58878ab4
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x58878aa8
        __asm _emit 0x74
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x58878aa8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp + 0ch], eax
        mov dword ptr [ebp + 8], ecx
        pop ebp
        ; Exact mapped bytes E9 68 FF FF FF: jmp 0x58878a10
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push ecx
        ; Exact mapped bytes E8 E1 8F FE FF: call 0x58861a90
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        pop ebp
        ret
        push 0
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0C 00 00 00: call 0x58878ad0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        pop ebp
        ret
    }
}
