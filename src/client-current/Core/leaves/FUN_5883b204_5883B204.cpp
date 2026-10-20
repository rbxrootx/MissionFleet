// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B204 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5883b204_5883B204() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        lea ecx, [esi + 10h]
        ; Exact mapped bytes E8 AD C2 C8 FF: call 0x584c74c0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xc2
        __asm _emit 0xc8
        __asm _emit 0xff
        push 40h
        push 1
        push esi
        ; Exact mapped bytes E8 8F F0 FF FF: call 0x5883a2ac
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
