// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B4460 .. +0xC bytes.
extern "C" __declspec(naked) void FUN_587b4460() {
    __asm {
        ; Exact mapped bytes 8B 81 EC 02 00 00: mov eax, dword ptr [ecx + 0x2ec]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
