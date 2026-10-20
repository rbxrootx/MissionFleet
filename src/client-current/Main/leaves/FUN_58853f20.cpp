// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58853F20 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_58853f20() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 2d0h], 40000000h
        ; Exact mapped bytes 75 2B: jne 0x58853f5a
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 20c9ch]
        push 2ch
        ; Exact mapped bytes E8 9F 36 F5 FF: call 0x587a75e0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x36
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 2ch
        ; Exact mapped bytes E8 C2 1C F9 FF: call 0x587e5c10
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [esi + 2d0h], 0
        pop esi
        ret
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 20c9ch]
        push 0dh
        ; Exact mapped bytes E8 73 36 F5 FF: call 0x587a75e0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x36
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0dh
        ; Exact mapped bytes E8 96 1C F9 FF: call 0x587e5c10
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x1c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [esi + 2d0h], 40000000h
        pop esi
        ret
    }
}
