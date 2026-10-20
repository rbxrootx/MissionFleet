// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E0D1 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_0042e0d1_0042E0D1() {
    __asm {
        mov eax, dword ptr [ecx + 34h]
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x42e0ed
        __asm _emit 0x75
        __asm _emit 0x15
        push dword ptr [esp + 4]
        push dword ptr [ecx + 1ch]
        ; Exact mapped bytes FF 15 04 C5 43 00: call dword ptr [0x43c504]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 ED 11 00 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x42e0f8
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [eax]
        push dword ptr [esp + 4]
        mov ecx, eax
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
