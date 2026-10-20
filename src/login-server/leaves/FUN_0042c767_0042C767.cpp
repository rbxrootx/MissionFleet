// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042C767 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_0042c767_0042C767() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0ch]
        mov eax, dword ptr [esi]
        cmp ecx, dword ptr [eax - 8]
        ; Exact mapped bytes 7F 12: jg 0x42c787
        __asm _emit 0x7f
        __asm _emit 0x12
        push dword ptr [esp + 8]
        add eax, ecx
        push eax
        ; Exact mapped bytes E8 E3 31 FF FF: call 0x41f964
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test eax, eax
        pop ecx
        ; Exact mapped bytes 75 05: jne 0x42c78c
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x42c78e
        __asm _emit 0xeb
        __asm _emit 0x02
        sub eax, dword ptr [esi]
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
