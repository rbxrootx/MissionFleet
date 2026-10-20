// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883C756 .. +0xE7 bytes.
extern "C" __declspec(naked) void FUN_5883c756_5883C756() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        mov ebx, dword ptr [ebp + 8]
        test ebx, ebx
        ; Exact mapped bytes 75 07: jne 0x5883c769
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x5883c833
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebx], 1
        ; Exact mapped bytes 75 07: jne 0x5883c775
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, ebx
        ; Exact mapped bytes E9 BE 00 00 00: jmp 0x5883c833
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 1A 03 00 00: call 0x5883ca95
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        cmp dword ptr [esi + 18h], 0
        ; Exact mapped bytes 74 07: je 0x5883c78a
        __asm _emit 0x74
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes FF 15 20 42 89 58: call dword ptr [0x58894220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push edi
        push ebx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 800h
        push 0
        push 58968478h
        mov edi, eax
        ; Exact mapped bytes E8 6B 06 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        test edi, edi
        ; Exact mapped bytes 74 73: je 0x5883c81f
        __asm _emit 0x74
        __asm _emit 0x73
        movzx eax, bl
        ; Exact mapped bytes A2 79 84 96 58: mov byte ptr [0x58968479], al
        __asm _emit 0xa2
        __asm _emit 0x79
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        imul eax, eax, 3
        push 4
        ; Exact mapped bytes C6 05 78 84 96 58 01: mov byte ptr [0x58968478], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        lea ecx, [eax + 65h]
        inc eax
        imul edx, eax, 3
        mov dword ptr [ebp + 8], ecx
        pop ecx
        lea eax, [edx + 65h]
        inc edx
        mov dword ptr [ebp - 4], eax
        test edi, edi
        ; Exact mapped bytes 7E 28: jle 0x5883c7fe
        __asm _emit 0x7e
        __asm _emit 0x28
        sub ebx, 5896847ch
        imul edx, edx, 3
        lea eax, [edx + 65h]
        xor al, byte ptr [ebx + ecx + 58968478h]
        mov byte ptr [ecx + 58968478h], al
        inc ecx
        inc edx
        sub edi, 1
        ; Exact mapped bytes 75 E6: jne 0x5883c7dc
        __asm _emit 0x75
        __asm _emit 0xe6
        cmp ecx, 800h
        ; Exact mapped bytes 73 3A: jae 0x5883c838
        __asm _emit 0x73
        __asm _emit 0x3a
        mov byte ptr [ecx + 58968478h], 0
        add ecx, -4
        mov eax, ecx
        sar eax, 8
        xor al, byte ptr [ebp + 8]
        ; Exact mapped bytes A2 7A 84 96 58: mov byte ptr [0x5896847a], al
        __asm _emit 0xa2
        __asm _emit 0x7a
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        xor al, cl
        ; Exact mapped bytes A2 7B 84 96 58: mov byte ptr [0x5896847b], al
        __asm _emit 0xa2
        __asm _emit 0x7b
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        cmp dword ptr [esi + 18h], 0
        pop edi
        ; Exact mapped bytes 74 07: je 0x5883c82d
        __asm _emit 0x74
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes FF 15 1C 42 89 58: call dword ptr [0x5889421c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, 58968478h
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        ; Exact mapped bytes E8 6C 49 FF FF: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
