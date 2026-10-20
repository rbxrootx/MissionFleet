// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B12B0 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_587b12b0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 19: jne 0x587b12dd
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [esi + 104h]
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea eax, [esi + 104h]
        push edx
        push eax
        ; Exact mapped bytes E8 63 03 FF FF: call 0x587a1640
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 104h]
        xor eax, 0aaaaaaaah
        cmp eax, 40000000h
        ; Exact mapped bytes 74 0D: je 0x587b12fc
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [esi + 0f4h], 0
        ; Exact mapped bytes 74 04: je 0x587b12fc
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        pop esi
        ret
        mov eax, 1
        pop esi
        ret
    }
}
