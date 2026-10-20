// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4760 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_587c4760() {
    __asm {
        ; Exact mapped bytes C7 01 84 AD 99 58: mov dword ptr [ecx], 0x5899ad84
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
