// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006C460 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_1006c460_1006C460() {
    __asm {
        ; Exact mapped bytes 8B 81 64 04 01 00: mov eax, dword ptr [ecx + 0x10464]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 80 E4 F4: and ah, 0xf4
        __asm _emit 0x80
        __asm _emit 0xe4
        __asm _emit 0xf4
        ; Exact mapped bytes 0D 20 04 00 00: or eax, 0x420
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 81 64 04 01 00: mov dword ptr [ecx + 0x10464], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
