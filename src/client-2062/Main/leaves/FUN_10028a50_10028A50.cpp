// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10028A50 .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_10028a50_10028A50() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0a4h]
        mov dword ptr [esi + 44ch], 0
        and al, 0feh
        cmp eax, 0a0h
        mov eax, dword ptr [esi + 41ch]
        ; Exact mapped bytes 73 1F: jae 0x10028a91
        __asm _emit 0x73
        __asm _emit 0x1f
        mov ecx, 0fh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 3d8h]
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [esi + 434h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes EB 1E: jmp 0x10028aaf
        __asm _emit 0xeb
        __asm _emit 0x1e
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [esi + 3d8h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 434h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add ecx, 55h
        add edx, 2ch
        push ecx
        mov ecx, dword ptr [esi + 40ch]
        push edx
        ; Exact mapped bytes E8 08 62 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x62
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 55h
        add ecx, 18h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 410h]
        ; Exact mapped bytes E8 EF 61 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x61
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 410h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 408h]
        add edx, 55h
        add eax, 4
        push edx
        push eax
        ; Exact mapped bytes E8 CA 61 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x61
        __asm _emit 0x0d
        __asm _emit 0x00
        or byte ptr [esi + 24h], 2
        pop esi
        ret
    }
}
