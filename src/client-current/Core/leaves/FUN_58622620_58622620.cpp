// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58622620 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_58622620_58622620() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1A: je 0x58622647
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AB 6E E9 FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x6e
        __asm _emit 0xe9
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 02 FE FF FF: call 0x58622440
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0A 00 00 00: call 0x58622650
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
