// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419F03 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_00419f03_00419F03() {
    __asm {
        push esi
        mov esi, ecx
        push dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        push 8
        push 0fffffdfah
        push esi
        ; Exact mapped bytes FF 50 6C: call dword ptr [eax + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x6c
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x419f32
        __asm _emit 0x75
        __asm _emit 0x14
        push dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        push 8
        push 0fffffdfbh
        push esi
        ; Exact mapped bytes FF 50 6C: call dword ptr [eax + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x6c
        add esp, 10h
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
