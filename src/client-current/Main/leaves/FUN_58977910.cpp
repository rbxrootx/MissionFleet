// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58977910 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_58977910() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        push esi
        mov edi, dword ptr [esi + 148h]
        mov dword ptr [edi + 8], 0
        ; Exact mapped bytes E8 97 00 00 00: call 0x589779c0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        add esp, 4
        sub eax, 0
        ; Exact mapped bytes 74 60: je 0x58977995
        __asm _emit 0x74
        __asm _emit 0x60
        sub eax, 2
        ; Exact mapped bytes 74 39: je 0x58977973
        __asm _emit 0x74
        __asm _emit 0x39
        dec eax
        ; Exact mapped bytes 74 14: je 0x58977951
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [esi]
        push esi
        mov dword ptr [eax + 14h], 4
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        add esp, 4
        pop edi
        pop esi
        ret
        mov eax, dword ptr [edi + 40h]
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x58977969
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [esi]
        push esi
        mov dword ptr [edx + 14h], 4
        mov eax, dword ptr [esi]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        add esp, 4
        mov dword ptr [edi + 4], 58977c70h
        pop edi
        pop esi
        ret
        mov eax, dword ptr [edi + 40h]
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5897798b
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [esi]
        push esi
        mov dword ptr [ecx + 14h], 4
        mov edx, dword ptr [esi]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        add esp, 4
        mov dword ptr [edi + 4], 58977ec0h
        pop edi
        pop esi
        ret
        mov eax, dword ptr [edi + 40h]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x589779ad
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [esi]
        push esi
        mov dword ptr [eax + 14h], 4
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        add esp, 4
        mov dword ptr [edi + 4], 58977a10h
        pop edi
        pop esi
        ret
    }
}
