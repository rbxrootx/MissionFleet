// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437A20 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_00437a20_00437A20() {
    __asm {
        mov eax, dword ptr [ecx + 8]
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x437a36
        __asm _emit 0x74
        __asm _emit 0x0f
        push dword ptr [esp + 8]
        mov ecx, dword ptr [eax]
        push dword ptr [esp + 8]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        ; Exact mapped bytes EB 0D: jmp 0x437a43
        __asm _emit 0xeb
        __asm _emit 0x0d
        push dword ptr [esp + 8]
        push dword ptr [esp + 8]
        ; Exact mapped bytes E8 9B FF FF FF: call 0x4379de
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
