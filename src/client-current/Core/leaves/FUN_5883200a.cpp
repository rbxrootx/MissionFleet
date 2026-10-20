// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883200A .. +0xA bytes.
extern "C" __declspec(naked) void FUN_5883200a() {
    __asm {
        ; Exact mapped bytes FF 75 E0: push dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E8 64 F9 FF FF: call 0x58831976
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
