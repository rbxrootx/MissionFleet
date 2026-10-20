// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58546630 .. +0xEA bytes.
extern "C" __declspec(naked) void FUN_58546630_58546630() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 300h], 0
        ; Exact mapped bytes 75 26: jne 0x5854666b
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 26ch]
        cmp edx, 5
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x58546714
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 26ch]
        cmp ecx, 6
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x58546714
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 24h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 E4 F3 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xe4
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 30 57 27 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x57
        __asm _emit 0x27
        __asm _emit 0x00
        push 24h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 E3 F3 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xe3
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1c4h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 62 F0 26 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf0
        __asm _emit 0x26
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1c4h]
        mov dword ptr [ebp - 1ch], edx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 FC F7 F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf7
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0fh
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 CD AD 27 00: call 0x587c14d0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xad
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 2F 00 00: call 0x585496e0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D AF FF FF: call 0x58541630
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
