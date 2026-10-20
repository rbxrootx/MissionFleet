// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10028950 .. +0xF6 bytes.
extern "C" __declspec(naked) void FUN_10028950_10028950() {
    __asm {
        push esi
        mov esi, ecx
        mov edx, 12ch
        push edi
        mov edi, 1
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        sub edx, ecx
        mov ecx, dword ptr [esi + 3d0h]
        sub eax, 190h
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x1002898a
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [esi + 44ch], edi
        ; Exact mapped bytes 74 0D: je 0x1002898a
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [esp + 0ch], edi
        ; Exact mapped bytes 75 07: jne 0x1002898a
        __asm _emit 0x75
        __asm _emit 0x07
        push edx
        push eax
        ; Exact mapped bytes E8 06 00 02 00: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 41ch]
        mov dword ptr [esi + 44ch], edi
        mov edi, 0fff0h
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 434h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 3d8h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 404h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 41h
        add ecx, 2ch
        push eax
        push ecx
        mov ecx, dword ptr [esi + 40ch]
        ; Exact mapped bytes E8 F5 62 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x62
        __asm _emit 0x0d
        __asm _emit 0x00
        test dword ptr [esi + 0e4h], 10000000h
        ; Exact mapped bytes 74 10: je 0x100289f7
        __asm _emit 0x74
        __asm _emit 0x10
        test byte ptr [esi + 60h], 0fh
        ; Exact mapped bytes 74 0A: je 0x100289f7
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [esi + 40ch]
        or byte ptr [eax + 24h], 0fh
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 410h]
        add edx, 41h
        add eax, 18h
        push edx
        push eax
        ; Exact mapped bytes E8 C0 62 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x62
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 410h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add ecx, 41h
        add edx, 4
        push ecx
        mov ecx, dword ptr [esi + 408h]
        push edx
        ; Exact mapped bytes E8 9D 62 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x62
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 408h]
        pop edi
        or byte ptr [eax + 24h], 0fh
        or byte ptr [esi + 24h], 2
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
