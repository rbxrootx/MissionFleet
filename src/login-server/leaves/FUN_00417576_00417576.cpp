// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417576 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_00417576_00417576() {
    __asm {
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push dword ptr [ecx + 4]
        ; Exact mapped bytes FF 15 94 C0 43 00: call dword ptr [0x43c094]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
