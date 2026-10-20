// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FDB00 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_588fdb00() {
    __asm {
        ; Exact mapped bytes 8B 81 00 01 00 00: mov eax, dword ptr [ecx + 0x100]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 6B E0 0A C2: xor eax, 0xc20ae06b
        __asm _emit 0x35
        __asm _emit 0x6b
        __asm _emit 0xe0
        __asm _emit 0x0a
        __asm _emit 0xc2
        ; Exact mapped bytes 3B 41 60: cmp eax, dword ptr [ecx + 0x60]
        __asm _emit 0x3b
        __asm _emit 0x41
        __asm _emit 0x60
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
