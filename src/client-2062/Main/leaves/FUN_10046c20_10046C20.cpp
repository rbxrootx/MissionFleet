// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10046C20 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_10046c20_10046C20() {
    __asm {
        ; Exact mapped bytes 8B 81 DC 02 00 00: mov eax, dword ptr [ecx + 0x2dc]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
