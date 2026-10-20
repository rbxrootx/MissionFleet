// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004E5A0 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_1004e5a0_1004E5A0() {
    __asm {
        ; Exact mapped bytes C7 41 68 01 00 00 00: mov dword ptr [ecx + 0x68], 1
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
