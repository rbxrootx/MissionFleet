// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798C70 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_58798c70_58798C70() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5889173fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov eax, dword ptr [ebp + 8]
        mov byte ptr [esi + 8], al
        dec eax
        and dword ptr [esi + 8], 0fffffeffh
        mov dword ptr [esi + 0ch], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [esi + 10h], 0
        mov dword ptr [esi + 14h], 0
        cmp eax, 6
        ; Exact mapped bytes 77 72: ja 0x58798d3b
        __asm _emit 0x77
        __asm _emit 0x72
        ; Exact mapped bytes FF 24 85 50 8D 79 58: jmp dword ptr [eax*4 + 0x58798d50]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x8d
        __asm _emit 0x79
        __asm _emit 0x58
        mov dword ptr [esi], 0
        mov dword ptr [esi + 4], 0
        ; Exact mapped bytes EB 5C: jmp 0x58798d3b
        __asm _emit 0xeb
        __asm _emit 0x5c
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 11 06: movsd qword ptr [esi], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x06
        ; Exact mapped bytes EB 53: jmp 0x58798d3b
        __asm _emit 0xeb
        __asm _emit 0x53
        mov dword ptr [esi], 588b6dc3h
        ; Exact mapped bytes EB 4B: jmp 0x58798d3b
        __asm _emit 0xeb
        __asm _emit 0x4b
        push 8
        ; Exact mapped bytes E8 0D 83 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x83
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [ebp + 8], edi
        mov byte ptr [ebp - 4], 3
        test edi, edi
        ; Exact mapped bytes 74 2B: je 0x58798d32
        __asm _emit 0x74
        __asm _emit 0x2b
        push 30h
        mov dword ptr [edi], 0
        mov dword ptr [edi + 4], 0
        ; Exact mapped bytes E8 E9 82 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], eax
        mov dword ptr [eax + 4], eax
        mov dword ptr [eax + 8], eax
        ; Exact mapped bytes 66 C7 40 0C 01 01: mov word ptr [eax + 0xc], 0x101
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x01
        mov dword ptr [edi], eax
        mov dword ptr [esi], edi
        ; Exact mapped bytes EB 09: jmp 0x58798d3b
        __asm _emit 0xeb
        __asm _emit 0x09
        xor edi, edi
        mov dword ptr [esi], edi
        ; Exact mapped bytes EB 03: jmp 0x58798d3b
        __asm _emit 0xeb
        __asm _emit 0x03
        mov byte ptr [esi], 0
        mov eax, esi
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
