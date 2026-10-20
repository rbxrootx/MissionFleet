// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100188B0 .. +0x5 bytes.
extern "C" __declspec(naked) void FUN_100188b0_100188B0() {
    __asm {
        ; Exact mapped bytes 80 49 24 04: or byte ptr [ecx + 0x24], 4
        __asm _emit 0x80
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
