// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FA1F0 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_100fa1f0_100FA1F0() {
    __asm {
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 8B 54 24 04: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 89 18 01 00 00: mov ecx, dword ptr [ecx + 0x118]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 8B 9E 00 00: call 0x10104090
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
