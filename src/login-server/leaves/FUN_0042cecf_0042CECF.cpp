// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CECF .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_0042cecf_0042CECF() {
    __asm {
        push esi
        push edi
        push 0
        ; Exact mapped bytes 8B 3D 4C C5 43 00: mov edi, dword ptr [0x43c54c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push dword ptr [esp + 10h]
        mov esi, ecx
        push 1002h
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push eax
        ; Exact mapped bytes E8 7A 01 00 00: call 0x42d069
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x42cf03
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        push dword ptr [esp + 10h]
        push 1003h
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
