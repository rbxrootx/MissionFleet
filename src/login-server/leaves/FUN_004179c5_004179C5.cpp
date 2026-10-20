// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004179C5 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_004179c5_004179C5() {
    __asm {
        mov edx, dword ptr [esp + 8]
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x4179cf
        __asm _emit 0x75
        __asm _emit 0x02
        mov edx, ecx
        mov eax, dword ptr [esp + 4]
        cmp edx, ecx
        ; Exact mapped bytes 75 05: jne 0x4179dc
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes 66 3B 01: cmp ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x01
        ; Exact mapped bytes 74 11: je 0x4179ed
        __asm _emit 0x74
        __asm _emit 0x11
        push eax
        push 0
        push edx
        push ecx
        ; Exact mapped bytes FF 15 58 C3 43 00: call dword ptr [0x43c358]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 A6 FE FF FF: call 0x417893
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
