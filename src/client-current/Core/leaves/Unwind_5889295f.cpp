// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5889295F .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_5889295f() {
    __asm {
        ; Exact mapped bytes FF 75 E8: push dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xe8
        ; Exact mapped bytes FF 75 E4: push dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes E8 AF FF F9 FF: call 0x58832919
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
