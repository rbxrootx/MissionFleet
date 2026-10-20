// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585233D0 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_585233d0_585233D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 35 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x35
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x58523431
        __asm _emit 0x74
        __asm _emit 0x3f
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 39: je 0x58523431
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D0 23 F7 FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x23
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 35 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x35
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3C 8D F6 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x8d
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 0C: jne 0x58523424
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 70 00 00 00: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x58523433
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes EB 0B: jmp 0x5852342f
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 46 F6 FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB C1: jmp 0x585233f2
        __asm _emit 0xeb
        __asm _emit 0xc1
        xor eax, eax
        pop esi
        mov esp, ebp
    }
}
