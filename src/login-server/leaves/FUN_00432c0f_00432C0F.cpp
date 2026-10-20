// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432C0F .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_00432c0f_00432C0F() {
    __asm {
        ; Exact mapped bytes E8 C5 30 00 00: call 0x435cd9
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 40 10: inc dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x40
        __asm _emit 0x10
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
