// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E68B .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_0042e68b_0042E68B() {
    __asm {
        push esi
        mov esi, ecx
        push dword ptr [esp + 8]
        ; Exact mapped bytes FF 15 10 C2 43 00: call dword ptr [0x43c210]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push dword ptr [esp + 10h]
        mov ecx, esi
        push 0
        push dword ptr [esp + 14h]
        push eax
        ; Exact mapped bytes E8 04 00 00 00: call 0x42e6ae
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
