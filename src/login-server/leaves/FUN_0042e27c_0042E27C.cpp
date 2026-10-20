// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E27C .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_0042e27c_0042E27C() {
    __asm {
        ; Exact mapped bytes 8B 41 38: mov eax, dword ptr [ecx + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x38
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0A: jne 0x42e28d
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes FF 71 1C: push dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x71
        __asm _emit 0x1c
        ; Exact mapped bytes FF 15 E0 C4 43 00: call dword ptr [0x43c4e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xc4
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
        ; Exact mapped bytes FF A2 90 00 00 00: jmp dword ptr [edx + 0x90]
        __asm _emit 0xff
        __asm _emit 0xa2
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
