// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437411 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_00437411_00437411() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, esi
        cmp byte ptr [esi], 0
        ; Exact mapped bytes 74 22: je 0x437440
        __asm _emit 0x74
        __asm _emit 0x22
        mov al, byte ptr [esi]
        cmp al, 5ch
        ; Exact mapped bytes 74 08: je 0x43742c
        __asm _emit 0x74
        __asm _emit 0x08
        cmp al, 2fh
        ; Exact mapped bytes 74 04: je 0x43742c
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, 3ah
        ; Exact mapped bytes 75 09: jne 0x437435
        __asm _emit 0x75
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 BB 83 FE FF: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        mov edi, eax
        push esi
        ; Exact mapped bytes E8 B2 83 FE FF: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        mov esi, eax
        ; Exact mapped bytes EB D9: jmp 0x437419
        __asm _emit 0xeb
        __asm _emit 0xd9
        cmp dword ptr [esp + 10h], 0
        ; Exact mapped bytes 75 0A: jne 0x437451
        __asm _emit 0x75
        __asm _emit 0x0a
        push edi
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        inc eax
        ; Exact mapped bytes EB 11: jmp 0x437462
        __asm _emit 0xeb
        __asm _emit 0x11
        push dword ptr [esp + 14h]
        push edi
        push dword ptr [esp + 18h]
        ; Exact mapped bytes FF 15 28 C2 43 00: call dword ptr [0x43c228]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        xor eax, eax
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
