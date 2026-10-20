// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886EB1F .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_5886eb1f() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 05 AD 00 00: call 0x5887982a
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
