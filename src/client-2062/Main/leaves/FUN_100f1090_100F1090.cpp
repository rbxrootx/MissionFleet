// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F1090 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_100f1090_100F1090() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov eax, dword ptr [esi + 5c54h]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x100f10ba
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [esp + 10h]
        cmp eax, -1
        ; Exact mapped bytes 7E 0F: jle 0x100f10ba
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [esp + 14h]
        push ecx
        mov ecx, dword ptr [esi + 7ch]
        push eax
        push edi
        ; Exact mapped bytes E8 F6 44 F1 FF: call 0x100055b0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 4], esi
        ; Exact mapped bytes 75 4E: jne 0x100f1113
        __asm _emit 0x75
        __asm _emit 0x4e
        mov ecx, dword ptr [esi + 103ch]
        mov eax, dword ptr [esi + 1040h]
        cmp ecx, eax
        ; Exact mapped bytes 74 3E: je 0x100f1113
        __asm _emit 0x74
        __asm _emit 0x3e
        cmp dword ptr [ecx], edi
        ; Exact mapped bytes 74 0C: je 0x100f10e5
        __asm _emit 0x74
        __asm _emit 0x0c
        add ecx, 4
        cmp ecx, eax
        ; Exact mapped bytes 75 F5: jne 0x100f10d5
        __asm _emit 0x75
        __asm _emit 0xf5
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esi + 1040h]
        lea eax, [ecx + 4]
        cmp eax, edx
        ; Exact mapped bytes 74 0E: je 0x100f1100
        __asm _emit 0x74
        __asm _emit 0x0e
        sub ecx, eax
        mov edi, dword ptr [eax]
        mov dword ptr [ecx + eax], edi
        add eax, 4
        cmp eax, edx
        ; Exact mapped bytes 75 F4: jne 0x100f10f4
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [esi + 1040h]
        add eax, -4
        mov dword ptr [esp + 0ch], eax
        mov dword ptr [esi + 1040h], eax
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
