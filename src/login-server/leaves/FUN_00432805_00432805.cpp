// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432805 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_00432805_00432805() {
    __asm {
        push esi
        ; Exact mapped bytes E8 A8 34 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov esi, eax
        ; Exact mapped bytes E8 8F 47 00 00: call 0x436fa3
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 1ch]
        push dword ptr [esp + 8]
        ; Exact mapped bytes E8 24 41 00 00: call 0x436944
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 EC 47 00 00: call 0x437013
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
