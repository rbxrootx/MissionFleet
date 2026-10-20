// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DA4A0 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_588da4a0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 12f4h]
        mov edx, dword ptr [ecx + 6ch]
        push eax
        push 5898d18ch
        push 80h
        push edx
        ; Exact mapped bytes E8 A2 15 E7 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x15
        __asm _emit 0xe7
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
