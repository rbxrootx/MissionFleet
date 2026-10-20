// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435860 .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_00435860_00435860() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        mov ebp, dword ptr [esp + 10h]
        ; Exact mapped bytes 8B 15 A0 50 68 00: mov edx, dword ptr [0x6850a0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 50 68 00: mov eax, dword ptr [0x6850a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        sub edx, eax
        imul ecx, ebx
        push esi
        cmp edx, ecx
        push edi
        ; Exact mapped bytes 0F 83 AD 00 00 00: jae 0x435934
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 9C 50 68 00: mov esi, dword ptr [0x68509c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x9c
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        cmp edx, ebx
        ; Exact mapped bytes 0F 83 C9 00 00 00: jae 0x43595e
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shr esi, 4
        add esi, 7
        and esi, 0fffffff8h
        test edx, edx
        lea edi, [esi + ecx*2]
        ; Exact mapped bytes 76 16: jbe 0x4358bb
        __asm _emit 0x76
        __asm _emit 0x16
        dec edx
        shr edx, 3
        lea ecx, [edx*4 + 685054h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        ; Exact mapped bytes A1 A4 50 68 00: mov eax, dword ptr [0x6850a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ecx], eax
        push edi
        ; Exact mapped bytes E8 9F 6B 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x6b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes A3 A4 50 68 00: mov dword ptr [0x6850a4], eax
        __asm _emit 0xa3
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 40: jne 0x43590d
        __asm _emit 0x75
        __asm _emit 0x40
        cmp ebx, 80h
        mov ecx, ebx
        ; Exact mapped bytes 77 1E: ja 0x4358f5
        __asm _emit 0x77
        __asm _emit 0x1e
        lea edx, [ecx - 1]
        shr edx, 3
        lea edx, [edx*4 + 685054h]
        mov eax, dword ptr [edx]
        test eax, eax
        ; Exact mapped bytes 75 5A: jne 0x435944
        __asm _emit 0x75
        __asm _emit 0x5a
        add ecx, 8
        cmp ecx, 80h
        ; Exact mapped bytes 76 E2: jbe 0x4358d7
        __asm _emit 0x76
        __asm _emit 0xe2
        push edi
        ; Exact mapped bytes C7 05 A0 50 68 00 00 00 00 00: mov dword ptr [0x6850a0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5B 6B 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x6b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes A3 A4 50 68 00: mov dword ptr [0x6850a4], eax
        __asm _emit 0xa3
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 9C 50 68 00: mov esi, dword ptr [0x68509c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x9c
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [eax + edi]
        add esi, edi
        ; Exact mapped bytes 89 15 A0 50 68 00: mov dword ptr [0x6850a0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 35 9C 50 68 00: mov dword ptr [0x68509c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x9c
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        sub edx, eax
        imul ecx, ebx
        cmp edx, ecx
        ; Exact mapped bytes 0F 82 59 FF FF FF: jb 0x43588d
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, eax
        add eax, ecx
        pop edi
        pop esi
        ; Exact mapped bytes A3 A4 50 68 00: mov dword ptr [0x6850a4], eax
        __asm _emit 0xa3
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        pop ebp
        mov eax, edx
        pop ebx
        ret
        mov esi, dword ptr [eax]
        mov dword ptr [edx], esi
        ; Exact mapped bytes 8B 35 9C 50 68 00: mov esi, dword ptr [0x68509c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x9c
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [eax + ecx]
        ; Exact mapped bytes A3 A4 50 68 00: mov dword ptr [0x6850a4], eax
        __asm _emit 0xa3
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 A0 50 68 00: mov dword ptr [0x6850a0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB C6: jmp 0x435924
        __asm _emit 0xeb
        __asm _emit 0xc6
        mov eax, edx
        xor edx, edx
        div ebx
        pop edi
        pop esi
        mov dword ptr [ebp], eax
        ; Exact mapped bytes 8B 0D A4 50 68 00: mov ecx, dword ptr [0x6850a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        imul eax, ebx
        mov edx, ecx
        add ecx, eax
        pop ebp
        ; Exact mapped bytes 89 0D A4 50 68 00: mov dword ptr [0x6850a4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, edx
        pop ebx
        ret
    }
}
