// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434207 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_00434207_00434207() {
    __asm {
        mov eax, 43aac8h
        ; Exact mapped bytes E8 F7 B3 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes E8 84 F9 FF FF: call 0x433ba1
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and dword ptr [ebp - 4], 0
        test eax, eax
        mov dword ptr [esi], 43e718h
        ; Exact mapped bytes 74 03: je 0x434231
        __asm _emit 0x74
        __asm _emit 0x03
        mov eax, dword ptr [eax + 1ch]
        push eax
        mov dword ptr [esi + 10h], eax
        ; Exact mapped bytes FF 15 B0 C3 43 00: call dword ptr [0x43c3b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 15 FA FF FF: call 0x433c58
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x43424c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 EF 01 00 00: call 0x43443b
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, esi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
