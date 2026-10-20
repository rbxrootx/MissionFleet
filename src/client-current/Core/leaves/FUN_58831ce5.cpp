// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831CE5 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_58831ce5() {
    __asm {
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0F: jne 0x58831cf8
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes FF 75 18: push dword ptr [ebp + 0x18]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes FF 75 0C: push dword ptr [ebp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 89 00 00 00: call 0x58831d81
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
