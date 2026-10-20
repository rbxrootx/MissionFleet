// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CC940 .. +0xEC bytes.
extern "C" __declspec(naked) void FUN_588cc940() {
    __asm {
        mov eax, dword ptr [ecx + 70h]
        xor edx, edx
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [ecx + 74h]
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [ecx + 78h]
        mov dword ptr [eax + 50h], edx
        push esi
        mov esi, dword ptr [ecx + 7ch]
        mov eax, 1
        mov dword ptr [esi + 50h], eax
        mov esi, dword ptr [ecx + 80h]
        mov dword ptr [esi + 50h], eax
        mov esi, dword ptr [ecx + 84h]
        mov dword ptr [esi + 50h], eax
        mov esi, dword ptr [ecx + 88h]
        mov dword ptr [esi + 50h], eax
        mov esi, dword ptr [esp + 8]
        cmp esi, 3
        ; Exact mapped bytes 0F 87 A0 00 00 00: ja 0x588cca28
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 B5 2C CA 8C 58: jmp dword ptr [esi*4 + 0x588cca2c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0xb5
        __asm _emit 0x2c
        __asm _emit 0xca
        __asm _emit 0x8c
        __asm _emit 0x58
        mov esi, dword ptr [ecx + 50h]
        mov byte ptr [esi + 87h], 5
        mov esi, dword ptr [ecx + 74h]
        mov dword ptr [esi + 50h], eax
        mov esi, dword ptr [ecx + 78h]
        mov dword ptr [esi + 50h], eax
        mov eax, dword ptr [ecx + 7ch]
        push edx
        mov dword ptr [eax + 50h], 5
        mov edx, dword ptr [ecx + 74h]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 18h]
        push 2
        push edx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, dword ptr [ecx + 50h]
        mov byte ptr [esi + 87h], 0ah
        mov esi, dword ptr [ecx + 70h]
        mov dword ptr [esi + 50h], eax
        mov esi, dword ptr [ecx + 74h]
        mov dword ptr [esi + 50h], eax
        mov eax, dword ptr [ecx + 80h]
        ; Exact mapped bytes EB 34: jmp 0x588cca13
        __asm _emit 0xeb
        __asm _emit 0x34
        mov esi, dword ptr [ecx + 50h]
        mov byte ptr [esi + 87h], 0fh
        mov esi, dword ptr [ecx + 70h]
        mov dword ptr [esi + 50h], eax
        mov esi, dword ptr [ecx + 74h]
        mov dword ptr [esi + 50h], eax
        mov eax, dword ptr [ecx + 84h]
        ; Exact mapped bytes EB 16: jmp 0x588cca13
        __asm _emit 0xeb
        __asm _emit 0x16
        mov esi, dword ptr [ecx + 50h]
        mov byte ptr [esi + 87h], 14h
        mov esi, dword ptr [ecx + 70h]
        mov dword ptr [esi + 50h], eax
        mov eax, dword ptr [ecx + 88h]
        push edx
        mov dword ptr [eax + 50h], 5
        mov edx, dword ptr [ecx + 70h]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 18h]
        push 2
        push edx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
