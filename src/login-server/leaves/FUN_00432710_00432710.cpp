// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432710 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_00432710_00432710() {
    __asm {
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes C7 40 04 01 00 00 00: mov dword ptr [eax + 4], 1
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
