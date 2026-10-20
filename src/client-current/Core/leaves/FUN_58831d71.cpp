// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831D71 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58831d71() {
    __asm {
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0B: jne 0x58831d80
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes FF 75 14: push dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 01 00 00 00: call 0x58831d81
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
