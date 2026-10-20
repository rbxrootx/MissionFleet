// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588321E7 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_588321e7() {
    __asm {
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0F: jne 0x588321fa
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes FF 75 1C: push dword ptr [ebp + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes FF 75 10: push dword ptr [ebp + 0x10]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 87 FB FF FF: call 0x58831d81
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
