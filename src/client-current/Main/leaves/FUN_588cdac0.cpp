// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CDAC0 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_588cdac0() {
    __asm {
        mov edx, dword ptr [esp + 8]
        mov eax, dword ptr [esp + 4]
        cmp edx, 2
        ; Exact mapped bytes 75 4D: jne 0x588cdb1a
        __asm _emit 0x75
        __asm _emit 0x4d
        cmp eax, dword ptr [ecx + 70h]
        ; Exact mapped bytes 75 22: jne 0x588cdaf4
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ecx + 50h]
        xor edx, edx
        ; Exact mapped bytes 66 89 50 38: mov word ptr [eax + 0x38], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x38
        mov eax, dword ptr [ecx + 74h]
        mov dword ptr [eax + 50h], 1
        mov ecx, dword ptr [ecx + 70h]
        mov dword ptr [ecx + 50h], 5
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 74h]
        ; Exact mapped bytes 75 21: jne 0x588cdb1a
        __asm _emit 0x75
        __asm _emit 0x21
        mov edx, dword ptr [ecx + 50h]
        mov eax, 1
        ; Exact mapped bytes 66 89 42 38: mov word ptr [edx + 0x38], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x38
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [edx + 50h], eax
        mov eax, dword ptr [ecx + 74h]
        mov dword ptr [eax + 50h], 5
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [esp + 10h]
        push esi
        push edx
        push eax
        ; Exact mapped bytes E8 19 21 00 00: call 0x588cfc40
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
