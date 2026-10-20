// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896DE30 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_5896de30() {
    __asm {
        ; Exact mapped bytes C7 01 B0 2B 9A 58: mov dword ptr [ecx], 0x589a2bb0
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xb0
        __asm _emit 0x2b
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes E9 55 02 FA FF: jmp 0x5890e090
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0xfa
        __asm _emit 0xff
    }
}
