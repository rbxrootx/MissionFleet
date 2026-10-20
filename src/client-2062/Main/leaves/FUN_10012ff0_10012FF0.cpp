// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10012FF0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_10012ff0_10012FF0() {
    __asm {
        mov eax, dword ptr [ecx + 8]
        mov ecx, dword ptr [ecx + 0ch]
        push esi
        cmp eax, ecx
        ; Exact mapped bytes 74 18: je 0x10013013
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [esp + 0ch]
        mov esi, dword ptr [esp + 8]
        cmp dword ptr [eax], esi
        ; Exact mapped bytes 75 05: jne 0x1001300c
        __asm _emit 0x75
        __asm _emit 0x05
        cmp dword ptr [eax + 4], edx
        ; Exact mapped bytes 74 09: je 0x10013015
        __asm _emit 0x74
        __asm _emit 0x09
        add eax, 48h
        cmp eax, ecx
        ; Exact mapped bytes 75 F0: jne 0x10013003
        __asm _emit 0x75
        __asm _emit 0xf0
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
