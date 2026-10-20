// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040EF60 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_0040ef60_0040EF60() {
    __asm {
        sub esp, 190h
        push esi
        mov esi, dword ptr [esp + 198h]
        test esi, esi
        ; Exact mapped bytes 75 04: jne 0x40ef76
        __asm _emit 0x75
        __asm _emit 0x04
        lea esi, [esp + 4]
        push esi
        push 2
        ; Exact mapped bytes FF 15 A4 C5 43 00: call dword ptr [0x43c5a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 31: jne 0x40efb4
        __asm _emit 0x75
        __asm _emit 0x31
        cmp byte ptr [esi], 2
        ; Exact mapped bytes 75 18: jne 0x40efa0
        __asm _emit 0x75
        __asm _emit 0x18
        xor eax, eax
        mov al, byte ptr [esi + 1]
        test al, al
        ; Exact mapped bytes 75 0F: jne 0x40efa0
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, 1
        pop esi
        add esp, 190h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        push 449934h
        ; Exact mapped bytes E8 69 5D 02 00: call 0x434d17
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 A8 C5 43 00: call dword ptr [0x43c5a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        xor eax, eax
        pop esi
        add esp, 190h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
