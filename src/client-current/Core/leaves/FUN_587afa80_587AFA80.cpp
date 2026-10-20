// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AFA80 .. +0xF0 bytes.
extern "C" __declspec(naked) void FUN_587afa80_587AFA80() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        mov esi, dword ptr [edi + 1ch]
        mov edx, dword ptr [esi + 38h]
        test edx, edx
        ; Exact mapped bytes 75 28: jne 0x587afab9
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [esi + 28h]
        mov eax, 1
        shl eax, cl
        push 1
        push eax
        push dword ptr [edi + 28h]
        mov eax, dword ptr [edi + 20h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov edx, eax
        add esp, 0ch
        mov dword ptr [esi + 38h], edx
        test edx, edx
        ; Exact mapped bytes 75 07: jne 0x587afab9
        __asm _emit 0x75
        __asm _emit 0x07
        pop edi
        pop esi
        lea eax, [edx + 1]
        pop ebx
        ret
        mov edi, dword ptr [esi + 2ch]
        test edi, edi
        ; Exact mapped bytes 75 1B: jne 0x587afadb
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [esi + 28h]
        mov edi, 1
        shl edi, cl
        mov dword ptr [esi + 2ch], edi
        mov dword ptr [esi + 34h], 0
        mov dword ptr [esi + 30h], 0
        mov ebx, dword ptr [esp + 18h]
        cmp ebx, edi
        ; Exact mapped bytes 72 24: jb 0x587afb07
        __asm _emit 0x72
        __asm _emit 0x24
        mov eax, dword ptr [esp + 14h]
        push edi
        sub eax, edi
        push eax
        push edx
        ; Exact mapped bytes E8 9F CD 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2ch]
        add esp, 0ch
        mov dword ptr [esi + 30h], eax
        xor eax, eax
        mov dword ptr [esi + 34h], 0
        pop edi
        pop esi
        pop ebx
        ret
        mov ecx, dword ptr [esi + 34h]
        sub edi, ecx
        push ebp
        mov ebp, dword ptr [esp + 18h]
        cmp edi, ebx
        mov eax, ebp
        cmova edi, ebx
        sub eax, ebx
        push edi
        push eax
        lea eax, [ecx + edx]
        push eax
        ; Exact mapped bytes E8 6B CD 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        sub ebx, edi
        ; Exact mapped bytes 74 1F: je 0x587afb4b
        __asm _emit 0x74
        __asm _emit 0x1f
        push ebx
        sub ebp, ebx
        push ebp
        push dword ptr [esi + 38h]
        ; Exact mapped bytes E8 58 CD 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2ch]
        add esp, 0ch
        mov dword ptr [esi + 34h], ebx
        mov dword ptr [esi + 30h], eax
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
        add dword ptr [esi + 34h], edi
        mov ecx, dword ptr [esi + 2ch]
        cmp dword ptr [esi + 34h], ecx
        ; Exact mapped bytes 75 07: jne 0x587afb5d
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [esi + 34h], 0
        mov eax, dword ptr [esi + 30h]
        cmp eax, ecx
        ; Exact mapped bytes 73 05: jae 0x587afb69
        __asm _emit 0x73
        __asm _emit 0x05
        add eax, edi
        mov dword ptr [esi + 30h], eax
        pop ebp
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
    }
}
