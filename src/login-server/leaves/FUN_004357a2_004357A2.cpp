// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004357A2 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_004357a2_004357A2() {
    __asm {
        ; Exact mapped bytes 8D 44 24 0C: lea eax, [esp + 0xc]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 74 24 10: push dword ptr [esp + 0x10]
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes FF 74 24 10: push dword ptr [esp + 0x10]
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes E8 B3 FE FF FF: call 0x435669
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
