// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883D216 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_5883d216() {
    __asm {
        ; Exact mapped bytes 8B 81 54 38 00 00: mov eax, dword ptr [ecx + 0x3854]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
