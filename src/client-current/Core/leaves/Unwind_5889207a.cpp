// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5889207A .. +0xA bytes.
extern "C" __declspec(naked) void Unwind_5889207a() {
    __asm {
        ; Exact mapped bytes B9 E8 5E 96 58: mov ecx, 0x58965ee8
        __asm _emit 0xb9
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E9 1C CD C3 FF: jmp 0x584ceda0
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0xcd
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
