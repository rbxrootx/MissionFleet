// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049F820 .. +0xB0 bytes.
extern "C" __declspec(naked) void _SetCurrency_COleCurrency__QAEXJJ_Z_0049F820() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        mov dword ptr [ebp - 4ch], ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 65 CF 0A 00: call 0x54c796
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xcf
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 5D CF 0A 00: call 0x54c796
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xcf
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 EE A6 00 00: call 0x4a9f30
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        push 2710h
        lea ecx, [ebp - 24h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 0C F9 FF FF: call 0x49f165
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 E6 F2 FF FF: call 0x49eb48
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 15: jge 0x49f87d
        __asm _emit 0x7d
        __asm _emit 0x15
        lea edx, [ebp - 30h]
        push edx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 62 F8 FF FF: call 0x49f0d6
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 CB F2 FF FF: call 0x49eb48
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 AA A6 00 00: call 0x4a9f30
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 15: jge 0x49f8a7
        __asm _emit 0x7d
        __asm _emit 0x15
        lea ecx, [ebp - 3ch]
        push ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 38 F8 FF FF: call 0x49f0d6
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 A1 F2 FF FF: call 0x49eb48
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebp - 0ch]
        push edx
        lea eax, [ebp - 48h]
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 37 F6 FF FF: call 0x49eeee
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 88 F2 FF FF: call 0x49eb48
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 78 CF 0A 00: call 0x54c842
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xcf
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
