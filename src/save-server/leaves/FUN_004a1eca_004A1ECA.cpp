// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A1ECA .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_004a1eca_004A1ECA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1B A9 02 00: call 0x4cc7f7
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x4a1f2e
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        push edx
        ; Exact mapped bytes E8 EF 7E FC FF: call 0x469df0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x7e
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x4a1f16
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 06: jne 0x4a1f14
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x4a1f1d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 EA 77 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x77
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB BD: jmp 0x4a1eeb
        __asm _emit 0xeb
        __asm _emit 0xbd
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x4a1f4d
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx], 0
        mov eax, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 8]
        sub esi, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6F 2D 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [eax + 4], esi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
