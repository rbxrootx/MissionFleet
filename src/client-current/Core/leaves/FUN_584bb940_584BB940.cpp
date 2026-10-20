// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BB940 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_584bb940_584BB940() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5B FE FF FF: call 0x584bb7b0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x584bb974
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 8]
        add ecx, 10h
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 62 0A 00 00: call 0x584bc3d0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x584bb9ff
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        add eax, 10h
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F7 C6 FC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xc6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        add edx, 10h
        mov dword ptr [ebp - 14h], edx
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F2 C7 FC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xc7
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584bb9b0
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea ecx, [ebp - 1ch]
        push ecx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 C1 F7 FF FF: call 0x584bb170
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        lea edx, [ebp - 18h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 14 C0 FC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x584bb9ff
        __asm _emit 0x74
        __asm _emit 0x3c
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 75 C0 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 6D C0 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 1F: jne 0x584bb9fd
        __asm _emit 0x75
        __asm _emit 0x1f
        push 800h
        mov eax, dword ptr [ebp + 8]
        add eax, 8
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 4E C0 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        add eax, 8
        push eax
        ; Exact mapped bytes FF 15 0C 43 89 58: call dword ptr [0x5889430c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB A2: jmp 0x584bb9a1
        __asm _emit 0xeb
        __asm _emit 0xa2
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
