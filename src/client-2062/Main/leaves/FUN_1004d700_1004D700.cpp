// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004D700 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_1004d700_1004D700() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push 0
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x1004d724
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [esp + 10h]
        push edx
        push eax
        mov eax, dword ptr [esp + 10h]
        push 1
        push eax
        push 80011011h
        ; Exact mapped bytes E8 2F E8 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esp + 8]
        push 0
        push 0
        push 2
        push edx
        push 80011011h
        ; Exact mapped bytes E8 17 E8 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
