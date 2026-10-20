// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004328E1 .. +0x6 bytes.
extern "C" __declspec(naked) void FUN_004328e1_004328E1() {
    __asm {
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 83 21 00: and dword ptr [ecx], 0
        __asm _emit 0x83
        __asm _emit 0x21
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
