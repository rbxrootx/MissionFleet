// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B9550 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_587b9550() {
    __asm {
        movzx eax, word ptr [esp + 10h]
        mov edx, dword ptr [esp + 4]
        push 0
        push 0
        push 0
        shl edx, 10h
        or edx, dword ptr [esp + 14h]
        push eax
        mov eax, dword ptr [esp + 1ch]
        push edx
        push eax
        ; Exact mapped bytes E8 FE 76 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x76
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
