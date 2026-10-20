// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588A5390 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_588a5390() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0a0h], 0
        ; Exact mapped bytes 74 48: je 0x588a53e4
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 66 83 BE 9C 00 00 00 0C: cmp word ptr [esi + 0x9c], 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0c
        mov eax, dword ptr [esp + 8]
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes 75 34: jne 0x588a53e4
        __asm _emit 0x75
        __asm _emit 0x34
        mov ecx, dword ptr [esi + 18ch]
        test eax, eax
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 74 16: je 0x588a53d2
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 1ach]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 1ach]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
