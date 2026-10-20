// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881DCE0 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_5881dce0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 12d4h]
        push edi
        xor edi, edi
        cmp eax, edi
        ; Exact mapped bytes 74 0F: je 0x5881dcff
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 30 F1 15 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xf1
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 12d4h], edi
        mov eax, dword ptr [esp + 0ch]
        xor ecx, ecx
        mov dword ptr [esi + 12cch], eax
        mov edx, 4
        mul edx
        seto cl
        mov dword ptr [esi + 12d0h], edi
        mov dword ptr [esi + 12c8h], 1
        mov byte ptr [esi + 12d8h], 1
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 F8 37 15 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x37
        __asm _emit 0x15
        __asm _emit 0x00
        mov dword ptr [esi + 12d4h], eax
        add esp, 4
        xor eax, eax
        cmp dword ptr [esi + 12cch], edi
        ; Exact mapped bytes 76 1C: jbe 0x5881dd65
        __asm _emit 0x76
        __asm _emit 0x1c
        mov ecx, dword ptr [esp + 10h]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edi, dword ptr [ecx + eax*4]
        mov edx, dword ptr [esi + 12d4h]
        mov dword ptr [edx + eax*4], edi
        inc eax
        cmp eax, dword ptr [esi + 12cch]
        ; Exact mapped bytes 72 EB: jb 0x5881dd50
        __asm _emit 0x72
        __asm _emit 0xeb
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
