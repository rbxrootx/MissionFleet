// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10015F70 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_10015f70_10015F70() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 C9 00 00 00: je 0x10016048
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 108h]
        test ecx, ecx
        ; Exact mapped bytes 75 35: jne 0x10015fbe
        __asm _emit 0x75
        __asm _emit 0x35
        mov ecx, dword ptr [esi + 10ch]
        mov edx, dword ptr [esi + 110h]
        cmp ecx, edx
        ; Exact mapped bytes 7D 09: jge 0x10015fa2
        __asm _emit 0x7d
        __asm _emit 0x09
        inc ecx
        mov dword ptr [esi + 10ch], ecx
        pop esi
        ret
        or al, 1
        mov dword ptr [esi + 108h], 1
        mov dword ptr [esi + 10ch], 0
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        pop esi
        ret
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x10016048
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 28h]
        test eax, eax
        ; Exact mapped bytes 7E 60: jle 0x1001602e
        __asm _emit 0x7e
        __asm _emit 0x60
        mov eax, dword ptr [esi + 0fch]
        mov edx, dword ptr [esi + 114h]
        sub edx, eax
        mov eax, 51eb851fh
        mov ecx, edx
        mov dword ptr [esi + 114h], edx
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, esi
        push edx
        ; Exact mapped bytes E8 C3 8D 0E 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x8d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0fch]
        add eax, -46h
        mov dword ptr [esi + 0fch], eax
        ; Exact mapped bytes 79 3A: jns 0x10016048
        __asm _emit 0x79
        __asm _emit 0x3a
        mov eax, dword ptr [esi + 28h]
        mov edx, dword ptr [esi + 100h]
        sub eax, edx
        mov edx, 0
        sets dl
        dec edx
        mov ecx, esi
        and eax, edx
        push eax
        ; Exact mapped bytes E8 F4 90 0E 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x90
        __asm _emit 0x0e
        __asm _emit 0x00
        pop esi
        ret
        mov ecx, esi
        ; Exact mapped bytes E8 2B 90 0E 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x90
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 74 90 0E 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x0e
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 08: je 0x10016048
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        pop esi
        ret
    }
}
