// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CF9B0 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_587cf9b0() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 100h], 40000000h
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x587cfa5b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0fch]
        cmp eax, 64h
        ; Exact mapped bytes 75 3E: jne 0x587cfa0c
        __asm _emit 0x75
        __asm _emit 0x3e
        mov eax, dword ptr [esi + 508h]
        cmp dword ptr [eax + 28h], 100h
        ; Exact mapped bytes 75 7E: jne 0x587cfa5b
        __asm _emit 0x75
        __asm _emit 0x7e
        ; Exact mapped bytes E8 6E FF FF FF: call 0x587cf950
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 100h], 0
        ; Exact mapped bytes 66 83 4E 24 02: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        mov eax, dword ptr [esi + 4f4h]
        mov ecx, 1
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [esi + 4f8h]
        ; Exact mapped bytes 66 09 4E 24: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4e
        __asm _emit 0x24
        pop esi
        ret
        cmp eax, 0c8h
        ; Exact mapped bytes 75 48: jne 0x587cfa5b
        __asm _emit 0x75
        __asm _emit 0x48
        mov ecx, dword ptr [esi + 508h]
        cmp dword ptr [ecx + 28h], 0
        ; Exact mapped bytes 75 3C: jne 0x587cfa5b
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, esi
        ; Exact mapped bytes E8 2A FF FF FF: call 0x587cf950
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 100h], 0
        ; Exact mapped bytes 66 83 4E 24 02: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        mov eax, dword ptr [esi + 4f8h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov eax, dword ptr [esi + 508h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov esi, dword ptr [esi + 50ch]
        mov eax, edx
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        pop esi
        ret
    }
}
