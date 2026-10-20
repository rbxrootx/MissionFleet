// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EDC70 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_100edc70_100EDC70() {
    __asm {
        push esi
        mov esi, ecx
        push 101h
        mov ecx, dword ptr [esi + 5cdch]
        ; Exact mapped bytes E8 DD 14 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esp + 8]
        cmp eax, 40000000h
        ; Exact mapped bytes 75 31: jne 0x100edcbf
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, dword ptr [esi + 5cdch]
        mov ecx, 0fh
        or byte ptr [eax + 24h], 1
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 4], esi
        ; Exact mapped bytes 74 0A: je 0x100edcb1
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [esi + 0f1ch]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [esi + 0f20h]
        ; Exact mapped bytes 66 09 4E 24: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4e
        __asm _emit 0x24
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 30: jne 0x100edcf3
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, dword ptr [esi + 5cdch]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 4], esi
        ; Exact mapped bytes 74 0A: je 0x100edce9
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [esi + 0f1ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [esi + 0f20h]
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
