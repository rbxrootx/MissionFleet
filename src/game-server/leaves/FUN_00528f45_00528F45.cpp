// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00528F45 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_00528f45_00528F45() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 24h], ecx
        push 14h
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 C3 00 F8 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 28: jne 0x528f8e
        __asm _emit 0x75
        __asm _emit 0x28
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 199h
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 74 06: je 0x528f8e
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 27: je 0x528fbb
        __asm _emit 0x74
        __asm _emit 0x27
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 74 21: je 0x528fbb
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 51 44 FC FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x44
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 92 CC 00 00 00: call dword ptr [edx + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
