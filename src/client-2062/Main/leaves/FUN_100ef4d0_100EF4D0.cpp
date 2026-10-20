// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EF4D0 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_100ef4d0_100EF4D0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x100ef4f0
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ecx + 0f14h]
        pop esi
        mov dword ptr [edx + 60h], 0abd9f8h
        mov dword ptr [ecx + 5c9ch], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 5c70h]
        cmp edx, 40000h
        ; Exact mapped bytes 75 29: jne 0x100ef527
        __asm _emit 0x75
        __asm _emit 0x29
        mov edx, dword ptr [ecx + 5c6ch]
        mov esi, dword ptr [ecx + 0f14h]
        neg edx
        sbb edx, edx
        and edx, 0ff32ff33h
        add edx, 0ffffffh
        mov dword ptr [esi + 60h], edx
        mov dword ptr [ecx + 5c9ch], eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp edx, 50000h
        ; Exact mapped bytes 75 1F: jne 0x100ef54e
        __asm _emit 0x75
        __asm _emit 0x1f
        mov edx, dword ptr [ecx + 0e9ch]
        mov esi, dword ptr [ecx + 0f14h]
        neg edx
        sbb edx, edx
        and edx, 0ff9a01h
        add edx, 0ffh
        mov dword ptr [esi + 60h], edx
        mov dword ptr [ecx + 5c9ch], eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
