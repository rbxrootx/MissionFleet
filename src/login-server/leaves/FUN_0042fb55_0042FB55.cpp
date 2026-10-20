// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042FB55 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_0042fb55_0042FB55() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 28h]
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x42fb84
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [esi]
        ; Exact mapped bytes FF 90 80 00 00 00: call dword ptr [eax + 0x80]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x42fb84
        __asm _emit 0x75
        __asm _emit 0x14
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 4C C4 43 00: call dword ptr [0x43c44c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 13: jmp 0x42fb97
        __asm _emit 0xeb
        __asm _emit 0x13
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push dword ptr [esi + 1ch]
        push eax
        ; Exact mapped bytes FF 15 60 C4 43 00: call dword ptr [0x43c460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        pop esi
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
