// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58804480 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_58804480() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 66 8B 90 84 00 00 00: mov dx, word ptr [eax + 0x84]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 91 10 01 00 00: mov word ptr [ecx + 0x110], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 81 14 01 00 00: mov dword ptr [ecx + 0x114], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
