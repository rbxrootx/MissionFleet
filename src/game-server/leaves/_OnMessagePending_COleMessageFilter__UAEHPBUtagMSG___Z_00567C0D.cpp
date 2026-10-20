// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00567C0D .. +0x42 bytes.
extern "C" __declspec(naked) void _OnMessagePending_COleMessageFilter__UAEHPBUtagMSG___Z_00567C0D() {
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
        ; Exact mapped bytes FF 15 84 25 5E 00: call dword ptr [0x5e2584]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x567c46
        __asm _emit 0x74
        __asm _emit 0x13
        mov dword ptr [ebp - 4], 1
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 88 25 5E 00: call dword ptr [0x5e2588]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB D7: jmp 0x567c1d
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
