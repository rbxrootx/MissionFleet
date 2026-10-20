// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100601D0 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_100601d0_100601D0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        cmp esi, -1
        ; Exact mapped bytes 75 41: jne 0x1006021b
        __asm _emit 0x75
        __asm _emit 0x41
        mov ecx, dword ptr [ecx + 328h]
        mov eax, dword ptr [esp + 0ch]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x10060291
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        pop esi
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ecx + esi*4 + 228h]
        mov edx, dword ptr [esp + 0ch]
        test edx, edx
        mov dword ptr [eax + 54h], edx
        ; Exact mapped bytes 74 2A: je 0x10060257
        __asm _emit 0x74
        __asm _emit 0x2a
        push edi
        mov edi, dword ptr [edx + 18h]
        mov dword ptr [eax + 0ch], edi
        mov edi, dword ptr [edx + 1ch]
        add edx, 20h
        mov dword ptr [eax + 10h], edi
        add eax, 14h
        mov edi, dword ptr [edx]
        mov dword ptr [eax], edi
        mov edi, dword ptr [edx + 4]
        mov dword ptr [eax + 4], edi
        mov edi, dword ptr [edx + 8]
        mov dword ptr [eax + 8], edi
        pop edi
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ecx + esi*4 + 2a8h]
        mov ecx, dword ptr [esp + 10h]
        test ecx, ecx
        mov dword ptr [eax + 54h], ecx
        ; Exact mapped bytes 74 28: je 0x10060291
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ecx + 18h]
        add ecx, 20h
        mov dword ptr [eax + 0ch], edx
        mov edx, dword ptr [ecx - 4]
        mov dword ptr [eax + 10h], edx
        mov edx, dword ptr [ecx]
        add eax, 14h
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [eax + 0ch], ecx
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
