// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587994F0 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_587994f0_587994F0() {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0ch]
        mov dword ptr [esi], 588b6c94h
        ; Exact mapped bytes E8 DF 0F D1 FF: call 0x584aa4e0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x0f
        __asm _emit 0xd1
        __asm _emit 0xff
        lea eax, [esi + 4]
        mov dword ptr [esi], 58894ccch
        push eax
        ; Exact mapped bytes E8 B3 3E 0B 00: call 0x5884d3c3
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x3e
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 0B: je 0x58799525
        __asm _emit 0x74
        __asm _emit 0x0b
        push 24h
        push esi
        ; Exact mapped bytes E8 12 7B 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x7b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
