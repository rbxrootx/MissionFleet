// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875C200 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_5875c200() {
    __asm {
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        mov esi, dword ptr [eax + 0ch]
        push edi
        mov edi, ecx
        test esi, esi
        ; Exact mapped bytes 74 4F: je 0x5875c25f
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, esi
        ; Exact mapped bytes E8 C9 A4 17 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xa4
        __asm _emit 0x17
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 3A: jne 0x5875c258
        __asm _emit 0x75
        __asm _emit 0x3a
        cmp dword ptr [edi + 15ch], 0
        ; Exact mapped bytes 74 31: je 0x5875c258
        __asm _emit 0x74
        __asm _emit 0x31
        movzx eax, word ptr [esi + 164h]
        cmp eax, 5
        ; Exact mapped bytes 77 25: ja 0x5875c258
        __asm _emit 0x77
        __asm _emit 0x25
        ; Exact mapped bytes FF 24 85 64 C2 75 58: jmp dword ptr [eax*4 + 0x5875c264]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xc2
        __asm _emit 0x75
        __asm _emit 0x58
        ; Exact mapped bytes D9 05 00 D9 98 58: fld dword ptr [0x5898d900]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0xd9
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes EB 0A: jmp 0x5875c24c
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes D9 05 50 30 9A 58: fld dword ptr [0x589a3050]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x30
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes EB 02: jmp 0x5875c24c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes D9 E8: fld1
        __asm _emit 0xd9
        __asm _emit 0xe8
        push ecx
        ; Exact mapped bytes D9 1C 24: fstp dword ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x1c
        __asm _emit 0x24
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 08 FB FF FF: call 0x5875bd60
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 B1: jne 0x5875c210
        __asm _emit 0x75
        __asm _emit 0xb1
        pop edi
        pop esi
        ret
    }
}
