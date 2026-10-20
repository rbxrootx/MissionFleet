// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879DC00 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_5879dc00_5879DC00() {
    __asm {
        push esi
        mov esi, ecx
        test byte ptr [esi + 94h], 2
        ; Exact mapped bytes 75 2E: jne 0x5879dc3a
        __asm _emit 0x75
        __asm _emit 0x2e
        cmp dword ptr [esi + 40h], 0
        ; Exact mapped bytes 74 28: je 0x5879dc3a
        __asm _emit 0x74
        __asm _emit 0x28
        push edi
        push 0ah
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 93 D1 FF FF: call 0x5879adb0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        lea ecx, [esi + 14h]
        cmp dword ptr [esi + 28h], 0fh
        ; Exact mapped bytes 76 03: jbe 0x5879dc2c
        __asm _emit 0x76
        __asm _emit 0x03
        mov ecx, dword ptr [esi + 14h]
        push dword ptr [esi + 24h]
        push ecx
        push eax
        ; Exact mapped bytes E8 1A D4 FF FF: call 0x5879b050
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop edi
        mov eax, dword ptr [esp + 8]
        mov ecx, eax
        cmp dword ptr [eax + 14h], 0fh
        ; Exact mapped bytes 76 02: jbe 0x5879dc48
        __asm _emit 0x76
        __asm _emit 0x02
        mov ecx, dword ptr [eax]
        push dword ptr [eax + 10h]
        push ecx
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 FC D3 FF FF: call 0x5879b050
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        and byte ptr [esi + 94h], 0fdh
        add esp, 0ch
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
