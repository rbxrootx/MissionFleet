// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10022EE0 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_10022ee0_10022EE0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x10022f70
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 28h]
        mov ecx, dword ptr [esi + 58h]
        sub eax, ecx
        mov ecx, 0
        sets cl
        dec ecx
        and eax, ecx
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 17 C2 0D 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc2
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 28h]
        test eax, eax
        ; Exact mapped bytes 7E 46: jle 0x10022f56
        __asm _emit 0x7e
        __asm _emit 0x46
        mov eax, dword ptr [esi + 60h]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x10022f28
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [esi + 5ch]
        mov ecx, esi
        neg edx
        push edx
        ; Exact mapped bytes E8 9C BF 0D 00: call 0x100feec0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x00
        add dword ptr [esi + 5ch], -2
        mov ecx, dword ptr [esi + 50h]
        inc ecx
        mov dword ptr [esi + 50h], ecx
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 3A: je 0x10022f70
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x10022f4e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x10022f36
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
        mov ecx, esi
        ; Exact mapped bytes E8 03 C1 0D 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xc1
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 4C C1 0D 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc1
        __asm _emit 0x0d
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 08: je 0x10022f70
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        pop edi
        pop esi
        ret
    }
}
