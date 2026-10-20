// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875DF50 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_5875df50() {
    __asm {
        ; Exact mapped bytes A1 C4 84 A2 58: mov eax, dword ptr [0x58a284c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push eax
        mov esi, ecx
        ; Exact mapped bytes FF 15 D0 C3 98 58: call dword ptr [0x5898c3d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + 50h]
        or dword ptr [esi + 68h], 1
        cmp eax, 2
        ; Exact mapped bytes 75 2D: jne 0x5875df98
        __asm _emit 0x75
        __asm _emit 0x2d
        mov dword ptr [esi + 50h], 4
        mov eax, dword ptr [esi + 30h]
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x5875df94
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        shr cl, 5
        test cl, 1
        ; Exact mapped bytes 74 0F: je 0x5875df94
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        push 1
        push 2
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        pop esi
        ret
        cmp eax, 3
        ; Exact mapped bytes 75 09: jne 0x5875dfa6
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [esi + 50h], 6
        ; Exact mapped bytes EB CC: jmp 0x5875df72
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov eax, dword ptr [esi + 34h]
        pop esi
        ret
    }
}
