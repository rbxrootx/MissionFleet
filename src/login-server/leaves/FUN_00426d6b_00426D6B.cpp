// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426D6B .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_00426d6b_00426D6B() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, 44d3c0h
        cmp eax, ecx
        ; Exact mapped bytes 72 17: jb 0x426d8f
        __asm _emit 0x72
        __asm _emit 0x17
        cmp eax, 44d620h
        ; Exact mapped bytes 77 10: ja 0x426d8f
        __asm _emit 0x77
        __asm _emit 0x10
        sub eax, ecx
        sar eax, 5
        add eax, 1ch
        push eax
        ; Exact mapped bytes E8 DE B8 FF FF: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ret
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
