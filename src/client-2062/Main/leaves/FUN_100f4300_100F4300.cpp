// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F4300 .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_100f4300_100F4300() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x100f43ac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 54h]
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x100f434b
        __asm _emit 0x74
        __asm _emit 0x36
        xor ecx, ecx
        mov edx, dword ptr [esi + 50h]
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        imul ecx, dword ptr [eax + 8]
        dec ecx
        xor eax, eax
        cmp edx, ecx
        setge al
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x100f434b
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, esi
        ; Exact mapped bytes E8 2B AD 00 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 74 AD 00 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 6C: je 0x100f43ac
        __asm _emit 0x74
        __asm _emit 0x6c
        mov edx, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        pop edi
        pop esi
        ret
        mov ecx, dword ptr [esi + 58h]
        mov eax, dword ptr [esi + 5ch]
        cmp ecx, eax
        mov eax, dword ptr [esi + 50h]
        ; Exact mapped bytes 7D 05: jge 0x100f435d
        __asm _emit 0x7d
        __asm _emit 0x05
        cmp eax, 69h
        ; Exact mapped bytes 7D 04: jge 0x100f4361
        __asm _emit 0x7d
        __asm _emit 0x04
        inc eax
        mov dword ptr [esi + 50h], eax
        inc ecx
        push -1
        mov dword ptr [esi + 58h], ecx
        mov ecx, esi
        ; Exact mapped bytes E8 52 AB 00 00: call 0x100feec0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x100f4380
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F8 AA 00 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x100f43ac
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x100f43a7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x100f438f
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
    }
}
