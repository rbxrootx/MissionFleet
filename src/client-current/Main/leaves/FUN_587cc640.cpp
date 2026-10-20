// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CC640 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_587cc640() {
    __asm {
        ; Exact mapped bytes C7 01 A4 B2 99 58: mov dword ptr [ecx], 0x5899b2a4
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xa4
        __asm _emit 0xb2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
