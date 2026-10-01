// Reconstructed from FUN_10018840 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.

extern "C" __declspec(naked) void FUN_10018840() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 74h]
        mov dword ptr [esi + 70h], eax
        mov eax, dword ptr [esp + 8]
        test eax, eax
        ; Exact immediate encoding: je short L_10018873
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [esi + 6ch]
        push edi
        lea edi, [esi + 80h]
        push eax
        push edi
        ; Exact immediate encoding: mov byte ptr [ecx], 0
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact immediate encoding: call dword ptr [101750b0h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push edi
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 78h], eax
        pop edi
        ; Exact immediate encoding: jmp short L_10018887
        __asm _emit 0xeb
        __asm _emit 0x14
L_10018873:
        mov edx, dword ptr [esi + 6ch]
        ; Exact immediate encoding: mov byte ptr [edx], 0
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact immediate encoding: mov byte ptr [esi + 80h], 0
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov dword ptr [esi + 78h], 0
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10018887:
        mov ax, word ptr [esi + 24h]
        ; Exact immediate encoding: mov dword ptr [esi + 7ch], 0
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0e1ffh
        or eax, 104h
        mov word ptr [esi + 24h], ax
        pop esi
        ret 4
    }
}
