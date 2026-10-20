// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F2F9 .. +0xC bytes.
extern "C" __declspec(naked) void FUN_5886f2f9() {
    __asm {
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes FF 31: push dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x31
        ; Exact mapped bytes E8 61 49 FF FF: call 0x58863c64
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
