// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10014CB0 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_10014cb0_10014CB0() {
    __asm {
        ; Exact mapped bytes 8B 15 AC 57 1C 10: mov edx, dword ptr [0x101c57ac]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [edx + 160h]
        cmp esi, eax
        pop esi
        ; Exact mapped bytes 7E 15: jle 0x10014cdb
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x10014cdb
        __asm _emit 0x7c
        __asm _emit 0x11
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x10014cdb
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, edx
        ; Exact mapped bytes EB 02: jmp 0x10014cdd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ecx + 8ch]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10014d12
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
