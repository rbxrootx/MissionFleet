// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884A66D .. +0x2F2 bytes.
extern "C" __declspec(naked) void FUN_5884a66d_5884A66D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        xor edi, edi
        push 2
        cmp dword ptr [esi + 4], 3
        mov ecx, edi
        pop eax
        mov dword ptr [ebp - 4], ecx
        mov ebx, eax
        mov dword ptr [ebp - 8], edi
        ; Exact mapped bytes 7F 0C: jg 0x5884a699
        __asm _emit 0x7f
        __asm _emit 0x0c
        push esi
        ; Exact mapped bytes E8 CC 02 00 00: call 0x5884a95f
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes E9 BF 02 00 00: jmp 0x5884a958
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 6af90h], edi
        ; Exact mapped bytes 0F 84 8C 02 00 00: je 0x5884a931
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 6af90h], 3
        ; Exact mapped bytes 72 52: jb 0x5884a700
        __asm _emit 0x72
        __asm _emit 0x52
        mov edx, dword ptr [esi + 6af84h]
        mov eax, dword ptr [esi + 6af7ch]
        shl eax, 5
        movzx ecx, byte ptr [edx + esi + 1af72h]
        xor ecx, eax
        and ecx, 7fffh
        and edx, 7fffh
        mov dword ptr [esi + 6af7ch], ecx
        mov eax, dword ptr [esi + ecx*4 + 4af70h]
        mov dword ptr [esi + edx*4 + 2af70h], eax
        mov ecx, dword ptr [esi + 6af7ch]
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [esi + 6af84h]
        mov dword ptr [esi + ecx*4 + 4af70h], eax
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [esi + 6af88h]
        mov dword ptr [ebp + 8], eax
        mov dword ptr [esi + 6af80h], ebx
        push 2
        pop eax
        mov ebx, eax
        test ecx, ecx
        ; Exact mapped bytes 74 64: je 0x5884a77c
        __asm _emit 0x74
        __asm _emit 0x64
        mov eax, dword ptr [esi + 6af80h]
        cmp eax, dword ptr [esi + 6af98h]
        ; Exact mapped bytes 73 56: jae 0x5884a77c
        __asm _emit 0x73
        __asm _emit 0x56
        mov eax, dword ptr [esi + 6af84h]
        sub eax, ecx
        cmp eax, 7efah
        ; Exact mapped bytes 77 47: ja 0x5884a77c
        __asm _emit 0x77
        __asm _emit 0x47
        mov eax, dword ptr [esi + 6af90h]
        cmp dword ptr [esi + 6afa0h], eax
        ; Exact mapped bytes 76 06: jbe 0x5884a749
        __asm _emit 0x76
        __asm _emit 0x06
        mov dword ptr [esi + 6afa0h], eax
        push ecx
        push esi
        ; Exact mapped bytes E8 D1 0D 00 00: call 0x5884b521
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov ecx, dword ptr [esi + 6af90h]
        mov ebx, eax
        cmp ebx, ecx
        cmova ebx, ecx
        cmp ebx, 3
        ; Exact mapped bytes 75 18: jne 0x5884a77c
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 6af84h]
        sub ecx, dword ptr [esi + 6af88h]
        push 2
        cmp ecx, 1000h
        pop eax
        cmova ebx, eax
        mov edx, dword ptr [esi + 6af80h]
        cmp edx, 3
        ; Exact mapped bytes 0F 82 F9 00 00 00: jb 0x5884a884
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, edx
        ; Exact mapped bytes 0F 87 F1 00 00 00: ja 0x5884a884
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 6af90h]
        lea eax, [edx - 3]
        mov ecx, dword ptr [esi + 6af84h]
        add ebx, -3
        add ebx, ecx
        sub ecx, dword ptr [ebp + 8]
        push eax
        dec ecx
        push ecx
        push esi
        ; Exact mapped bytes E8 1D FD FF FF: call 0x5884a4d0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 6af80h]
        xor ecx, ecx
        inc ecx
        mov dword ptr [ebp + 8], eax
        sub ecx, edx
        add esp, 0ch
        add dword ptr [esi + 6af90h], ecx
        lea ecx, [edx - 2]
        mov dword ptr [esi + 6af80h], ecx
        inc dword ptr [esi + 6af84h]
        mov edx, dword ptr [esi + 6af84h]
        cmp edx, ebx
        ; Exact mapped bytes 77 49: ja 0x5884a82c
        __asm _emit 0x77
        __asm _emit 0x49
        mov eax, dword ptr [esi + 6af7ch]
        movzx ecx, byte ptr [edx + esi + 1af72h]
        shl eax, 5
        xor ecx, eax
        and ecx, 7fffh
        and edx, 7fffh
        mov dword ptr [esi + 6af7ch], ecx
        mov eax, dword ptr [esi + ecx*4 + 4af70h]
        mov dword ptr [esi + edx*4 + 2af70h], eax
        mov ecx, dword ptr [esi + 6af7ch]
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [esi + 6af84h]
        mov dword ptr [esi + ecx*4 + 4af70h], eax
        sub dword ptr [esi + 6af80h], 1
        ; Exact mapped bytes 75 9E: jne 0x5884a7d3
        __asm _emit 0x75
        __asm _emit 0x9e
        inc dword ptr [esi + 6af84h]
        mov ecx, dword ptr [esi + 6af84h]
        push 2
        pop eax
        mov ebx, eax
        mov dword ptr [ebp - 8], edi
        cmp dword ptr [ebp + 8], edi
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x5884a8f1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6af74h]
        test eax, eax
        ; Exact mapped bytes 78 0A: js 0x5884a866
        __asm _emit 0x78
        __asm _emit 0x0a
        lea edx, [esi + 1af70h]
        add edx, eax
        ; Exact mapped bytes EB 02: jmp 0x5884a868
        __asm _emit 0xeb
        __asm _emit 0x02
        mov edx, edi
        push edi
        sub ecx, eax
        push ecx
        push edx
        push esi
        ; Exact mapped bytes E8 39 05 00 00: call 0x5884adac
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6af84h]
        add esp, 10h
        mov dword ptr [esi + 6af74h], eax
        ; Exact mapped bytes EB 6D: jmp 0x5884a8f1
        __asm _emit 0xeb
        __asm _emit 0x6d
        cmp dword ptr [ebp - 8], edi
        ; Exact mapped bytes 74 55: je 0x5884a8de
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [esi + 6af84h]
        movzx eax, byte ptr [eax + esi + 1af6fh]
        push eax
        push edi
        push esi
        ; Exact mapped bytes E8 31 FC FF FF: call 0x5884a4d0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x5884a8e5
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [esi + 6af74h]
        test ecx, ecx
        ; Exact mapped bytes 78 0A: js 0x5884a8ba
        __asm _emit 0x78
        __asm _emit 0x0a
        lea edx, [esi + 1af70h]
        add edx, ecx
        ; Exact mapped bytes EB 02: jmp 0x5884a8bc
        __asm _emit 0xeb
        __asm _emit 0x02
        mov edx, edi
        mov eax, dword ptr [esi + 6af84h]
        push edi
        sub eax, ecx
        push eax
        push edx
        push esi
        ; Exact mapped bytes E8 DF 04 00 00: call 0x5884adac
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6af84h]
        add esp, 10h
        mov dword ptr [esi + 6af74h], eax
        ; Exact mapped bytes EB 07: jmp 0x5884a8e5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        inc dword ptr [esi + 6af84h]
        dec dword ptr [esi + 6af90h]
        cmp dword ptr [esi + 6af90h], 106h
        ; Exact mapped bytes 73 07: jae 0x5884a904
        __asm _emit 0x73
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes E8 5F 03 00 00: call 0x5884ac62
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [esi + 6af90h], edi
        ; Exact mapped bytes 0F 85 92 FD FF FF: jne 0x5884a6a5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], edi
        ; Exact mapped bytes 74 19: je 0x5884a931
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [esi + 6af84h]
        movzx eax, byte ptr [eax + esi + 1af6fh]
        push eax
        push edi
        push esi
        ; Exact mapped bytes E8 A2 FB FF FF: call 0x5884a4d0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [esi + 6af74h]
        test ecx, ecx
        ; Exact mapped bytes 78 08: js 0x5884a943
        __asm _emit 0x78
        __asm _emit 0x08
        lea edi, [esi + 1af70h]
        add edi, ecx
        mov eax, dword ptr [esi + 6af84h]
        push 1
        sub eax, ecx
        push eax
        push edi
        push esi
        ; Exact mapped bytes E8 57 04 00 00: call 0x5884adac
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
