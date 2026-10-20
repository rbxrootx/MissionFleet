// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58895540 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_58895540() {
    __asm {
        ; Exact mapped bytes 8B 81 A8 00 00 00: mov eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 70: mov ecx, dword ptr [ecx + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x70
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 4F 92 EE FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x92
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
