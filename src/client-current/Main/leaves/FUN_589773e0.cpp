// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589773E0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_589773e0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push 0ddh
        push esi
        ; Exact mapped bytes E8 60 F9 FF FF: call 0x58976d50
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push 4
        push esi
        ; Exact mapped bytes E8 B8 F9 FF FF: call 0x58976db0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0bch]
        push eax
        push esi
        ; Exact mapped bytes E8 AB F9 FF FF: call 0x58976db0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        pop esi
        ret
    }
}
