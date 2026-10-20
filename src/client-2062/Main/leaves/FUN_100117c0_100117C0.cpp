// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100117C0 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_100117c0_100117C0() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        mov ebx, dword ptr [esp + 14h]
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 10h]
        mov eax, dword ptr [esi + 58h]
        push ecx
        push ebx
        mov edi, dword ptr [eax + 50h]
        mov ebp, dword ptr [edi]
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push ebx
        mov ecx, edi
        ; Exact mapped bytes FF 55 04: call dword ptr [ebp + 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x04
        mov edx, dword ptr [esi + 14h]
        mov eax, dword ptr [esp + 10h]
        mov edi, dword ptr [esi + 50h]
        lea ecx, [edx + eax + 0eh]
        mov edx, dword ptr [esi + 18h]
        mov dword ptr [esi + 1ch], ecx
        mov ecx, dword ptr [esp + 14h]
        lea edx, [edx + ecx + 6]
        mov ecx, edi
        mov dword ptr [esi + 20h], edx
        sub ecx, eax
        ; Exact mapped bytes A1 34 93 1C 10: mov eax, dword ptr [0x101c9334]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + 60h]
        cdq
        sub eax, edx
        sar eax, 1
        cmp ecx, eax
        ; Exact mapped bytes 7D 02: jge 0x1001181e
        __asm _emit 0x7d
        __asm _emit 0x02
        mov ecx, edi
        mov edx, dword ptr [esi + 54h]
        sub edx, 5
        push edx
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 A3 D4 0E 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xd4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esi, dword ptr [esi + 58h]
        mov eax, dword ptr [esi + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x10011843
        __asm _emit 0x74
        __asm _emit 0x0c
        test ebx, ebx
        ; Exact mapped bytes 74 08: je 0x10011843
        __asm _emit 0x74
        __asm _emit 0x08
        push ebx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
