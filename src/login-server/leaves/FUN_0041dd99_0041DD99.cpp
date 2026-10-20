// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041DD99 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_0041dd99_0041DD99() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push 0
        push 400h
        push dword ptr [eax + 1ch]
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, eax
        shr ecx, 10h
        ; Exact mapped bytes 66 81 F9 4B 53: cmp cx, 0x534b
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x4b
        __asm _emit 0x53
        ; Exact mapped bytes 75 05: jne 0x41ddc0
        __asm _emit 0x75
        __asm _emit 0x05
        movzx eax, ax
        ; Exact mapped bytes EB 03: jmp 0x41ddc3
        __asm _emit 0xeb
        __asm _emit 0x03
        push 1
        pop eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
