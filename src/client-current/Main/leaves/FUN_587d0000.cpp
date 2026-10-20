// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D0000 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_587d0000() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0a00h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        cmp dword ptr [esp + 8], 0
        ; Exact mapped bytes 75 26: jne 0x587d003d
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 8B 0D BC 45 A2 58: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 66 83 4E 24 02: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        mov dword ptr [esi + 780h], 1
        mov dword ptr [esi + 0ech], 0
        mov ecx, dword ptr [esi + 0adch]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
