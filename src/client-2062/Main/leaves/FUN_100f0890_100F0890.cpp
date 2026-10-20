// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F0890 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_100f0890_100F0890() {
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
        ; Exact mapped bytes 8B 89 0C 5C 00 00: mov ecx, dword ptr [ecx + 0x5c0c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 2B D9 F1 FF: call 0x1000e1d0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd9
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
