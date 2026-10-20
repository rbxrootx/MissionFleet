// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850037 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_58850037() {
    __asm {
        ; Exact mapped bytes C7 41 04 00 00 00 00: mov dword ptr [ecx + 4], 0
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes C7 41 08 00 00 00 00: mov dword ptr [ecx + 8], 0
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 41 04 EC 25 8C 58: mov dword ptr [ecx + 4], 0x588c25ec
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0xec
        __asm _emit 0x25
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes C7 01 E4 25 8C 58: mov dword ptr [ecx], 0x588c25e4
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xe4
        __asm _emit 0x25
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
