// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434153 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_00434153_00434153() {
    __asm {
        mov eax, 43aaa0h
        ; Exact mapped bytes E8 AB B4 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes E8 38 FA FF FF: call 0x433ba1
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and dword ptr [ebp - 4], 0
        test eax, eax
        mov dword ptr [esi], 43e6a0h
        ; Exact mapped bytes 74 03: je 0x43417d
        __asm _emit 0x74
        __asm _emit 0x03
        mov eax, dword ptr [eax + 1ch]
        push eax
        mov dword ptr [esi + 10h], eax
        ; Exact mapped bytes FF 15 C0 C3 43 00: call dword ptr [0x43c3c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C9 FA FF FF: call 0x433c58
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x434198
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 A3 02 00 00: call 0x43443b
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x02
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
