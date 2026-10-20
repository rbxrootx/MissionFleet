// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FEA50 .. +0x137 bytes.
extern "C" __declspec(naked) void FUN_100fea50_100FEA50() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov eax, dword ptr [esi + 3ch]
        mov dword ptr [esi], 1017671ch
        cmp eax, edi
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x100feaf1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 30h]
        cmp edx, edi
        ; Exact mapped bytes 74 32: je 0x100feaa0
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [eax + 38h]
        cmp ecx, eax
        ; Exact mapped bytes 75 05: jne 0x100fea7a
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [edx + 3ch], edi
        ; Exact mapped bytes EB 1D: jmp 0x100fea97
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [eax + 34h]
        mov dword ptr [edx + 38h], ecx
        mov ecx, dword ptr [eax + 38h]
        mov edx, dword ptr [eax + 34h]
        mov dword ptr [ecx + 34h], edx
        mov ecx, dword ptr [eax + 30h]
        cmp dword ptr [ecx + 3ch], eax
        ; Exact mapped bytes 75 06: jne 0x100fea97
        __asm _emit 0x75
        __asm _emit 0x06
        mov edx, dword ptr [eax + 38h]
        mov dword ptr [ecx + 3ch], edx
        mov dword ptr [eax + 38h], eax
        mov dword ptr [eax + 34h], eax
        mov dword ptr [eax + 30h], edi
        mov edx, dword ptr [eax + 40h]
        cmp edx, edi
        ; Exact mapped bytes 74 3F: je 0x100feae6
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [eax + 48h]
        cmp ecx, edi
        ; Exact mapped bytes 75 11: jne 0x100feabf
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [eax + 44h]
        cmp ecx, edi
        ; Exact mapped bytes 75 05: jne 0x100feaba
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [edx + 4ch], edi
        ; Exact mapped bytes EB 23: jmp 0x100feadd
        __asm _emit 0xeb
        __asm _emit 0x23
        mov dword ptr [ecx + 48h], edi
        ; Exact mapped bytes EB 1E: jmp 0x100feadd
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [eax + 44h]
        mov dword ptr [ecx + 44h], edx
        mov ecx, dword ptr [eax + 44h]
        cmp ecx, edi
        ; Exact mapped bytes 75 0B: jne 0x100fead7
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 40h]
        mov edx, dword ptr [eax + 48h]
        mov dword ptr [ecx + 4ch], edx
        ; Exact mapped bytes EB 06: jmp 0x100feadd
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [eax + 48h]
        mov dword ptr [ecx + 48h], edx
        mov dword ptr [eax + 40h], edi
        mov dword ptr [eax + 44h], edi
        mov dword ptr [eax + 48h], edi
        mov eax, dword ptr [esi + 3ch]
        cmp eax, edi
        ; Exact mapped bytes 0F 85 76 FF FF FF: jne 0x100fea67
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, edi
        ; Exact mapped bytes 74 32: je 0x100feb2a
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, dword ptr [esi + 38h]
        cmp eax, esi
        ; Exact mapped bytes 75 05: jne 0x100feb04
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [ecx + 3ch], edi
        ; Exact mapped bytes EB 1D: jmp 0x100feb21
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [esi + 34h]
        mov dword ptr [ecx + 38h], eax
        mov edx, dword ptr [esi + 38h]
        mov eax, dword ptr [esi + 34h]
        mov dword ptr [edx + 34h], eax
        mov eax, dword ptr [esi + 30h]
        cmp dword ptr [eax + 3ch], esi
        ; Exact mapped bytes 75 06: jne 0x100feb21
        __asm _emit 0x75
        __asm _emit 0x06
        mov ecx, dword ptr [esi + 38h]
        mov dword ptr [eax + 3ch], ecx
        mov dword ptr [esi + 38h], esi
        mov dword ptr [esi + 34h], esi
        mov dword ptr [esi + 30h], edi
        mov ecx, dword ptr [esi + 40h]
        cmp ecx, edi
        ; Exact mapped bytes 74 3F: je 0x100feb70
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [esi + 48h]
        cmp eax, edi
        ; Exact mapped bytes 75 11: jne 0x100feb49
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [esi + 44h]
        cmp eax, edi
        ; Exact mapped bytes 75 05: jne 0x100feb44
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [ecx + 4ch], edi
        ; Exact mapped bytes EB 23: jmp 0x100feb67
        __asm _emit 0xeb
        __asm _emit 0x23
        mov dword ptr [eax + 48h], edi
        ; Exact mapped bytes EB 1E: jmp 0x100feb67
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [esi + 44h]
        mov dword ptr [eax + 44h], edx
        mov eax, dword ptr [esi + 44h]
        cmp eax, edi
        ; Exact mapped bytes 75 0B: jne 0x100feb61
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [esi + 40h]
        mov ecx, dword ptr [esi + 48h]
        mov dword ptr [eax + 4ch], ecx
        ; Exact mapped bytes EB 06: jmp 0x100feb67
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [esi + 48h]
        mov dword ptr [eax + 48h], edx
        mov dword ptr [esi + 40h], edi
        mov dword ptr [esi + 44h], edi
        mov dword ptr [esi + 48h], edi
        test byte ptr [esp + 0ch], 1
        ; Exact mapped bytes 74 09: je 0x100feb80
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 07 DC 06 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
