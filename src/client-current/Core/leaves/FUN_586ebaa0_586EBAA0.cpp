// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586EBAA0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_586ebaa0_586EBAA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 20 C3 FF FF: call 0x586e7dd0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 37 B2 D9 FF: call 0x58486cf0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xb2
        __asm _emit 0xd9
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
