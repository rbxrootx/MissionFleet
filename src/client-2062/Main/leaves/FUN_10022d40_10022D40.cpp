// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10022D40 .. +0xE6 bytes.
extern "C" __declspec(naked) void FUN_10022d40_10022D40() {
    __asm {
        push esi
        mov esi, ecx
        push -5ah
        push 320h
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0b0h]
        and eax, 0e5ffh
        mov dword ptr [esi + 78h], 18eh
        or ah, 5
        mov dword ptr [esi + 80h], 17ch
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes E8 5A BF 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push -5ah
        push 320h
        ; Exact mapped bytes E8 48 BF 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push -5ah
        push 320h
        ; Exact mapped bytes E8 36 BF 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push -5ah
        push 320h
        ; Exact mapped bytes E8 24 BF 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 0ffffff66h
        push 370h
        ; Exact mapped bytes E8 0F BF 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c0h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        add ecx, 0ah
        push ecx
        mov ecx, dword ptr [esi + 0c4h]
        push edx
        ; Exact mapped bytes E8 F3 BE 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xbe
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        add ecx, 0fh
        push ecx
        mov ecx, dword ptr [esi + 0ach]
        push edx
        ; Exact mapped bytes E8 D7 BE 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xbe
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c0h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esi + 0c8h]
        push edx
        ; Exact mapped bytes E8 BE BE 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xbe
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c8h]
        mov ecx, dword ptr [esi + 74h]
        mov dword ptr [eax + 54h], ecx
        ; Exact mapped bytes 66 81 66 24 FB FF: and word ptr [esi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        pop esi
        ret
    }
}
