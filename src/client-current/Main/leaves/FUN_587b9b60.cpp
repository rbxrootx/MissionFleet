// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B9B60 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_587b9b60() {
    __asm {
        mov eax, dword ptr [esp + 0ch]
        push 0
        push 4
        lea edx, [esp + 14h]
        push edx
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [esp + 18h], eax
        mov eax, dword ptr [esp + 14h]
        push eax
        push edx
        push 80015000h
        ; Exact mapped bytes E8 EB 70 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x70
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
