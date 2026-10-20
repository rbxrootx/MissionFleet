// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042EEB7 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_0042eeb7_0042EEB7() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 6D 2A 00 00: call 0x43192c
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        lea eax, [esi + 1ch]
        push 0
        push eax
        mov dword ptr [esi], 43dd10h
        ; Exact mapped bytes E8 0E FC FE FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov eax, esi
        pop esi
        ret
    }
}
