// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A1940 .. +0xA4 bytes.
extern "C" __declspec(naked) void FUN_587a1940() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 2
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x587a19dd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        push edi
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x587a197f
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x587a1978
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x587a197f
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x587a1962
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [edi + 4], 100h
        ; Exact mapped bytes 75 F0: jne 0x587a1978
        __asm _emit 0x75
        __asm _emit 0xf0
        mov edi, dword ptr [edi + 8]
        cmp edi, 0dh
        ; Exact mapped bytes 74 29: je 0x587a19b9
        __asm _emit 0x74
        __asm _emit 0x29
        cmp edi, 1bh
        ; Exact mapped bytes 75 E3: jne 0x587a1978
        __asm _emit 0x75
        __asm _emit 0xe3
        mov eax, dword ptr [esi + 80h]
        mov ecx, dword ptr [esi + 7ch]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 18h]
        push eax
        push 10h
        push esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 80h]
        mov ecx, dword ptr [esi + 7ch]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 18h]
        push edx
        push 0fh
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
