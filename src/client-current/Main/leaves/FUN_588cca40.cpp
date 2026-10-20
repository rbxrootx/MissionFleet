// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CCA40 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_588cca40() {
    __asm {
        mov eax, dword ptr [ecx + 70h]
        cmp dword ptr [eax + 50h], 0
        mov edx, 1
        ; Exact mapped bytes 74 03: je 0x588cca51
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [ecx + 74h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x588cca5d
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [ecx + 78h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x588cca69
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [esp + 4]
        sub eax, 0
        ; Exact mapped bytes 74 34: je 0x588ccaa6
        __asm _emit 0x74
        __asm _emit 0x34
        sub eax, edx
        ; Exact mapped bytes 74 1A: je 0x588cca90
        __asm _emit 0x74
        __asm _emit 0x1a
        sub eax, edx
        ; Exact mapped bytes 75 40: jne 0x588ccaba
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [ecx + 50h]
        mov byte ptr [eax + 86h], 7
        mov ecx, dword ptr [ecx + 78h]
        mov dword ptr [ecx + 50h], 5
        ; Exact mapped bytes EB 2A: jmp 0x588ccaba
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ecx + 50h]
        mov eax, 5
        mov byte ptr [edx + 86h], al
        mov ecx, dword ptr [ecx + 74h]
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes EB 14: jmp 0x588ccaba
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 86h], 3
        mov eax, dword ptr [ecx + 70h]
        mov dword ptr [eax + 50h], 5
        ; Exact mapped bytes 8B 0D A0 45 A2 58: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 0a00h]
        push 0
        push 7
        ; Exact mapped bytes E8 81 C7 FF FF: call 0x588c9250
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
