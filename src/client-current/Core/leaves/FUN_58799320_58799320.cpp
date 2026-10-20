// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58799320 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_58799320_58799320() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edx, dword ptr [esi]
        mov edi, dword ptr [edx + 8]
        cmp byte ptr [edi + 0dh], 0
        ; Exact mapped bytes 74 22: je 0x58799351
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [edx + 4]
        cmp byte ptr [eax + 0dh], 0
        ; Exact mapped bytes 75 12: jne 0x5879934a
        __asm _emit 0x75
        __asm _emit 0x12
        cmp edx, dword ptr [eax + 8]
        ; Exact mapped bytes 75 0D: jne 0x5879934a
        __asm _emit 0x75
        __asm _emit 0x0d
        mov dword ptr [esi], eax
        mov edx, eax
        mov eax, dword ptr [eax + 4]
        cmp byte ptr [eax + 0dh], 0
        ; Exact mapped bytes 74 EE: je 0x58799338
        __asm _emit 0x74
        __asm _emit 0xee
        mov dword ptr [esi], eax
        mov eax, esi
        pop edi
        pop esi
        ret
        mov ecx, dword ptr [edi]
        cmp byte ptr [ecx + 0dh], 0
        ; Exact mapped bytes 75 13: jne 0x5879936c
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov edi, ecx
        mov ecx, eax
        cmp byte ptr [eax + 0dh], 0
        ; Exact mapped bytes 74 F4: je 0x58799360
        __asm _emit 0x74
        __asm _emit 0xf4
        mov dword ptr [esi], edi
        mov eax, esi
        pop edi
        pop esi
        ret
    }
}
