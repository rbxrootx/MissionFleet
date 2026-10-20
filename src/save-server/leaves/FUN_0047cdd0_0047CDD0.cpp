// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047CDD0 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_0047cdd0_0047CDD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 11 3E 00 00: call 0x480c00
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 D1 FE FF FF: call 0x47ccd0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ret
    }
}
