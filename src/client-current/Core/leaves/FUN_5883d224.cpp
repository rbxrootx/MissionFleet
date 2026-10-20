// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883D224 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_5883d224() {
    __asm {
        ; Exact mapped bytes 8D 81 40 12 00 00: lea eax, [ecx + 0x1240]
        __asm _emit 0x8d
        __asm _emit 0x81
        __asm _emit 0x40
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
