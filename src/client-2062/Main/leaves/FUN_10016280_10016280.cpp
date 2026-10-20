// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10016280 .. +0x272 bytes.
extern "C" __declspec(naked) void FUN_10016280_10016280() {
    __asm {
        sub esp, 20h
        push ebx
        mov eax, dword ptr [esp + 28h]
        push ebp
        push esi
        xor ebp, ebp
        push edi
        push ebp
        push 80h
        push 3
        push ebp
        push ebp
        mov esi, ecx
        push 80000000h
        push eax
        mov dword ptr [esp + 44h], esi
        ; Exact mapped bytes FF 15 C4 50 17 10: call dword ptr [0x101750c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ebx, eax
        cmp ebx, -1
        ; Exact mapped bytes 0F 84 32 02 00 00: je 0x100164e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 3ch]
        cmp eax, ebp
        ; Exact mapped bytes 75 18: jne 0x100162d4
        __asm _emit 0x75
        __asm _emit 0x18
        cmp dword ptr [esi + 2ch], ebp
        ; Exact mapped bytes 75 1B: jne 0x100162dc
        __asm _emit 0x75
        __asm _emit 0x1b
        push ebx
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 14 FE FF FF: call 0x100160f0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 2ch]
        mov dword ptr [esp + 14h], ebp
        push ecx
        push ebx
        mov dword ptr [esp + 24h], ebp
        mov dword ptr [esp + 3ch], ebp
        ; Exact mapped bytes FF 15 BC 50 17 10: call dword ptr [0x101750bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        cmp eax, 0ch
        ; Exact mapped bytes 77 13: ja 0x1001630c
        __asm _emit 0x77
        __asm _emit 0x13
        push ebx
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        lea esi, [eax - 0ch]
        push esi
        ; Exact mapped bytes E8 8B 64 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x64
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        lea edx, [esp + 10h]
        mov edi, eax
        lea eax, [esp + 24h]
        push ebp
        ; Exact mapped bytes 8B 2D B8 50 17 10: mov ebp, dword ptr [0x101750b8]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push edx
        push 4
        push eax
        push ebx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [esp + 10h]
        push 0
        push ecx
        lea edx, [esp + 28h]
        push 4
        push edx
        push ebx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea eax, [esp + 10h]
        push 0
        push eax
        lea ecx, [esp + 20h]
        push 4
        push ecx
        push ebx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea edx, [esp + 10h]
        push 0
        push edx
        push esi
        push edi
        push ebx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        push ebx
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 20h]
        mov edx, ecx
        xor eax, 390a4f16h
        and edx, 0fafah
        sub eax, edx
        mov edx, dword ptr [esp + 24h]
        mov ebx, edx
        and ebx, 0adadh
        sub eax, ebx
        test esi, esi
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 76 27: jbe 0x100163b9
        __asm _emit 0x76
        __asm _emit 0x27
        mov ecx, 3
        xor ebx, ebx
        mov ebp, dword ptr [esp + 34h]
        mov bl, byte ptr [edi + ecx - 3]
        add ebx, 7
        imul ebx, ecx
        add ebp, ebx
        inc ecx
        mov dword ptr [esp + 34h], ebp
        lea ebx, [ecx - 3]
        cmp ebx, esi
        ; Exact mapped bytes 72 E2: jb 0x10016397
        __asm _emit 0x72
        __asm _emit 0xe2
        mov ecx, dword ptr [esp + 18h]
        cmp eax, dword ptr [esp + 34h]
        ; Exact mapped bytes 0F 85 1A 01 00 00: jne 0x100164dd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ecx
        mov byte ptr [esp + 3eh], cl
        shr eax, 18h
        mov byte ptr [esp + 3ch], al
        mov eax, ecx
        shr ecx, 8
        mov byte ptr [esp + 3fh], cl
        mov ecx, edx
        shr eax, 10h
        shr ecx, 10h
        mov byte ptr [esp + 3dh], al
        mov byte ptr [esp + 34h], cl
        mov eax, edx
        mov ecx, edx
        shr eax, 18h
        shr ecx, 8
        mov byte ptr [esp + 35h], al
        mov byte ptr [esp + 36h], cl
        xor ecx, ecx
        xor eax, eax
        test esi, esi
        mov byte ptr [esp + 37h], dl
        ; Exact mapped bytes 76 26: jbe 0x1001642d
        __asm _emit 0x76
        __asm _emit 0x26
        add ecx, eax
        cmp ecx, esi
        ; Exact mapped bytes 73 20: jae 0x1001642d
        __asm _emit 0x73
        __asm _emit 0x20
        mov edx, eax
        and edx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x1001641c
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffch
        inc edx
        mov dl, byte ptr [esp + edx + 34h]
        mov bl, byte ptr [ecx + edi]
        xor bl, dl
        inc eax
        cmp eax, esi
        mov byte ptr [ecx + edi], bl
        ; Exact mapped bytes 72 DA: jb 0x10016407
        __asm _emit 0x72
        __asm _emit 0xda
        xor eax, eax
        test esi, esi
        ; Exact mapped bytes 76 61: jbe 0x10016494
        __asm _emit 0x76
        __asm _emit 0x61
        mov ecx, eax
        and ecx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x10016442
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffffch
        inc ecx
        mov dl, byte ptr [esp + ecx + 3ch]
        mov bl, byte ptr [eax + edi]
        xor bl, dl
        mov byte ptr [eax + edi], bl
        inc eax
        cmp eax, esi
        ; Exact mapped bytes 72 E0: jb 0x10016433
        __asm _emit 0x72
        __asm _emit 0xe0
        test esi, esi
        ; Exact mapped bytes 76 3D: jbe 0x10016494
        __asm _emit 0x76
        __asm _emit 0x3d
        mov ecx, 0dh
        xor ebx, ebx
        lea eax, [ecx - 0ch]
        mov bl, byte ptr [edi + ecx - 0dh]
        mov ebp, dword ptr [esp + 14h]
        imul eax, ebx
        add ebp, eax
        mov eax, ecx
        imul eax, ecx
        mov dword ptr [esp + 14h], ebp
        mov ebp, 7bh
        cdq
        idiv ebp
        imul edx, ebx
        mov ebx, dword ptr [esp + 1ch]
        add ebx, edx
        inc ecx
        mov dword ptr [esp + 1ch], ebx
        lea edx, [ecx - 0dh]
        cmp edx, esi
        ; Exact mapped bytes 72 C8: jb 0x1001645c
        __asm _emit 0x72
        __asm _emit 0xc8
        mov ecx, dword ptr [esp + 28h]
        mov ebx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 18h]
        mov eax, dword ptr [ecx + 24h]
        xor eax, ebx
        cmp eax, edx
        ; Exact mapped bytes 75 34: jne 0x100164dd
        __asm _emit 0x75
        __asm _emit 0x34
        mov edx, dword ptr [ecx + 28h]
        mov ebx, dword ptr [esp + 1ch]
        mov eax, dword ptr [esp + 24h]
        xor edx, ebx
        cmp edx, eax
        ; Exact mapped bytes 75 23: jne 0x100164dd
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [eax], esi
        mov eax, dword ptr [esp + 40h]
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x100164d1
        __asm _emit 0x75
        __asm _emit 0x09
        push 0
        push esi
        push edi
        ; Exact mapped bytes E8 8F 02 00 00: call 0x10016760
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 A1 62 15 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x62
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
