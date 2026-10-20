// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877FF40 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_5877ff40() {
    __asm {
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 B8 F0 05 01 00 0F: cmp word ptr [eax + 0x105f0], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0f
        push esi
        mov esi, ecx
        ; Exact mapped bytes 75 20: jne 0x5877ff72
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [esp + 8]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 E2 15 FB FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x15
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, dword ptr [esi + 58h]
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x5877ff86
        __asm _emit 0x75
        __asm _emit 0x21
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esi + 54h]
        push eax
        ; Exact mapped bytes E8 C1 15 FB FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x15
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, dword ptr [esi + 58h]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5877ff8f
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 83 4E 24 01: or word ptr [esi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x01
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, 0fffeh
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
