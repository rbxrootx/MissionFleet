// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E97C0 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_587e97c0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 20c9ch]
        ; Exact mapped bytes E8 A2 DD FB FF: call 0x587a7570
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xdd
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x587e9891
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        push ebx
        mov ebx, dword ptr [eax + 8]
        lea eax, [ecx - 1]
        cmp eax, 31feh
        ; Exact mapped bytes 0F 87 A5 00 00 00: ja 0x587e9890
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebx - 1]
        cmp edx, 18feh
        ; Exact mapped bytes 0F 87 96 00 00 00: ja 0x587e9890
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0fa000h
        cdq
        push edi
        mov edi, dword ptr [esi + 10524h]
        idiv dword ptr [edi + 114h]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        mov eax, 0bb800h
        cdq
        mov dword ptr [esi + 1052ch], ecx
        idiv dword ptr [edi + 114h]
        cdq
        sub eax, edx
        sar eax, 1
        sub ebx, eax
        mov dword ptr [esi + 10530h], ebx
        test ecx, ecx
        ; Exact mapped bytes 7D 0C: jge 0x587e9843
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [esi + 1052ch], 0
        ; Exact mapped bytes EB 1D: jmp 0x587e9860
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, 0fa000h
        cdq
        idiv dword ptr [edi + 114h]
        mov edx, 3200h
        sub edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7E 06: jle 0x587e9860
        __asm _emit 0x7e
        __asm _emit 0x06
        mov dword ptr [esi + 1052ch], edx
        test ebx, ebx
        ; Exact mapped bytes 7D 0E: jge 0x587e9872
        __asm _emit 0x7d
        __asm _emit 0x0e
        pop edi
        pop ebx
        mov dword ptr [esi + 10530h], 0
        pop esi
        ret
        mov eax, 0bb800h
        cdq
        idiv dword ptr [edi + 114h]
        mov ecx, 1900h
        sub ecx, eax
        cmp ebx, ecx
        ; Exact mapped bytes 7E 06: jle 0x587e988f
        __asm _emit 0x7e
        __asm _emit 0x06
        mov dword ptr [esi + 10530h], ecx
        pop edi
        pop ebx
        pop esi
        ret
    }
}
