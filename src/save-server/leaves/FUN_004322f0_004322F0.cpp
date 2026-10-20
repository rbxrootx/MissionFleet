// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004322F0 .. +0x14C bytes.
extern "C" __declspec(naked) void FUN_004322f0_004322F0() {
    __asm {
        push -1
        push 58ba03h
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
        push edi
        mov edi, ecx
        xor ebx, ebx
        mov dword ptr [esp + 8], edi
        mov dword ptr [edi], ebx
        mov dword ptr [edi + 4], ebx
        mov dword ptr [edi + 8], ebx
        mov eax, dword ptr [esp + 20h]
        mov dword ptr [esp + 14h], ebx
        cmp eax, 7fffffffh
        ; Exact mapped bytes 0F 87 EF 00 00 00: ja 0x43241a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ebx
        ; Exact mapped bytes 0F 86 E7 00 00 00: jbe 0x43241a
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        lea ebp, [eax + eax]
        cmp ebp, 80h
        ; Exact mapped bytes 76 29: jbe 0x432368
        __asm _emit 0x76
        __asm _emit 0x29
        push ebp
        ; Exact mapped bytes E8 1B A1 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xa1
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add ebp, eax
        mov dword ptr [edi], eax
        mov dword ptr [edi + 4], eax
        mov dword ptr [edi + 8], ebp
        mov eax, edi
        pop ebp
        pop edi
        pop ebx
        mov ecx, dword ptr [esp + 4]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        lea eax, [ebp - 1]
        push esi
        shr eax, 3
        push 685094h
        lea esi, [eax*4 + 685054h]
        ; Exact mapped bytes E8 80 02 00 00: call 0x432600
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov byte ptr [esp + 1ch], 1
        mov eax, dword ptr [esi]
        cmp eax, ebx
        ; Exact mapped bytes 74 06: je 0x432394
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [eax]
        mov dword ptr [esi], ecx
        ; Exact mapped bytes EB 5F: jmp 0x4323f3
        __asm _emit 0xeb
        __asm _emit 0x5f
        lea esi, [ebp + 7]
        lea edx, [esp + 28h]
        and esi, 0fffffff8h
        push edx
        push esi
        mov dword ptr [esp + 30h], 14h
        ; Exact mapped bytes E8 B3 34 00 00: call 0x435860
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 30h]
        add esp, 8
        cmp ebx, 1
        ; Exact mapped bytes 74 38: je 0x4323f1
        __asm _emit 0x74
        __asm _emit 0x38
        lea edx, [esi - 1]
        lea ecx, [eax + esi]
        shr edx, 3
        mov dword ptr [edx*4 + 685054h], ecx
        mov edx, ecx
        add ecx, esi
        mov edi, 1
        dec ebx
        cmp ebx, edi
        ; Exact mapped bytes 74 10: je 0x4323e7
        __asm _emit 0x74
        __asm _emit 0x10
        mov dword ptr [edx], ecx
        mov ebx, dword ptr [esp + 28h]
        mov edx, ecx
        inc edi
        add ecx, esi
        dec ebx
        cmp ebx, edi
        ; Exact mapped bytes 75 F0: jne 0x4323d7
        __asm _emit 0x75
        __asm _emit 0xf0
        mov edi, dword ptr [esp + 10h]
        mov dword ptr [edx], 0
        xor ebx, ebx
        ; Exact mapped bytes 89 1D 94 50 68 00: mov dword ptr [0x685094], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        add ebp, eax
        pop esi
        mov dword ptr [edi], eax
        mov dword ptr [edi + 4], eax
        mov dword ptr [edi + 8], ebp
        mov eax, edi
        pop ebp
        pop edi
        pop ebx
        mov ecx, dword ptr [esp + 4]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 670a18h
        ; Exact mapped bytes E8 DC 3B 00 00: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        add esp, 4
        mov eax, edi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
