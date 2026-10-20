// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B96D0 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_587b96d0() {
    __asm {
        mov eax, dword ptr [esp + 1ch]
        movzx edx, word ptr [esp + 10h]
        push 0
        push eax
        neg eax
        sbb eax, eax
        and eax, dword ptr [esp + 20h]
        xor edx, 0aah
        push eax
        movzx eax, word ptr [esp + 18h]
        xor eax, 0aah
        shl eax, 10h
        or eax, edx
        push eax
        mov eax, dword ptr [esp + 24h]
        shl eax, 10h
        or eax, dword ptr [esp + 18h]
        push eax
        push 80020200h
        ; Exact mapped bytes E8 5F 75 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x75
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
