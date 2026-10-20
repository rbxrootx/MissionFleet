// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100325D0 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_100325d0_100325D0() {
    __asm {
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C7 41 58 01 00 00 00: mov dword ptr [ecx + 0x58], 1
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 89 41 5C: mov dword ptr [ecx + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x5c
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
