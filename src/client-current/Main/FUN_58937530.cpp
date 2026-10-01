// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58937530 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_58937530() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esi], 589a2dc8h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x58937550
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 50 5A 04 00: call 0x5897cf96
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x5a
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0ch], 0
        mov ecx, esi
        ; Exact mapped bytes E8 69 C5 FC FF: call 0x58903ac0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xc5
        __asm _emit 0xfc
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x58937567
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 DE 56 04 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x56
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
