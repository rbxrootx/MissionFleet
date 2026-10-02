// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587EA630 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_587ea630_segment_00() {
    __asm {
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B 5C 24 0C: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 4C 24 10: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes BD C4 B1 A0 58: mov ebp, 0x58a0b1c4
        __asm _emit 0xbd
        __asm _emit 0xc4
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes F6 40 64 01: test byte ptr [eax + 0x64], 1
        __asm _emit 0xf6
        __asm _emit 0x40
        __asm _emit 0x64
        __asm _emit 0x01
        ; Exact mapped bytes 74 50: je 0x587ea69b
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 71 0C: mov esi, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x0c
        ; Exact mapped bytes 0F B7 3B: movzx edi, word ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x3b
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 40: je 0x587ea69b
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes EB 03: jmp 0x587ea660
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}
