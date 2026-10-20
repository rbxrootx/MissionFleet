// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DCAE0 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_100dcae0_100DCAE0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 81 66 24 F8 FF: and word ptr [esi + 0x24], 0xfff8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 68h]
        ; Exact mapped bytes E8 D7 21 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 6ch]
        push edx
        push eax
        ; Exact mapped bytes E8 C7 21 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        push ecx
        mov ecx, dword ptr [esi + 70h]
        push edx
        ; Exact mapped bytes E8 B7 21 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes E8 A7 21 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 78h]
        push edx
        push eax
        ; Exact mapped bytes E8 97 21 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 68h]
        ; Exact mapped bytes E8 9F AD F3 FF: call 0x100178e0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xad
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 6ch]
        ; Exact mapped bytes E8 97 AD F3 FF: call 0x100178e0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xad
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 70h]
        ; Exact mapped bytes E8 8F AD F3 FF: call 0x100178e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xad
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes E8 87 AD F3 FF: call 0x100178e0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xad
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 78h]
        ; Exact mapped bytes E8 7F AD F3 FF: call 0x100178e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xad
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        and ecx, 0e4f8h
        or ch, 4
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        pop esi
        ret
    }
}
