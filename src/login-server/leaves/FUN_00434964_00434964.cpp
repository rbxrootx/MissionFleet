// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434964 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_00434964_00434964() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        lea eax, [ebp - 20h]
        push 20h
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 94 C3 43 00: call dword ptr [0x43c394]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 15 64 C2 43 00: call dword ptr [0x43c264]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        inc eax
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
