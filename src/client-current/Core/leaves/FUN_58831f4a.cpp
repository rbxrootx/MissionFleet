// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831F4A .. +0xA bytes.
extern "C" __declspec(naked) void FUN_58831f4a() {
    __asm {
        ; Exact mapped bytes FF 75 E3: push dword ptr [ebp - 0x1d]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xe3
        ; Exact mapped bytes E8 24 FA FF FF: call 0x58831976
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
