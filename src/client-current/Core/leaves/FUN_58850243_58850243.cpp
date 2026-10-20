// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850243 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_58850243_58850243() {
    __asm {
        push 4
        mov eax, 58892d33h
        ; Exact mapped bytes E8 52 23 FE FF: call 0x588325a1
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E8 D2 F3 FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 20: jne 0x5885027a
        __asm _emit 0x75
        __asm _emit 0x20
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 DD 08 00 00: call 0x58850b43
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BB F3 FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
