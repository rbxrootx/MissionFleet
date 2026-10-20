// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588677CE .. +0xA bytes.
extern "C" __declspec(naked) void FUN_588677ce() {
    __asm {
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 40 25 FF FF: call 0x58859d16
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
