// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FB040 .. +0x9C bytes.
extern "C" __declspec(naked) void FUN_100fb040_100FB040() {
    __asm {
        push -1
        push 1017453bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        mov esi, ecx
        push 0b74h
        ; Exact mapped bytes E8 3D 17 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x17
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 10h], 0
        ; Exact mapped bytes 74 13: je 0x100fb089
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [esp + 1ch]
        mov edx, dword ptr [esp + 18h]
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 19 63 FF FF: call 0x100f13a0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100fb08b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 4]
        test ecx, ecx
        ; Exact mapped bytes 75 12: jne 0x100fb0a4
        __asm _emit 0x75
        __asm _emit 0x12
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [eax + 0b6ch], 0
        ; Exact mapped bytes EB 15: jmp 0x100fb0b9
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [ecx + 0b70h], eax
        mov edx, dword ptr [esi + 8]
        mov dword ptr [eax + 0b6ch], edx
        mov dword ptr [esi + 8], eax
        mov dword ptr [eax + 0b70h], 0
        mov ecx, dword ptr [esi + 0ch]
        inc ecx
        mov dword ptr [esi + 0ch], ecx
        mov ecx, dword ptr [esp + 8]
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
