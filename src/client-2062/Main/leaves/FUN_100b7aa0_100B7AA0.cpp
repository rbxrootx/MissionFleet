// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B7AA0 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_100b7aa0_100B7AA0() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 25 FF FF 00 00: and eax, 0xffff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 81 AC 00 00 00: mov dword ptr [ecx + 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 A4 00 00 00: mov ecx, dword ptr [ecx + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 65 7C 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
