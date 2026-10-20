// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D6E50 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_588d6e50() {
    __asm {
        mov edx, dword ptr [esp + 4]
        test edx, edx
        ; Exact mapped bytes 74 40: je 0x588d6e98
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ecx + 12c8h]
        mov dword ptr [eax + 50h], edx
        push esi
        mov esi, dword ptr [edx + 10h]
        mov dword ptr [eax + 0ch], esi
        mov esi, dword ptr [edx + 14h]
        mov dword ptr [eax + 10h], esi
        mov esi, dword ptr [edx + 18h]
        add edx, 18h
        mov dword ptr [eax + 14h], esi
        mov esi, dword ptr [edx + 4]
        add eax, 14h
        mov dword ptr [eax + 4], esi
        mov esi, dword ptr [edx + 8]
        mov dword ptr [eax + 8], esi
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ecx + 12c8h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
