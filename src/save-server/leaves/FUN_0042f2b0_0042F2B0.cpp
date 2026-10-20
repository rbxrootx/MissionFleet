// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F2B0 .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_0042f2b0_0042F2B0() {
    __asm {
        push -1
        push 58b980h
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
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ecx, ecx
        push edi
        mov dword ptr [esi], ecx
        mov dword ptr [esi + 4], ecx
        mov dword ptr [esp + 14h], esi
        mov dword ptr [esi + 8], ecx
        mov eax, dword ptr [esp + 2ch]
        mov ebp, dword ptr [esp + 28h]
        mov dword ptr [esp + 20h], ecx
        lea ebx, [ebp + eax*2]
        mov edi, ebx
        mov dword ptr [esp + 10h], ebx
        sub edi, ebp
        mov eax, edi
        sar eax, 1
        inc eax
        cmp eax, 7fffffffh
        ; Exact mapped bytes 0F 87 8E 00 00 00: ja 0x42f392
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ecx
        ; Exact mapped bytes 0F 86 86 00 00 00: jbe 0x42f392
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [eax + eax]
        cmp ebx, 80h
        ; Exact mapped bytes 76 19: jbe 0x42f330
        __asm _emit 0x76
        __asm _emit 0x19
        push ebx
        ; Exact mapped bytes E8 43 D1 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xd1
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add ebx, eax
        mov dword ptr [esi + 8], ebx
        mov ebx, dword ptr [esp + 10h]
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes EB 6F: jmp 0x42f39f
        __asm _emit 0xeb
        __asm _emit 0x6f
        lea ecx, [ebx - 1]
        shr ecx, 3
        lea ebp, [ecx*4 + 685054h]
        mov ecx, 685094h
        mov dword ptr [esp + 2ch], ebp
        ; Exact mapped bytes E8 D5 0C 00 00: call 0x430020
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esp + 20h], 1
        mov ebp, dword ptr [ebp]
        test ebp, ebp
        ; Exact mapped bytes 74 0B: je 0x42f362
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [esp + 2ch]
        mov edx, dword ptr [ebp]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 0B: jmp 0x42f36d
        __asm _emit 0xeb
        __asm _emit 0x0b
        push ebx
        ; Exact mapped bytes E8 18 56 00 00: call 0x434980
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ebp, eax
        mov ecx, 685094h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 94 0D 00 00: call 0x430110
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebp
        mov ebp, dword ptr [esp + 28h]
        add ebx, eax
        mov dword ptr [esi], eax
        mov dword ptr [esi + 8], ebx
        mov ebx, dword ptr [esp + 10h]
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes EB 0D: jmp 0x42f39f
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 64 6C 00 00: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [esi]
        cmp ebx, ebp
        ; Exact mapped bytes 74 0D: je 0x42f3b2
        __asm _emit 0x74
        __asm _emit 0x0d
        push edi
        push ebp
        push eax
        ; Exact mapped bytes E8 B3 68 03 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        add eax, edi
        mov ecx, dword ptr [esp + 18h]
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
        add esp, 14h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
