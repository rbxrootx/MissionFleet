// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C3DF0 .. +0x160 bytes.
extern "C" __declspec(naked) void FUN_587c3df0() {
    __asm {
        sub esp, 7ch
        push ebx
        mov ebx, dword ptr [esp + 84h]
        push ebp
        mov ebp, ecx
        test ebx, ebx
        ; Exact mapped bytes 0F 84 42 01 00 00: je 0x587c3f48
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 90h]
        push 4
        push eax
        ; Exact mapped bytes FF 15 0C C1 98 58: call dword ptr [0x5898c10c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 2A 01 00 00: jne 0x587c3f48
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 8ch]
        push esi
        push edi
        push ecx
        lea edx, [esp + 14h]
        push edx
        mov ecx, ebx
        ; Exact mapped bytes E8 8C 5C 14 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x00
        mov esi, eax
        mov eax, 12h
        lea edi, [ebp + 1d38h]
        mov ecx, 1fh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [ebp + 1d30h], eax
        mov dword ptr [ebp + 1d34h], eax
        mov eax, dword ptr [ebp + 1d74h]
        imul eax, dword ptr [ebp + 1d70h]
        xor ecx, ecx
        mov edx, 14h
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 B7 D6 1A 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xd6
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 98h]
        mov dword ptr [ebp + 1db4h], eax
        mov eax, dword ptr [ebp + 1d74h]
        imul eax, dword ptr [ebp + 1d70h]
        lea eax, [eax + eax*4]
        add eax, eax
        add esp, 4
        add eax, eax
        push eax
        push ecx
        mov ecx, ebx
        ; Exact mapped bytes E8 6C 5C 14 00: call 0x58909b10
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 1db4h]
        push eax
        push edx
        ; Exact mapped bytes E8 9B 8E 1B 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x8e
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1d74h]
        imul eax, dword ptr [ebp + 1d70h]
        add esp, 0ch
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 7E 7F: jle 0x587c3f46
        __asm _emit 0x7e
        __asm _emit 0x7f
        xor ecx, ecx
        or ebx, 0ffffffffh
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1db4h]
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x587c3f20
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ecx + eax]
        cmp edx, ebx
        ; Exact mapped bytes 74 3F: je 0x587c3f20
        __asm _emit 0x74
        __asm _emit 0x3f
        mov esi, dword ptr [esp + 98h]
        test esi, esi
        ; Exact mapped bytes 74 34: je 0x587c3f20
        __asm _emit 0x74
        __asm _emit 0x34
        mov dword ptr [ecx + eax + 10h], edx
        mov edx, dword ptr [ebp + 1db4h]
        mov eax, dword ptr [edx + ecx]
        add edx, ecx
        cmp dword ptr [esi + 160h], eax
        ; Exact mapped bytes 7E 17: jle 0x587c3f1a
        __asm _emit 0x7e
        __asm _emit 0x17
        test eax, eax
        ; Exact mapped bytes 7C 13: jl 0x587c3f1a
        __asm _emit 0x7c
        __asm _emit 0x13
        mov esi, dword ptr [esi + 190h]
        test esi, esi
        ; Exact mapped bytes 74 09: je 0x587c3f1a
        __asm _emit 0x74
        __asm _emit 0x09
        shl eax, 6
        add eax, esi
        mov dword ptr [edx], eax
        ; Exact mapped bytes EB 17: jmp 0x587c3f31
        __asm _emit 0xeb
        __asm _emit 0x17
        xor eax, eax
        mov dword ptr [edx], eax
        ; Exact mapped bytes EB 11: jmp 0x587c3f31
        __asm _emit 0xeb
        __asm _emit 0x11
        mov dword ptr [ecx + eax + 10h], ebx
        mov eax, dword ptr [ebp + 1db4h]
        mov dword ptr [ecx + eax], 0
        mov edx, dword ptr [ebp + 1d74h]
        imul edx, dword ptr [ebp + 1d70h]
        inc edi
        add ecx, 14h
        cmp edi, edx
        ; Exact mapped bytes 7C 8A: jl 0x587c3ed0
        __asm _emit 0x7c
        __asm _emit 0x8a
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 7ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
