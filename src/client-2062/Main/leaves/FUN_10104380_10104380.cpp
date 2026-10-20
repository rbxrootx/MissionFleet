// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10104380 .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_10104380_10104380() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x10104430
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x101043b9
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x101043b2
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 09: je 0x101043b9
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes EB EA: jmp 0x1010439c
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        cmp eax, 202h
        ; Exact mapped bytes 77 49: ja 0x1010440c
        __asm _emit 0x77
        __asm _emit 0x49
        ; Exact mapped bytes 74 3A: je 0x101043ff
        __asm _emit 0x74
        __asm _emit 0x3a
        sub eax, 100h
        ; Exact mapped bytes 74 26: je 0x101043f2
        __asm _emit 0x74
        __asm _emit 0x26
        sub eax, 2
        ; Exact mapped bytes 74 14: je 0x101043e5
        __asm _emit 0x74
        __asm _emit 0x14
        sub eax, 0ffh
        ; Exact mapped bytes 75 58: jne 0x10104430
        __asm _emit 0x75
        __asm _emit 0x58
        mov edx, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 52 34: call dword ptr [edx + 0x34]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x34
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 30: call dword ptr [eax + 0x30]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x30
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        sub eax, 204h
        ; Exact mapped bytes 74 10: je 0x10104423
        __asm _emit 0x74
        __asm _emit 0x10
        dec eax
        ; Exact mapped bytes 75 1A: jne 0x10104430
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 52 28: call dword ptr [edx + 0x28]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x28
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 2C: call dword ptr [eax + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x2c
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
