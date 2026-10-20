// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588BA7A0 .. +0xCB bytes.
extern "C" __declspec(naked) void FUN_588ba7a0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, 0fffbh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 68h]
        ; Exact mapped bytes E8 C2 8A 04 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x8a
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 6ch]
        push edx
        push eax
        ; Exact mapped bytes E8 B2 8A 04 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x8a
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        push ecx
        mov ecx, dword ptr [esi + 70h]
        push edx
        ; Exact mapped bytes E8 A2 8A 04 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x8a
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes E8 92 8A 04 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x8a
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 78h]
        push edx
        push eax
        ; Exact mapped bytes E8 82 8A 04 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x8a
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 68h]
        ; Exact mapped bytes E8 AA 30 EA FF: call 0x5875d8c0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x30
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 6ch]
        ; Exact mapped bytes E8 A2 30 EA FF: call 0x5875d8c0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x30
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 70h]
        ; Exact mapped bytes E8 9A 30 EA FF: call 0x5875d8c0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x30
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes E8 92 30 EA FF: call 0x5875d8c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x30
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 78h]
        ; Exact mapped bytes E8 8A 30 EA FF: call 0x5875d8c0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x30
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 0fffbh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0e4ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 400h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        pop esi
        ret
    }
}
