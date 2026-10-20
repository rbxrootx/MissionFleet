// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58640A60 .. +0xF5 bytes.
extern "C" __declspec(naked) void FUN_58640a60_58640A60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0c8h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0cch], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC A8 E7 FF: call 0x584bb390
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xa8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x58640b33
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 49: jne 0x58640af0
        __asm _emit 0x75
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA AA E7 FF: call 0x584bb5a0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xaa
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CB 55 E4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x55
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 93 BC EA FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xbc
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 41: jmp 0x58640b31
        __asm _emit 0xeb
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 AA E7 FF: call 0x584bb5a0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xaa
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 85 55 E4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 50 BC EA FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xbc
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x58640b4f
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 24h], edx
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 C7 F3 FF: call 0x5857d2f0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xc7
        __asm _emit 0xf3
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
