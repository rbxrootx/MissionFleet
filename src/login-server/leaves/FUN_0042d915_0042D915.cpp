// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D915 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_0042d915_0042D915() {
    __asm {
        ; Exact mapped bytes FF 74 24 04: push dword ptr [esp + 4]
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes E8 00 1C FF FF: call 0x41f51e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
