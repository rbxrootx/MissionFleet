// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436CC1 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_00436cc1_00436CC1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        push 1
        mov ebx, ecx
        pop edi
        cmp dword ptr [esi + 8], edi
        mov dword ptr [ebp - 4], edi
        ; Exact mapped bytes 7E 42: jle 0x436d1a
        __asm _emit 0x7e
        __asm _emit 0x42
        mov eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x436cf7
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebx + 10h]
        cmp dword ptr [ecx + edi*8 + 4], eax
        ; Exact mapped bytes 74 0F: je 0x436cf7
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [esi + 0ch]
        cmp dword ptr [eax + edi*4], 0
        ; Exact mapped bytes 74 1D: je 0x436d0e
        __asm _emit 0x74
        __asm _emit 0x1d
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 17: jmp 0x436d0e
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [esi + 0ch]
        mov ecx, dword ptr [eax + edi*4]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x436d07
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov eax, dword ptr [esi + 0ch]
        and dword ptr [eax + edi*4], 0
        inc edi
        cmp edi, dword ptr [esi + 8]
        ; Exact mapped bytes 7C C4: jl 0x436cd8
        __asm _emit 0x7c
        __asm _emit 0xc4
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 39: je 0x436d53
        __asm _emit 0x74
        __asm _emit 0x39
        lea edi, [ebx + 1ch]
        push edi
        ; Exact mapped bytes FF 15 7C C1 43 00: call dword ptr [0x43c17c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push esi
        lea ecx, [ebx + 14h]
        ; Exact mapped bytes E8 2A FC FF FF: call 0x436957
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push dword ptr [esi + 0ch]
        ; Exact mapped bytes FF 15 8C C2 43 00: call dword ptr [0x43c28c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 08: je 0x436d49
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        push 0
        push dword ptr [ebx]
        ; Exact mapped bytes FF 15 E0 C0 43 00: call dword ptr [0x43c0e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
