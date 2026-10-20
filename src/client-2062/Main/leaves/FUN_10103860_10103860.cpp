// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10103860 .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_10103860_10103860() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        test eax, eax
        push edi
        mov esi, ecx
        ; Exact mapped bytes 74 6E: je 0x101038da
        __asm _emit 0x74
        __asm _emit 0x6e
        mov ecx, dword ptr [eax + 18h]
        test ecx, ecx
        ; Exact mapped bytes 74 67: je 0x101038da
        __asm _emit 0x74
        __asm _emit 0x67
        cmp dword ptr [eax + 4], 1
        ; Exact mapped bytes 75 61: jne 0x101038da
        __asm _emit 0x75
        __asm _emit 0x61
        ; Exact mapped bytes A1 48 93 1C 10: mov eax, dword ptr [0x101c9348]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x101038b5
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [eax]
        lea edi, [esi + 18h]
        push edi
        push ecx
        push eax
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 75 49: jne 0x101038da
        __asm _emit 0x75
        __asm _emit 0x49
        mov eax, dword ptr [edi]
        add esi, 1ch
        push esi
        push 10176d18h
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x101038ab
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esi], 0
        pop edi
        mov eax, 1
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 4C 93 1C 10: mov eax, dword ptr [0x101c934c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x101038da
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [eax]
        lea edi, [esi + 18h]
        push edi
        push ecx
        push eax
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x101038da
        __asm _emit 0x75
        __asm _emit 0x0d
        mov dword ptr [esi + 1ch], eax
        pop edi
        mov eax, 1
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
