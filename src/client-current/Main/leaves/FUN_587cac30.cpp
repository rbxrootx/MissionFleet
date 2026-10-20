// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CAC30 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_587cac30() {
    __asm {
        push esi
        xor eax, eax
        lea edx, [ecx + 224h]
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edx], 1
        ; Exact mapped bytes 74 0F: je 0x587cac54
        __asm _emit 0x74
        __asm _emit 0x0f
        inc eax
        add edx, 10h
        cmp eax, 0ah
        ; Exact mapped bytes 7C F2: jl 0x587cac40
        __asm _emit 0x7c
        __asm _emit 0xf2
        pop esi
        ; Exact mapped bytes E9 FC F6 FF FF: jmp 0x587ca350
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        shl eax, 4
        mov edx, dword ptr [eax + ecx + 218h]
        lea esi, [eax + ecx]
        sub esp, 0ch
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 21ch]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 220h]
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes E8 71 06 00 00: call 0x587cb2f0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 224h], 0
        pop esi
        ret
    }
}
