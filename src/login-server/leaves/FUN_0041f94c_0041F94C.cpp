// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041F94C .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_0041f94c_0041F94C() {
    __asm {
        ; Exact mapped bytes 83 7D E0 00: cmp dword ptr [ebp - 0x20], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xe0
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x41f963
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes FF 75 18: push dword ptr [ebp + 0x18]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes FF 75 E4: push dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes FF 75 0C: push dword ptr [ebp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 21 FF FF FF: call 0x41f884
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
