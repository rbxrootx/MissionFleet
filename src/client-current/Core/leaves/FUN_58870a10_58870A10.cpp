// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58870A10 .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_58870a10_58870A10() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, 1418h
        ; Exact mapped bytes E8 D1 10 FC FF: call 0x58831af0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov eax, ecx
        mov edx, dword ptr [ebp + 10h]
        and ecx, 3fh
        sar eax, 6
        imul ecx, ecx, 38h
        push ebx
        push esi
        mov eax, dword ptr [eax*4 + 589699b0h]
        mov esi, dword ptr [ebp + 8]
        push edi
        mov edi, esi
        mov eax, dword ptr [eax + ecx + 18h]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 1410h], eax
        add ecx, edx
        xor eax, eax
        mov dword ptr [ebp - 140ch], ecx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        mov edi, edx
        cmp edx, ecx
        ; Exact mapped bytes 0F 83 C4 00 00 00: jae 0x58870b31
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 140ch]
        lea eax, [ebp - 6b0h]
        cmp edi, esi
        ; Exact mapped bytes 73 21: jae 0x58870a9e
        __asm _emit 0x73
        __asm _emit 0x21
        movzx ecx, word ptr [edi]
        add edi, 2
        cmp ecx, 0ah
        ; Exact mapped bytes 75 09: jne 0x58870a91
        __asm _emit 0x75
        __asm _emit 0x09
        push 0dh
        pop edx
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        add eax, 2
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        add eax, 2
        lea ecx, [ebp - 8]
        cmp eax, ecx
        ; Exact mapped bytes 72 DB: jb 0x58870a79
        __asm _emit 0x72
        __asm _emit 0xdb
        push 0
        push 0
        push 0d55h
        lea ecx, [ebp - 1408h]
        push ecx
        lea ecx, [ebp - 6b0h]
        sub eax, ecx
        sar eax, 1
        push eax
        mov eax, ecx
        push eax
        push 0
        push 0fde9h
        ; Exact mapped bytes E8 21 F1 FF FF: call 0x5886fbe9
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 8]
        add esp, 20h
        mov dword ptr [ebp - 1418h], eax
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x58870b29
        __asm _emit 0x74
        __asm _emit 0x51
        xor ebx, ebx
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x58870b13
        __asm _emit 0x74
        __asm _emit 0x35
        push 0
        lea ecx, [ebp - 1414h]
        sub eax, ebx
        push ecx
        push eax
        lea eax, [ebp - 1408h]
        add eax, ebx
        push eax
        push dword ptr [ebp - 1410h]
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x58870b29
        __asm _emit 0x74
        __asm _emit 0x26
        add ebx, dword ptr [ebp - 1414h]
        mov eax, dword ptr [ebp - 1418h]
        cmp ebx, eax
        ; Exact mapped bytes 72 CB: jb 0x58870ade
        __asm _emit 0x72
        __asm _emit 0xcb
        mov eax, edi
        sub eax, dword ptr [ebp + 10h]
        mov dword ptr [esi + 4], eax
        cmp edi, dword ptr [ebp - 140ch]
        ; Exact mapped bytes 0F 82 46 FF FF FF: jb 0x58870a6d
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 08: jmp 0x58870b31
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [esi], eax
        mov ecx, dword ptr [ebp - 4]
        mov eax, esi
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 10 05 FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xff
        leave
        ret
    }
}
