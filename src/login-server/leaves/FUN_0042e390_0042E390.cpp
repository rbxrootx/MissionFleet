// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E390 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_0042e390_0042E390() {
    __asm {
        mov eax, dword ptr [ecx + 38h]
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x42e3a7
        __asm _emit 0x75
        __asm _emit 0x10
        push dword ptr [ecx + 1ch]
        ; Exact mapped bytes FF 15 CC C4 43 00: call dword ptr [0x43c4cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 32 0F 00 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ret
        mov edx, dword ptr [eax]
        mov ecx, eax
        ; Exact mapped bytes FF A2 AC 00 00 00: jmp dword ptr [edx + 0xac]
        __asm _emit 0xff
        __asm _emit 0xa2
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
