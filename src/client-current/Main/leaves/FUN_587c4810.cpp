// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4810 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_587c4810() {
    __asm {
        ; Exact mapped bytes 8B 41 F8: mov eax, dword ptr [ecx - 8]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes C7 44 0A F8 94 AD 99 58: mov dword ptr [edx + ecx - 8], 0x5899ad94
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0xf8
        __asm _emit 0x94
        __asm _emit 0xad
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
