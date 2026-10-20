// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042260A .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_0042260a_0042260A() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        push esi
        cmp dword ptr [eax*4 + 44abf8h], 0
        lea esi, [eax*4 + 44abf8h]
        ; Exact mapped bytes 75 3E: jne 0x422660
        __asm _emit 0x75
        __asm _emit 0x3e
        push edi
        push 18h
        ; Exact mapped bytes E8 BA CD FF FF: call 0x41f3e4
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        pop ecx
        test edi, edi
        ; Exact mapped bytes 75 08: jne 0x422639
        __asm _emit 0x75
        __asm _emit 0x08
        push 11h
        ; Exact mapped bytes E8 FF C9 FF FF: call 0x41f037
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push 11h
        ; Exact mapped bytes E8 CA FF FF FF: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi], 0
        pop ecx
        push edi
        ; Exact mapped bytes 75 0A: jne 0x422651
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes FF 15 C4 C1 43 00: call dword ptr [0x43c1c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [esi], edi
        ; Exact mapped bytes EB 06: jmp 0x422657
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes E8 C8 CE FF FF: call 0x41f51e
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push 11h
        ; Exact mapped bytes E8 0D 00 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 7C C1 43 00: call dword ptr [0x43c17c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        pop esi
        pop ebp
        ret
    }
}
