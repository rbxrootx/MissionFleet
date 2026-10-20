// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588634D0 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_588634d0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ach]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 75 11: jne 0x588634f0
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, 1
        ; Exact mapped bytes 66 89 8E A6 00 00 00: mov word ptr [esi + 0xa6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 50h], ecx
        ; Exact mapped bytes EB 0C: jmp 0x588634fc
        __asm _emit 0xeb
        __asm _emit 0x0c
        xor edx, edx
        ; Exact mapped bytes 66 89 96 A6 00 00 00: mov word ptr [esi + 0xa6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 50h], edx
        ; Exact mapped bytes A1 F8 48 A2 58: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0b4h]
        push eax
        ; Exact mapped bytes E8 83 44 0A 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop esi
        ret
    }
}
