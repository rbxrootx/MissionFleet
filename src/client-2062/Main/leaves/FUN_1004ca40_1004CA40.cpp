// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004CA40 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_1004ca40_1004CA40() {
    __asm {
        ; Exact mapped bytes A1 18 57 1C 10: mov eax, dword ptr [0x101c5718]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        mov edi, ecx
        mov eax, dword ptr [eax + 1c8h]
        ; Exact mapped bytes 66 83 B8 9C 01 00 00 02: cmp word ptr [eax + 0x19c], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 75 30: jne 0x1004ca88
        __asm _emit 0x75
        __asm _emit 0x30
        push esi
        lea esi, [eax + 1a0h]
        push 0
        push esi
        ; Exact mapped bytes 66 C7 80 9C 01 00 00 00 00: mov word ptr [eax + 0x19c], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 10h]
        inc eax
        push eax
        push esi
        push 0
        push ecx
        push 80010d02h
        mov ecx, edi
        ; Exact mapped bytes E8 C9 F4 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf4
        __asm _emit 0x11
        __asm _emit 0x00
        pop esi
        pop edi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
