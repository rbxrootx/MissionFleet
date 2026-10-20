// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004174E2 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_004174e2_004174E2() {
    __asm {
        ; Exact mapped bytes C7 01 90 E8 43 00: mov dword ptr [ecx], 0x43e890
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x90
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
