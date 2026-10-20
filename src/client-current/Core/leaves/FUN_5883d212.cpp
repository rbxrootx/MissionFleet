// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883D212 .. +0x4 bytes.
extern "C" __declspec(naked) void FUN_5883d212() {
    __asm {
        ; Exact mapped bytes 8D 41 1C: lea eax, [ecx + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x41
        __asm _emit 0x1c
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
