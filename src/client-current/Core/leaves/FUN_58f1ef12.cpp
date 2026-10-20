// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F1EF12 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_58f1ef12() {
    __asm {
        ; Exact mapped bytes 0F 85 63 EA 05 00: jne 0x58f7d97b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x63
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 8D 95 EC FE FF FF: lea edx, [ebp - 0x114]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes A1 C0 35 D1 58: mov eax, dword ptr [0x58d135c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x35
        __asm _emit 0xd1
        __asm _emit 0x58
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes E9 48 EA 05 00: jmp 0x58f7d975
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
    }
}
