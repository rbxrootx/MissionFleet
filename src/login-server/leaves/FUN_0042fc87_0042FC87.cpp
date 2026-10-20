// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042FC87 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_0042fc87_0042FC87() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0ch]
        push edi
        mov edi, ecx
        cmp dword ptr [esi], 1
        ; Exact mapped bytes 75 16: jne 0x42fcaa
        __asm _emit 0x75
        __asm _emit 0x16
        push dword ptr [esi + 14h]
        ; Exact mapped bytes E8 13 2A 00 00: call 0x4326af
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x42fcb8
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [eax]
        push esi
        mov ecx, eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        ; Exact mapped bytes EB 15: jmp 0x42fcbf
        __asm _emit 0xeb
        __asm _emit 0x15
        push 0
        push dword ptr [esi + 14h]
        ; Exact mapped bytes E8 8A 0D 00 00: call 0x430a3e
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x42fcbf
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, edi
        ; Exact mapped bytes E8 80 F5 FF FF: call 0x42f23f
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
