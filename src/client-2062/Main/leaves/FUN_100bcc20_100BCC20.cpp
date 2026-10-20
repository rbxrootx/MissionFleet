// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BCC20 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_100bcc20_100BCC20() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes A3 04 D1 1A 10: mov dword ptr [0x101ad104], eax
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 49 64: mov ecx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x64
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 09 14 00 00: call 0x100be040
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
