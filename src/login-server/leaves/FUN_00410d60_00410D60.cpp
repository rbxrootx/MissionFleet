// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00410D60 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_00410d60_00410D60() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        cmp eax, 2741h
        mov esi, ecx
        ; Exact mapped bytes 7F 2C: jg 0x410d9a
        __asm _emit 0x7f
        __asm _emit 0x2c
        ; Exact mapped bytes 74 2A: je 0x410d9a
        __asm _emit 0x74
        __asm _emit 0x2a
        cmp eax, 2734h
        ; Exact mapped bytes 7F 23: jg 0x410d9a
        __asm _emit 0x7f
        __asm _emit 0x23
        ; Exact mapped bytes 74 21: je 0x410d9a
        __asm _emit 0x74
        __asm _emit 0x21
        cmp eax, 271eh
        ; Exact mapped bytes 7F 10: jg 0x410d90
        __asm _emit 0x7f
        __asm _emit 0x10
        ; Exact mapped bytes 74 18: je 0x410d9a
        __asm _emit 0x74
        __asm _emit 0x18
        sub eax, 3e3h
        ; Exact mapped bytes 74 11: je 0x410d9a
        __asm _emit 0x74
        __asm _emit 0x11
        sub eax, 2331h
        ; Exact mapped bytes EB 0A: jmp 0x410d9a
        __asm _emit 0xeb
        __asm _emit 0x0a
        sub eax, 2726h
        ; Exact mapped bytes 74 03: je 0x410d9a
        __asm _emit 0x74
        __asm _emit 0x03
        sub eax, 0dh
        mov eax, dword ptr [esi + 48h]
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x410dd5
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [eax + 0bd8h]
        add edx, 1
        mov dword ptr [eax + 0bd8h], edx
        mov ecx, dword ptr [eax + 0bdch]
        mov edx, dword ptr [eax + 0c10h]
        adc ecx, 0
        add edx, 1
        mov dword ptr [eax + 0bdch], ecx
        mov dword ptr [eax + 0c10h], edx
        adc dword ptr [eax + 0c14h], 0
        mov eax, dword ptr [esi + 0b8h]
        cmp eax, -1
        ; Exact mapped bytes 74 18: je 0x410df8
        __asm _emit 0x74
        __asm _emit 0x18
        push 0
        push eax
        mov eax, dword ptr [esi + 0b0h]
        push 4cbh
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [esi + 48h]
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x410e2d
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [esi + 0ach]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x410e2d
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [esi + 4]
        push 1
        push edx
        mov dword ptr [esi + 0ach], 0
        ; Exact mapped bytes FF 15 E0 C5 43 00: call dword ptr [0x43c5e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 48h]
        push 20h
        push eax
        ; Exact mapped bytes E8 93 ED FF FF: call 0x40fbc0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
