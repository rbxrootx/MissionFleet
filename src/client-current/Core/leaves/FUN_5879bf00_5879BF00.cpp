// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879BF00 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_5879bf00_5879BF00() {
    __asm {
        test byte ptr [ecx + 94h], 1
        ; Exact mapped bytes 74 08: je 0x5879bf11
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 8
        ; Exact mapped bytes E9 FF 26 D8 FF: jmp 0x5851e610
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x26
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [ecx + 4]
        mov ecx, eax
        cmp dword ptr [eax + 14h], 0fh
        ; Exact mapped bytes 76 02: jbe 0x5879bf22
        __asm _emit 0x76
        __asm _emit 0x02
        mov ecx, dword ptr [eax]
        push dword ptr [eax + 10h]
        push ecx
        push edx
        ; Exact mapped bytes E8 24 F1 FF FF: call 0x5879b050
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
