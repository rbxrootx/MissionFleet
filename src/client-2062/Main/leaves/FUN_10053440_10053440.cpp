// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10053440 .. +0xAB bytes.
extern "C" __declspec(naked) void FUN_10053440_10053440() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 100h], 40000000h
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x100534e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0fch]
        cmp eax, 64h
        ; Exact mapped bytes 75 3F: jne 0x1005349d
        __asm _emit 0x75
        __asm _emit 0x3f
        mov eax, dword ptr [esi + 20ch]
        cmp dword ptr [eax + 28h], 100h
        ; Exact mapped bytes 75 7C: jne 0x100534e9
        __asm _emit 0x75
        __asm _emit 0x7c
        mov ecx, esi
        ; Exact mapped bytes E8 5C FF FF FF: call 0x100533d0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 1f8h]
        or byte ptr [esi + 24h], 2
        mov ecx, 1
        mov dword ptr [esi + 100h], 0
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [esi + 1fch]
        ; Exact mapped bytes 66 09 4E 24: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4e
        __asm _emit 0x24
        pop esi
        ret
        cmp eax, 0c8h
        ; Exact mapped bytes 75 45: jne 0x100534e9
        __asm _emit 0x75
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 20ch]
        mov eax, dword ptr [ecx + 28h]
        test eax, eax
        ; Exact mapped bytes 75 38: jne 0x100534e9
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, esi
        ; Exact mapped bytes E8 18 FF FF FF: call 0x100533d0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 1fch]
        or byte ptr [esi + 24h], 2
        mov dword ptr [esi + 100h], 0
        mov ecx, 0fffeh
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [esi + 20ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [esi + 210h]
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        pop esi
        ret
    }
}
