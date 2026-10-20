// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10013210 .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_10013210_10013210() {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0ch]
        mov ebx, ecx
        push edi
        lea eax, [esi*4]
        mov dword ptr [ebx], 101753b0h
        push eax
        mov dword ptr [ebx + 8], esi
        ; Exact mapped bytes E8 71 95 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x95
        __asm _emit 0x15
        __asm _emit 0x00
        shl esi, 4
        push esi
        mov dword ptr [ebx + 10h], eax
        ; Exact mapped bytes E8 65 95 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x95
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, esi
        mov esi, dword ptr [esp + 1ch]
        mov edx, ecx
        mov edi, eax
        shr ecx, 2
        mov dword ptr [ebx + 14h], eax
        add esp, 8
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        xor edi, edi
        push edi
        push 80h
        push 3
        push edi
        push edi
        push 80000000h
        push 1017f3d0h
        ; Exact mapped bytes FF 15 C4 50 17 10: call dword ptr [0x101750c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov esi, eax
        cmp esi, -1
        ; Exact mapped bytes 75 12: jne 0x1001328c
        __asm _emit 0x75
        __asm _emit 0x12
        push eax
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [ebx + 1ch], edi
        mov dword ptr [ebx + 18h], edi
        mov dword ptr [ebx + 0ch], edi
        ; Exact mapped bytes EB 39: jmp 0x100132c5
        __asm _emit 0xeb
        __asm _emit 0x39
        push edi
        push esi
        ; Exact mapped bytes FF 15 BC 50 17 10: call dword ptr [0x101750bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        mov dword ptr [ebx + 1ch], eax
        ; Exact mapped bytes E8 03 95 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x95
        __asm _emit 0x15
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 1ch]
        add esp, 4
        lea ecx, [esp + 10h]
        mov dword ptr [ebx + 18h], eax
        push edi
        push ecx
        push edx
        push eax
        push esi
        ; Exact mapped bytes FF 15 B8 50 17 10: call dword ptr [0x101750b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push esi
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [ebx + 18h]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebx + 0ch], ecx
        mov eax, dword ptr [ebx + 0ch]
        mov ecx, dword ptr [ebx + 8]
        cmp eax, ecx
        ; Exact mapped bytes 77 02: ja 0x100132d1
        __asm _emit 0x77
        __asm _emit 0x02
        mov eax, ecx
        lea edx, [eax*4]
        mov dword ptr [ebx + 24h], eax
        push edx
        ; Exact mapped bytes E8 BF 94 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebx + 4], edi
        mov dword ptr [ebx + 20h], eax
        mov eax, ebx
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
