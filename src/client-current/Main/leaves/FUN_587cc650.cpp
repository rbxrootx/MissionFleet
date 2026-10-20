// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CC650 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_587cc650() {
    __asm {
        ; Exact mapped bytes C7 01 AC B2 99 58: mov dword ptr [ecx], 0x5899b2ac
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xac
        __asm _emit 0xb2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
