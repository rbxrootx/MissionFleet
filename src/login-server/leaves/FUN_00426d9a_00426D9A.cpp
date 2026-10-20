// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426D9A .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_00426d9a_00426D9A() {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 14h
        ; Exact mapped bytes 7D 0B: jge 0x426dae
        __asm _emit 0x7d
        __asm _emit 0x0b
        add eax, 1ch
        push eax
        ; Exact mapped bytes E8 BF B8 FF FF: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ret
        mov eax, dword ptr [esp + 8]
        add eax, 20h
        push eax
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ret
    }
}
