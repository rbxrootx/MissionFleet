// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D05F0 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_100d05f0_100D05F0() {
    __asm {
        ; Exact mapped bytes 8B 54 24 04: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4C 91 5C: mov ecx, dword ptr [ecx + edx*4 + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x91
        __asm _emit 0x5c
        ; Exact mapped bytes E8 1E F1 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xf1
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
