// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431245 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_00431245_00431245() {
    __asm {
        push ebx
        push esi
        push edi
        xor edi, edi
        cmp dword ptr [esp + 10h], edi
        mov ebx, ecx
        ; Exact mapped bytes 74 35: je 0x431287
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes E8 5C 4A 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [eax + 0ch]
        push 0f0h
        push dword ptr [esp + 14h]
        push esi
        ; Exact mapped bytes FF 15 70 C2 43 00: call dword ptr [0x43c270]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 74 19: je 0x431287
        __asm _emit 0x74
        __asm _emit 0x19
        push eax
        push esi
        ; Exact mapped bytes FF 15 58 C1 43 00: call dword ptr [0x43c158]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 75 04: jne 0x43127e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 11: jmp 0x43128f
        __asm _emit 0xeb
        __asm _emit 0x11
        push eax
        ; Exact mapped bytes FF 15 10 C2 43 00: call dword ptr [0x43c210]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 06 00 00 00: call 0x431295
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
