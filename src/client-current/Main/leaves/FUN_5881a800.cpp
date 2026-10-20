// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881A800 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_5881a800() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 74h]
        cmp eax, 1
        ; Exact mapped bytes 75 1A: jne 0x5881a825
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D 28 48 A2 58: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0ah
        ; Exact mapped bytes E8 28 46 F9 FF: call 0x587aee40
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x46
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 71: je 0x5881a88d
        __asm _emit 0x74
        __asm _emit 0x71
        mov dword ptr [esi + 74h], 0ah
        pop esi
        ret
        cmp eax, 0ah
        ; Exact mapped bytes 75 1A: jne 0x5881a844
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D 28 48 A2 58: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push 66h
        ; Exact mapped bytes E8 09 46 F9 FF: call 0x587aee40
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x5881a88d
        __asm _emit 0x74
        __asm _emit 0x52
        mov dword ptr [esi + 74h], 66h
        pop esi
        ret
        cmp eax, 66h
        ; Exact mapped bytes 75 1C: jne 0x5881a865
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D 28 48 A2 58: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push 67h
        ; Exact mapped bytes E8 EA 45 F9 FF: call 0x587aee40
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        and eax, 65h
        add eax, 2
        mov dword ptr [esi + 74h], eax
        pop esi
        ret
        cmp eax, 67h
        ; Exact mapped bytes 75 1C: jne 0x5881a886
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D 28 48 A2 58: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push 68h
        ; Exact mapped bytes E8 C9 45 F9 FF: call 0x587aee40
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        and eax, 66h
        add eax, 2
        mov dword ptr [esi + 74h], eax
        pop esi
        ret
        mov dword ptr [esi + 74h], 0c9h
        pop esi
        ret
    }
}
