// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E059 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_0042e059_0042E059() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes E8 F3 FA FF FF: call 0x42db54
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 36: push dword ptr [esi]
        __asm _emit 0xff
        __asm _emit 0x36
        ; Exact mapped bytes E8 31 1A FF FF: call 0x41fa99
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
