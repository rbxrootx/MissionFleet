// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886B030 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_5886b030() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 2
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x5886b0dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        push edi
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x5886b06f
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5886b068
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
        ; Exact mapped bytes 74 0B: je 0x5886b06f
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x5886b052
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        sub eax, 100h
        ; Exact mapped bytes 74 34: je 0x5886b0ad
        __asm _emit 0x74
        __asm _emit 0x34
        sub eax, 2
        ; Exact mapped bytes 75 EA: jne 0x5886b068
        __asm _emit 0x75
        __asm _emit 0xea
        cmp byte ptr [edi + 8], 0dh
        ; Exact mapped bytes 75 E4: jne 0x5886b068
        __asm _emit 0x75
        __asm _emit 0xe4
        mov ecx, esi
        ; Exact mapped bytes E8 75 F2 FF FF: call 0x5886a300
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 D9: je 0x5886b068
        __asm _emit 0x74
        __asm _emit 0xd9
        ; Exact mapped bytes 8B 0D D8 45 A2 58: mov ecx, dword ptr [0x58a245d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1eh
        push 0
        push 0
        push 0
        push 0
        push 1
        ; Exact mapped bytes E8 3A 13 FB FF: call 0x5881c3e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x13
        __asm _emit 0xfb
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, dword ptr [edi + 8]
        cmp edi, 0dh
        ; Exact mapped bytes 74 CF: je 0x5886b084
        __asm _emit 0x74
        __asm _emit 0xcf
        cmp edi, 1bh
        ; Exact mapped bytes 75 AE: jne 0x5886b068
        __asm _emit 0x75
        __asm _emit 0xae
        cmp dword ptr [esi + 28ch], 0
        ; Exact mapped bytes 75 A5: jne 0x5886b068
        __asm _emit 0x75
        __asm _emit 0xa5
        cmp dword ptr [esi + 288h], 0
        ; Exact mapped bytes 75 9C: jne 0x5886b068
        __asm _emit 0x75
        __asm _emit 0x9c
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
