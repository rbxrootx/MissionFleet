// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A08B0 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_100a08b0_100A08B0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push esi
        mov esi, ecx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x100a08e6
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [esp + 0ch]
        and eax, 0ffh
        mov ecx, dword ptr [esi + eax*4 + 91ch]
        ; Exact mapped bytes 66 81 61 24 FD FF: and word ptr [ecx + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x61
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [eax + esi + 0c8h], 32h
        mov dword ptr [esi + eax*4 + 0a8h], ebx
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 57: je 0x100a0945
        __asm _emit 0x74
        __asm _emit 0x57
        push edi
        mov edi, dword ptr [esp + 10h]
        and edi, 0ffh
        push 0
        mov eax, dword ptr [esi + edi*4 + 91ch]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [esi + edi*4 + 964h]
        ; Exact mapped bytes E8 8C 1B F9 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x1b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [esi + edi*4 + 944h], 1
        mov dword ptr [esi + edi*4 + 118h], 8
        mov eax, dword ptr [esi + edi*8 + 13ch]
        mov dword ptr [esi + edi*4 + 868h], eax
        mov dword ptr [esi + edi*4 + 0a8h], ebx
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0ch]
        and eax, 0ffh
        mov ecx, dword ptr [esi + eax*4 + 91ch]
        or byte ptr [ecx + 24h], 2
        mov byte ptr [eax + esi + 0c8h], 0
        mov dword ptr [esi + eax*4 + 0a8h], ebx
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
