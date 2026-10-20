// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041C4DD .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_0041c4dd_0041C4DD() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 51 10: mov edx, dword ptr [ecx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8D 04 40: lea eax, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x40
        ; Exact mapped bytes C1 E0 04: shl eax, 4
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x04
        ; Exact mapped bytes 8B 44 10 04: mov eax, dword ptr [eax + edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x04
        ; Exact mapped bytes 03 41 08: add eax, dword ptr [ecx + 8]
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
