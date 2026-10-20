// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E34E .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_0042e34e_0042E34E() {
    __asm {
        ; Exact mapped bytes 8B 41 38: mov eax, dword ptr [ecx + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x38
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0A: jne 0x42e35f
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes FF 71 1C: push dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x71
        __asm _emit 0x1c
        ; Exact mapped bytes FF 15 10 C5 43 00: call dword ptr [0x43c510]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes FF A2 A4 00 00 00: jmp dword ptr [edx + 0xa4]
        __asm _emit 0xff
        __asm _emit 0xa2
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
