// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10015620 .. +0xEE bytes.
extern "C" __declspec(naked) void FUN_10015620_10015620() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x1001570b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a4h]
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x10015690
        __asm _emit 0x74
        __asm _emit 0x58
        mov eax, dword ptr [esi + 64h]
        mov ecx, 1
        mov dl, byte ptr [eax + 24h]
        and dl, cl
        cmp dl, cl
        ; Exact mapped bytes 75 06: jne 0x1001564f
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 68h]
        test byte ptr [eax + 24h], cl
        ; Exact mapped bytes 75 04: jne 0x1001565b
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0d8h]
        ; Exact mapped bytes E8 55 FF 07 00: call 0x100955c0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        cmp eax, ecx
        mov eax, dword ptr [esi + 68h]
        ; Exact mapped bytes 75 06: jne 0x1001567e
        __asm _emit 0x75
        __asm _emit 0x06
        or byte ptr [eax + 24h], 4
        ; Exact mapped bytes EB 69: jmp 0x100156e7
        __asm _emit 0xeb
        __asm _emit 0x69
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 68h]
        mov dword ptr [ecx + 50h], 4
        ; Exact mapped bytes EB 57: jmp 0x100156e7
        __asm _emit 0xeb
        __asm _emit 0x57
        mov eax, dword ptr [esi + 68h]
        mov ecx, 1
        mov dl, byte ptr [eax + 24h]
        and dl, cl
        cmp dl, cl
        ; Exact mapped bytes 75 06: jne 0x100156a7
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 64h]
        test byte ptr [eax + 24h], cl
        ; Exact mapped bytes 75 04: jne 0x100156b3
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 BE 9E 00 00 00 00: cmp word ptr [esi + 0x9e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 20: jne 0x100156dd
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [esi + 0ach]
        mov ecx, dword ptr [eax + 68h]
        mov edx, dword ptr [eax + 64h]
        dec ecx
        cmp edx, ecx
        ; Exact mapped bytes 7D 03: jge 0x100156d1
        __asm _emit 0x7d
        __asm _emit 0x03
        mov dword ptr [eax + 64h], ecx
        mov eax, dword ptr [esi + 64h]
        mov dword ptr [eax + 50h], 0
        ; Exact mapped bytes EB 0A: jmp 0x100156e7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [esi + 64h]
        mov dword ptr [ecx + 50h], 2
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x1001570b
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x10015706
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x100156ee
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
