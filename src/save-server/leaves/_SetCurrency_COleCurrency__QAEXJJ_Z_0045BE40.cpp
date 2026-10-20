// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045BE40 .. +0xB0 bytes.
extern "C" __declspec(naked) void _SetCurrency_COleCurrency__QAEXJJ_Z_0045BE40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        mov dword ptr [ebp - 4ch], ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 B5 F3 0E 00: call 0x54b206
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf3
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 AD F3 0E 00: call 0x54b206
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 3E 1F 01 00: call 0x46dda0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        push 2710h
        lea ecx, [ebp - 24h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 0C F9 FF FF: call 0x45b785
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 E6 F2 FF FF: call 0x45b168
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 15: jge 0x45be9d
        __asm _emit 0x7d
        __asm _emit 0x15
        lea edx, [ebp - 30h]
        push edx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 62 F8 FF FF: call 0x45b6f6
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 CB F2 FF FF: call 0x45b168
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 FA 1E 01 00: call 0x46dda0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 15: jge 0x45bec7
        __asm _emit 0x7d
        __asm _emit 0x15
        lea ecx, [ebp - 3ch]
        push ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 38 F8 FF FF: call 0x45b6f6
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 A1 F2 FF FF: call 0x45b168
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
        ; Exact mapped bytes E8 37 F6 FF FF: call 0x45b50e
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 88 F2 FF FF: call 0x45b168
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 C8 F3 0E 00: call 0x54b2b2
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
