// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431BF0 .. +0x111 bytes.
extern "C" __declspec(naked) void FUN_00431bf0_00431BF0() {
    __asm {
        push -1
        push 58b9d8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor ebp, ebp
        mov dword ptr [esp + 10h], ebp
        mov eax, dword ptr [edi + 4]
        mov esi, dword ptr [edi]
        sub eax, esi
        mov esi, dword ptr [esp + 28h]
        sar eax, 1
        cmp esi, eax
        ; Exact mapped bytes 76 0D: jbe 0x431c30
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 73 41 00 00: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [edi + 4]
        mov edx, dword ptr [esp + 2ch]
        sub eax, ecx
        sar eax, 1
        sub eax, esi
        mov dword ptr [esp + 28h], eax
        cmp eax, edx
        lea eax, [esp + 28h]
        ; Exact mapped bytes 72 04: jb 0x431c4f
        __asm _emit 0x72
        __asm _emit 0x04
        lea eax, [esp + 2ch]
        mov edx, dword ptr [eax]
        lea edi, [ecx + esi*2]
        add edx, esi
        mov esi, dword ptr [esp + 24h]
        mov dword ptr [esi], ebp
        mov dword ptr [esi + 4], ebp
        lea ebx, [ecx + edx*2]
        mov dword ptr [esi + 8], ebp
        mov eax, ebx
        mov dword ptr [esp + 1ch], ebp
        sub eax, edi
        sar eax, 1
        inc eax
        cmp eax, 7fffffffh
        ; Exact mapped bytes 77 38: ja 0x431caf
        __asm _emit 0x77
        __asm _emit 0x38
        cmp eax, ebp
        ; Exact mapped bytes 76 34: jbe 0x431caf
        __asm _emit 0x76
        __asm _emit 0x34
        lea ebp, [eax + eax]
        cmp ebp, 80h
        push ebp
        ; Exact mapped bytes 76 14: jbe 0x431c9b
        __asm _emit 0x76
        __asm _emit 0x14
        ; Exact mapped bytes E8 A5 F9 FC FF: call 0x401631
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xf9
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        add ebp, eax
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], ebp
        ; Exact mapped bytes EB 21: jmp 0x431cbc
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes E8 20 23 00 00: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        add ebp, eax
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], ebp
        ; Exact mapped bytes EB 0D: jmp 0x431cbc
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 47 43 00 00: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ebp, dword ptr [esi]
        push edi
        ; Exact mapped bytes E8 CC 3D 00 00: call 0x435a90
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        lea eax, [esp + 30h]
        push edi
        push eax
        ; Exact mapped bytes E8 1D 28 00 00: call 0x4344f0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        push eax
        push ebp
        push ebx
        push edi
        ; Exact mapped bytes E8 C1 3D 00 00: call 0x435aa0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 28h]
        add esp, 14h
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes 66 C7 00 00 00: mov word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
