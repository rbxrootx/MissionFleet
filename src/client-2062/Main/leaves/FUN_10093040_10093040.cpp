// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10093040 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_10093040_10093040() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        test eax, eax
        mov esi, ecx
        ; Exact mapped bytes 75 22: jne 0x1009306d
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x1009308d
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [esp + 10h]
        lea ecx, [eax + 0ch]
        mov eax, dword ptr [esi + 94h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x1009308d
        __asm _emit 0x74
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 22: je 0x1009308d
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes EB 18: jmp 0x10093085
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [esi + 94h]
        mov ecx, dword ptr [esp + 10h]
        add ecx, 0ch
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1009308d
        __asm _emit 0x74
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1009308d
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov byte ptr [esi + 0a0h], 1
        and edx, 1f00h
        cmp edx, 500h
        ; Exact mapped bytes 75 07: jne 0x100930ad
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
