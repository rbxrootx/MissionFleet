// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58502CE0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_58502ce0_58502CE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A0 EA FF FF: call 0x58501790
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 F7 3F F8 FF: call 0x58486cf0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x3f
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
