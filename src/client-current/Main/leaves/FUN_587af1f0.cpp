// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AF1F0 .. +0x134 bytes.
extern "C" __declspec(naked) void FUN_587af1f0() {
    __asm {
        push ecx
        push 0f4241h
        ; Exact mapped bytes E8 45 FC FF FF: call 0x587aee40
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 1A 01 00 00: je 0x587af320
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push ebp
        push esi
        push edi
        push 134h
        ; Exact mapped bytes E8 3A DA 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xda
        __asm _emit 0x1c
        __asm _emit 0x00
        push 134h
        mov ebp, eax
        push 0
        push ebp
        ; Exact mapped bytes E8 25 DA 1C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xda
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [eax + 0ch]
        mov ebx, dword ptr [esp + 28h]
        add esp, 10h
        test esi, esi
        ; Exact mapped bytes 74 26: je 0x587af25c
        __asm _emit 0x74
        __asm _emit 0x26
        lea edi, [ebx + 6]
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 12e8h]
        mov eax, dword ptr [ecx + 6ch]
        push edi
        push eax
        ; Exact mapped bytes FF 15 A4 C1 98 58: call dword ptr [0x5898c1a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x587af25c
        __asm _emit 0x74
        __asm _emit 0x07
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 E4: jne 0x587af240
        __asm _emit 0x75
        __asm _emit 0xe4
        mov dword ptr [ebp + 11ch], 5
        mov edx, dword ptr [esi + 4]
        mov dword ptr [ebp], edx
        mov eax, dword ptr [esi + 8]
        mov dword ptr [ebp + 4], eax
        lea edi, [ebp + 8]
        mov ecx, 45h
        mov esi, ebx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        movzx ecx, byte ptr [ebx + 100h]
        mov dword ptr [ebp + 130h], ecx
        mov edx, dword ptr [ebx + 44h]
        mov eax, dword ptr [ebp + 130h]
        shr edx, 1
        and edx, 1fh
        mov dword ptr [ebp + 12ch], edx
        xor ecx, ecx
        mov edx, 20h
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 79 22 1C 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x22
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 130h]
        mov edx, dword ptr [esp + 24h]
        shl ecx, 5
        push ecx
        push edx
        push eax
        mov dword ptr [ebp + 128h], eax
        ; Exact mapped bytes E8 7C DA 1C 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xda
        __asm _emit 0x1c
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 12ch]
        xor ecx, ecx
        mov edx, 18h
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 42 22 1C 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x22
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 12ch]
        mov edx, dword ptr [esp + 30h]
        lea ecx, [ecx + ecx*2]
        add ecx, ecx
        add ecx, ecx
        add ecx, ecx
        push ecx
        push edx
        push eax
        mov dword ptr [ebp + 120h], eax
        ; Exact mapped bytes E8 3F DA 1C 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xda
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 30h]
        add esp, 20h
        push 1
        push ebp
        ; Exact mapped bytes E8 84 D8 FF FF: call 0x587acba0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
