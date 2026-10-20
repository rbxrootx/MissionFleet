// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004345DF .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_004345df_004345DF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        push esi
        mov esi, ecx
        test ebx, ebx
        ; Exact mapped bytes 75 07: jne 0x4345f6
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F2 00 00 00: jmp 0x4346e8
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 24h]
        push edi
        mov edi, dword ptr [esi + 28h]
        sub edi, eax
        cmp ebx, edi
        ; Exact mapped bytes 73 02: jae 0x434605
        __asm _emit 0x73
        __asm _emit 0x02
        mov edi, ebx
        push edi
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B1 A5 FE FF: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        add dword ptr [esi + 24h], edi
        add dword ptr [ebp + 8], edi
        add esp, 0ch
        sub ebx, edi
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x4346e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebx
        xor edx, edx
        div dword ptr [esi + 1ch]
        mov edi, ebx
        sub edi, edx
        and dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], edi
        mov ecx, dword ptr [esi + 20h]
        push dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 34: call dword ptr [eax + 0x34]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x34
        add dword ptr [ebp + 8], eax
        add dword ptr [ebp - 8], eax
        sub dword ptr [ebp - 4], eax
        test eax, eax
        ; Exact mapped bytes 76 06: jbe 0x434653
        __asm _emit 0x76
        __asm _emit 0x06
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 77 DF: ja 0x434632
        __asm _emit 0x77
        __asm _emit 0xdf
        sub ebx, dword ptr [ebp - 8]
        cmp dword ptr [ebp - 8], edi
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x4346e2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        cmp dword ptr [esi + 8], edi
        ; Exact mapped bytes 75 45: jne 0x4346ab
        __asm _emit 0x75
        __asm _emit 0x45
        mov eax, dword ptr [esi + 1ch]
        mov dword ptr [ebp - 4], ebx
        cmp ebx, eax
        ; Exact mapped bytes 77 03: ja 0x434673
        __asm _emit 0x77
        __asm _emit 0x03
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [esi + 2ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [esi + 20h]
        push dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        push dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 34: call dword ptr [eax + 0x34]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x34
        add dword ptr [ebp - 8], eax
        sub dword ptr [ebp - 4], eax
        add edi, eax
        test eax, eax
        ; Exact mapped bytes 76 0A: jbe 0x43469d
        __asm _emit 0x76
        __asm _emit 0x0a
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 76 04: jbe 0x43469d
        __asm _emit 0x76
        __asm _emit 0x04
        cmp edi, ebx
        ; Exact mapped bytes 72 DC: jb 0x434679
        __asm _emit 0x72
        __asm _emit 0xdc
        mov eax, dword ptr [esi + 2ch]
        mov dword ptr [esi + 24h], eax
        lea ecx, [eax + edi]
        mov dword ptr [esi + 28h], ecx
        ; Exact mapped bytes EB 1A: jmp 0x4346c5
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [esi + 20h]
        lea eax, [esi + 28h]
        lea edi, [esi + 2ch]
        push eax
        mov edx, dword ptr [ecx]
        push edi
        push dword ptr [esi + 1ch]
        push 0
        ; Exact mapped bytes FF 52 50: call dword ptr [edx + 0x50]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x50
        mov eax, dword ptr [edi]
        mov dword ptr [esi + 24h], eax
        mov edi, dword ptr [esi + 28h]
        sub edi, eax
        cmp ebx, edi
        ; Exact mapped bytes 73 02: jae 0x4346d0
        __asm _emit 0x73
        __asm _emit 0x02
        mov edi, ebx
        push edi
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E6 A4 FE FF: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        add dword ptr [esi + 24h], edi
        add esp, 0ch
        sub ebx, edi
        mov eax, dword ptr [ebp + 0ch]
        pop edi
        sub eax, ebx
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
