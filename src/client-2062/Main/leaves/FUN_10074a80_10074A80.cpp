// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10074A80 .. +0x12E bytes.
extern "C" __declspec(naked) void FUN_10074a80_10074A80() {
    __asm {
        ; Exact mapped bytes A1 E4 56 1C 10: mov eax, dword ptr [0x101c56e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [eax + 30h]
        mov edi, dword ptr [esp + 0ch]
        push edi
        push 67h
        mov edx, dword ptr [ecx]
        push esi
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        cmp edi, 3
        ; Exact mapped bytes 0F 87 E1 00 00 00: ja 0x10074b83
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 BD B0 4B 07 10: jmp dword ptr [edi*4 + 0x10074bb0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0xbd
        __asm _emit 0xb0
        __asm _emit 0x4b
        __asm _emit 0x07
        __asm _emit 0x10
        mov eax, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 18h]
        add eax, 320h
        add ecx, 258h
        mov dword ptr [esi + 1ch], eax
        mov eax, dword ptr [esi + 11ch]
        mov dword ptr [esi + 20h], ecx
        mov edx, dword ptr [eax + 14h]
        mov ecx, dword ptr [eax + 18h]
        add edx, 320h
        add ecx, 258h
        mov dword ptr [eax + 1ch], edx
        mov dword ptr [eax + 20h], ecx
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x10074b83
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 18h]
        mov edx, dword ptr [esi + 14h]
        add eax, 300h
        add edx, 400h
        mov dword ptr [esi + 20h], eax
        mov eax, dword ptr [esi + 11ch]
        mov dword ptr [esi + 1ch], edx
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [eax + 18h]
        add ecx, 400h
        add edx, 300h
        mov dword ptr [eax + 1ch], ecx
        ; Exact mapped bytes EB 69: jmp 0x10074b80
        __asm _emit 0xeb
        __asm _emit 0x69
        mov eax, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 18h]
        add eax, 500h
        add ecx, 400h
        mov dword ptr [esi + 1ch], eax
        mov eax, dword ptr [esi + 11ch]
        mov dword ptr [esi + 20h], ecx
        mov edx, dword ptr [eax + 14h]
        mov ecx, dword ptr [eax + 18h]
        add edx, 500h
        add ecx, 400h
        mov dword ptr [eax + 1ch], edx
        mov dword ptr [eax + 20h], ecx
        ; Exact mapped bytes EB 35: jmp 0x10074b83
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [esi + 18h]
        mov edx, dword ptr [esi + 14h]
        add eax, 4b0h
        add edx, 640h
        mov dword ptr [esi + 20h], eax
        mov eax, dword ptr [esi + 11ch]
        mov dword ptr [esi + 1ch], edx
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [eax + 18h]
        add ecx, 640h
        add edx, 4b0h
        mov dword ptr [eax + 1ch], ecx
        mov dword ptr [eax + 20h], edx
        mov eax, dword ptr [esi + 20h]
        mov edx, dword ptr [esi + 18h]
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        sub eax, edx
        sub eax, 31h
        mov dword ptr [ecx + 50h], 0
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
