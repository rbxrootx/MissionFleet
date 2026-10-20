// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588305C6 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_588305c6_588305C6() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 8C FF FF FF: call 0x5883055d
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [ebp + 8], 1
        ; Exact mapped bytes 74 0A: je 0x588305e1
        __asm _emit 0x74
        __asm _emit 0x0a
        push 20h
        push esi
        ; Exact mapped bytes E8 55 0A 00 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov eax, esi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
