// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E24D .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_0042e24d_0042E24D() {
    __asm {
        mov eax, dword ptr [ecx + 38h]
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x42e267
        __asm _emit 0x75
        __asm _emit 0x13
        push dword ptr [esp + 8]
        push dword ptr [esp + 8]
        push dword ptr [ecx + 1ch]
        ; Exact mapped bytes FF 15 E8 C4 43 00: call dword ptr [0x43c4e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x42e279
        __asm _emit 0xeb
        __asm _emit 0x12
        push dword ptr [esp + 8]
        mov edx, dword ptr [eax]
        mov ecx, eax
        push dword ptr [esp + 8]
        ; Exact mapped bytes FF 92 84 00 00 00: call dword ptr [edx + 0x84]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
