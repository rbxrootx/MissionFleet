// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B94E0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_587b94e0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        push 0
        push eax
        ; Exact mapped bytes A1 A0 B4 A0 58: mov eax, dword ptr [0x58a0b4a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        push edx
        push 0
        push eax
        push 80010fa1h
        ; Exact mapped bytes E8 72 77 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x77
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
