// Reconstructed from FUN_100f3f40 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.

extern "C" __declspec(naked) void ResetOverlayControlState() {
    __asm {
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        xor edi, edi
        mov eax, dword ptr [ebx + 1424h]
        cmp eax, edi
        ; Exact immediate encoding: je short L_100F3F6E
        __asm _emit 0x74
        __asm _emit 0x1c
        push -1
        push eax
        ; Exact immediate encoding: call dword ptr [101750ech]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [ebx + 1424h]
        push eax
        ; Exact immediate encoding: call dword ptr [101750c0h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [ebx + 1424h], edi
L_100F3F6E:
        ; Exact immediate encoding: mov dword ptr [ebx + 1430h], 0ffffffffh
        __asm _emit 0xc7
        __asm _emit 0x83
        __asm _emit 0x30
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebx + 142ch], edi
        lea esi, [ebx + 808h]
        ; Exact immediate encoding: mov ebp, 100h
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_100F3F89:
        mov dword ptr [esi - 800h], edi
        mov dword ptr [esi - 400h], edi
        mov ecx, dword ptr [esi]
        cmp ecx, edi
        ; Exact immediate encoding: je short L_100F3FA3
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        call dword ptr [edx]
        mov dword ptr [esi], edi
L_100F3FA3:
        mov ecx, dword ptr [esi + 400h]
        cmp ecx, edi
        ; Exact immediate encoding: je short L_100F3FB9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        call dword ptr [eax]
        mov dword ptr [esi + 400h], edi
L_100F3FB9:
        mov eax, dword ptr [esi + 81ch]
        add esi, 4
        dec ebp
        mov dword ptr [eax + 0ch], edi
        mov dword ptr [eax + 10h], edi
        mov dword ptr [eax + 8], edi
        ; Exact immediate encoding: jne short L_100F3F89
        __asm _emit 0x75
        __asm _emit 0xbb
        mov dword ptr [ebx + 4], edi
        mov dword ptr [ebx + 1434h], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
