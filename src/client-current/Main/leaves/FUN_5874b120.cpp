// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874B120 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_5874b120() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 74 62: je 0x5874b18e
        __asm _emit 0x74
        __asm _emit 0x62
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x5874b15d
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x5874b156
        __asm _emit 0x74
        __asm _emit 0x18
        mov edi, edi
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x5874b15d
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x5874b140
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [edi + 4], 201h
        ; Exact mapped bytes 75 28: jne 0x5874b18e
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, esi
        ; Exact mapped bytes E8 B3 FC FF FF: call 0x5874ae20
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp al, 1
        ; Exact mapped bytes 75 1D: jne 0x5874b18e
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 28h]
        mov ecx, esi
        mov dword ptr [esi + 98h], 0
        mov dword ptr [esi + 94h], 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
