// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00418B7B .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_00418b7b_00418B7B() {
    __asm {
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 31: push 0x31
        __asm _emit 0x6a
        __asm _emit 0x31
        ; Exact mapped bytes FF 71 1C: push dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x71
        __asm _emit 0x1c
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 56 B8 01 00: call 0x4343e6
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
