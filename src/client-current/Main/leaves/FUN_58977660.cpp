// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58977660 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_58977660() {
    __asm {
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 AC C2 98 58: call dword ptr [0x5898c2ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xc2
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
