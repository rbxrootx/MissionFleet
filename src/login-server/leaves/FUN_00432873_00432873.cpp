// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432873 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_00432873_00432873() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        mov dword ptr [esi + 4], eax
        add eax, 40h
        push eax
        push 40h
        ; Exact mapped bytes FF 15 1C C2 43 00: call dword ptr [0x43c21c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        mov dword ptr [esi], eax
        ; Exact mapped bytes 74 40: je 0x4328cf
        __asm _emit 0x74
        __asm _emit 0x40
        push edi
        push eax
        ; Exact mapped bytes FF 15 20 C2 43 00: call dword ptr [0x43c220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push dword ptr [esi + 4]
        mov edi, eax
        push dword ptr [esp + 10h]
        push edi
        ; Exact mapped bytes E8 1A C3 FE FF: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes 66 81 7F 02 FF FF: cmp word ptr [edi + 2], 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 05: jne 0x4328b6
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [edi + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x4328b8
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, dword ptr [edi]
        push dword ptr [esi]
        not eax
        shr eax, 6
        and eax, 1
        mov dword ptr [esi + 8], eax
        ; Exact mapped bytes FF 15 24 C2 43 00: call dword ptr [0x43c224]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 1
        pop eax
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
