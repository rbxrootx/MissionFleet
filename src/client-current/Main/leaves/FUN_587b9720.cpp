// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B9720 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_587b9720() {
    __asm {
        movzx eax, word ptr [esp + 8]
        movzx edx, word ptr [esp + 0ch]
        push 0
        xor eax, 0aah
        push 0
        shl eax, 10h
        push 0
        xor edx, 0aah
        or eax, edx
        push eax
        mov eax, dword ptr [esp + 20h]
        shl eax, 10h
        push eax
        push 80020300h
        ; Exact mapped bytes E8 1D 75 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x75
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
