// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A9070 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_587a9070() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 14h]
        mov esi, ecx
        test edi, edi
        ; Exact mapped bytes 75 17: jne 0x587a9093
        __asm _emit 0x75
        __asm _emit 0x17
        push 661h
        push 589999a4h
        push 58999b38h
        ; Exact mapped bytes E8 3E 3E 1D 00: call 0x5897cece
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x3e
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 0ch
        push 0ch
        ; Exact mapped bytes E8 B4 3B 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x3b
        __asm _emit 0x1d
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov dword ptr [esp + 18h], eax
        mov dword ptr [eax + 8], edi
        add esp, 4
        lea eax, [esp + 14h]
        push eax
        lea ecx, [esi + 28h]
        ; Exact mapped bytes E8 12 C4 FF FF: call 0x587a54d0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
