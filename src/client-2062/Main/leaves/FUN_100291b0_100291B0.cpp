// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100291B0 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_100291b0_100291B0() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 454h]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [eax + 10h]
        cmp ecx, edx
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x1002928a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [eax + 0ch]
        cmp ecx, edx
        ; Exact mapped bytes 74 19: je 0x100291eb
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [eax + 4]
        dec edx
        cmp ecx, edx
        ; Exact mapped bytes 75 04: jne 0x100291de
        __asm _emit 0x75
        __asm _emit 0x04
        xor edx, edx
        ; Exact mapped bytes EB 03: jmp 0x100291e1
        __asm _emit 0xeb
        __asm _emit 0x03
        lea edx, [ecx + 1]
        mov dword ptr [eax + 10h], edx
        mov edx, dword ptr [eax + 8]
        dec edx
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [eax + 14h]
        mov esi, dword ptr [eax + ecx*4]
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 0bh
        ; Exact mapped bytes 7E 0F: jle 0x1002920e
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1002920e
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x10029210
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [esi + 104h]
        mov ecx, dword ptr [esi + 100h]
        push 0
        push 0
        push eax
        push ecx
        mov ecx, dword ptr [edi + 450h]
        push esi
        ; Exact mapped bytes E8 BB 90 FE FF: call 0x100122f0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [edi + 454h]
        mov edx, dword ptr [eax + 0ch]
        mov ecx, dword ptr [eax + 10h]
        cmp edx, ecx
        ; Exact mapped bytes 74 14: je 0x10029259
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [eax + 14h]
        mov eax, dword ptr [edx + ecx*4]
        mov ecx, dword ptr [esi + 100h]
        cmp ecx, dword ptr [eax + 100h]
        ; Exact mapped bytes 7D 24: jge 0x1002927d
        __asm _emit 0x7d
        __asm _emit 0x24
        test esi, esi
        ; Exact mapped bytes 74 09: je 0x10029266
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 21 35 14 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [edi + 454h]
        mov edx, dword ptr [eax + 0ch]
        mov ecx, dword ptr [eax + 10h]
        cmp edx, ecx
        ; Exact mapped bytes 0F 85 4E FF FF FF: jne 0x100291c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ret
        test esi, esi
        ; Exact mapped bytes 74 09: je 0x1002928a
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 FD 34 14 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x34
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        ret
    }
}
