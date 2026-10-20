// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892FB0 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_58892fb0_58892FB0() {
    __asm {
        push ebp
        mov ebp, esp
        push 584ceda0h
        push 3
        push 18h
        mov eax, 18h
        imul ecx, eax, 0
        add ecx, 58965ed0h
        push ecx
        ; Exact mapped bytes E8 29 ED F9 FF: call 0x58831cf9
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xed
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        pop ebp
        ret
    }
}
