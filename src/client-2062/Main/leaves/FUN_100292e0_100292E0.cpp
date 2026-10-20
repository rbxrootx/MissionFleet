// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100292E0 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_100292e0_100292E0() {
    __asm {
        mov eax, dword ptr [ecx + 0a4h]
        and al, 0feh
        cmp eax, 0a0h
        ; Exact mapped bytes 75 62: jne 0x10029351
        __asm _emit 0x75
        __asm _emit 0x62
        ; Exact mapped bytes 8B 15 18 58 1C 10: mov edx, dword ptr [0x101c5818]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [edx + 160h]
        cmp esi, eax
        pop esi
        ; Exact mapped bytes 7E 15: jle 0x1002931a
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x1002931a
        __asm _emit 0x7c
        __asm _emit 0x11
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x1002931a
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, edx
        ; Exact mapped bytes EB 02: jmp 0x1002931c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ecx + 3dch]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10029351
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
