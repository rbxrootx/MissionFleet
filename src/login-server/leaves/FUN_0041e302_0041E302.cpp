// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E302 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_0041e302_0041E302() {
    __asm {
        ; Exact mapped bytes C7 01 DC F0 43 00: mov dword ptr [ecx], 0x43f0dc
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xdc
        __asm _emit 0xf0
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
