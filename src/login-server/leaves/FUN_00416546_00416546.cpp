// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416546 .. +0xE bytes.
extern "C" __declspec(naked) void FUN_00416546_00416546() {
    __asm {
        ; Exact mapped bytes 8B 09: mov ecx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x09
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 4C 24 04: cmp ecx, dword ptr [esp + 4]
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 0F 95 C0: setne al
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc0
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
