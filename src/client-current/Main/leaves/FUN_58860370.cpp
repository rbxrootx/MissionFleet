// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58860370 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_58860370() {
    __asm {
        mov eax, dword ptr [ecx + 11ch]
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [edx + 4]
        add eax, 139h
        shl eax, 4
        mov eax, dword ptr [eax + edx]
        push esi
        xor esi, esi
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x588603ad
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [eax + 0ch]
        cmp dword ptr [edx + 460h], 0
        ; Exact mapped bytes 75 09: jne 0x588603a6
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [edx + 514h]
        add esi, dword ptr [edx + 64h]
        mov eax, dword ptr [eax + 8]
        test eax, eax
        ; Exact mapped bytes 75 E4: jne 0x58860391
        __asm _emit 0x75
        __asm _emit 0xe4
        mov ecx, dword ptr [ecx + 75ch]
        push esi
        ; Exact mapped bytes E8 A7 6F 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x6f
        __asm _emit 0x0a
        __asm _emit 0x00
        pop esi
        ret
    }
}
