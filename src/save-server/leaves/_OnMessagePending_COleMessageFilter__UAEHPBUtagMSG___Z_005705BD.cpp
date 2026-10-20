// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005705BD .. +0x42 bytes.
extern "C" __declspec(naked) void _OnMessagePending_COleMessageFilter__UAEHPBUtagMSG___Z_005705BD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 4], 0
        push 3
        push 0fh
        push 0fh
        push 0
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 15 88 BE 68 00: call dword ptr [0x68be88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x5705f6
        __asm _emit 0x74
        __asm _emit 0x13
        mov dword ptr [ebp - 4], 1
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 8C BE 68 00: call dword ptr [0x68be8c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB D7: jmp 0x5705cd
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
