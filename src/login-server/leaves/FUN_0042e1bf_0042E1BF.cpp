// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E1BF .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_0042e1bf_0042E1BF() {
    __asm {
        push esi
        mov esi, ecx
        test byte ptr [esi + 25h], 1
        ; Exact mapped bytes 74 19: je 0x42e1e1
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes E8 E6 7A 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 1038h]
        push dword ptr [esp + 8]
        mov ecx, eax
        mov edx, dword ptr [eax]
        push esi
        ; Exact mapped bytes FF 52 24: call dword ptr [edx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x24
        ; Exact mapped bytes EB 0D: jmp 0x42e1ee
        __asm _emit 0xeb
        __asm _emit 0x0d
        push dword ptr [esp + 8]
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 F0 C4 43 00: call dword ptr [0x43c4f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
