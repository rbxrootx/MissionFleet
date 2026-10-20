// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005793F0 .. +0xCD bytes.
extern "C" __declspec(naked) void __1CDocManager__UAE_XZ_005793F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57eb92h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 1ch
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax], 587ad8h
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4
        ; Exact mapped bytes E8 65 98 FB FF: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x98
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 5F: je 0x579491
        __asm _emit 0x74
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4
        ; Exact mapped bytes E8 69 98 FB FF: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x98
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 3A: je 0x57948f
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4
        ; Exact mapped bytes E8 2D E4 F6 FF: call 0x4e7891
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 12: je 0x579488
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x57948f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 9B: jmp 0x57942c
        __asm _emit 0xeb
        __asm _emit 0x9b
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4
        ; Exact mapped bytes E8 54 DC F6 FF: call 0x4e70f4
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xdc
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F8 74 FB FF: call 0x5309a7
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x74
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
