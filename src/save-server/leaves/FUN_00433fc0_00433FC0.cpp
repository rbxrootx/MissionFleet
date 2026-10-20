// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433FC0 .. +0x1A2 bytes.
extern "C" __declspec(naked) void FUN_00433fc0_00433FC0() {
    __asm {
        push -1
        push 58bb08h
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
        mov eax, dword ptr [esp + 18h]
        push ebx
        dec eax
        push ebp
        ; Exact mapped bytes 8B 2D 28 BA 68 00: mov ebp, dword ptr [0x68ba28]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x28
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        push esi
        shr eax, 3
        push edi
        push 1
        lea ecx, [eax*4 + 685054h]
        push 685094h
        mov dword ptr [esp + 1ch], ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        test eax, eax
        ; Exact mapped bytes 0F 84 C4 00 00 00: je 0x4340ca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 28 0A 67 00: mov edi, dword ptr [0x670a28]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes A1 98 50 68 00: mov eax, dword ptr [0x685098]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [esp + 10h], 11h
        xor esi, esi
        test edi, edi
        ; Exact mapped bytes 76 61: jbe 0x434080
        __asm _emit 0x76
        __asm _emit 0x61
        mov ebx, eax
        shr ebx, 1
        cmp esi, ebx
        ; Exact mapped bytes 72 18: jb 0x43403f
        __asm _emit 0x72
        __asm _emit 0x18
        ; Exact mapped bytes A1 94 50 68 00: mov eax, dword ptr [0x685094]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x43403f
        __asm _emit 0x75
        __asm _emit 0x0f
        push 1
        push 685094h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        test eax, eax
        ; Exact mapped bytes 74 7D: je 0x4340ba
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes EB 3C: jmp 0x43407b
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 10h]
        imul edx, eax
        mov dword ptr [esp + 10h], edx
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 10h]
        imul ecx, edx
        mov dword ptr [esp + 10h], ecx
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 10h]
        imul eax, ecx
        mov dword ptr [esp + 10h], eax
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 10h]
        imul edx, eax
        mov dword ptr [esp + 10h], edx
        inc esi
        cmp esi, edi
        ; Exact mapped bytes 72 A3: jb 0x434023
        __asm _emit 0x72
        __asm _emit 0xa3
        ; Exact mapped bytes 8B 1D AC B7 68 00: mov ebx, dword ptr [0x68b7ac]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xac
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 28 0A 67 00 1E 00 00 00: mov dword ptr [0x670a28], 0x1e
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 6
        cmp edi, 1bh
        mov esi, edi
        ; Exact mapped bytes 7E 05: jle 0x4340a1
        __asm _emit 0x7e
        __asm _emit 0x05
        mov esi, 1bh
        push 1
        push 685094h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x4340ca
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp esi, 14h
        ; Exact mapped bytes 7F 2D: jg 0x4340e0
        __asm _emit 0x7f
        __asm _emit 0x2d
        push 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        inc edi
        ; Exact mapped bytes EB DB: jmp 0x434095
        __asm _emit 0xeb
        __asm _emit 0xdb
        ; Exact mapped bytes 89 35 98 50 68 00: mov dword ptr [0x685098], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 28 0A 67 00 E8 03 00 00: mov dword ptr [0x670a28], 0x3e8
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        xor ebp, ebp
        mov dword ptr [esp + 20h], ebp
        mov eax, dword ptr [ecx]
        cmp eax, ebp
        ; Exact mapped bytes 74 16: je 0x4340f0
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 69: jmp 0x434149
        __asm _emit 0xeb
        __asm _emit 0x69
        lea ecx, [esi - 14h]
        mov edx, 1
        shl edx, cl
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        inc edi
        ; Exact mapped bytes EB A5: jmp 0x434095
        __asm _emit 0xeb
        __asm _emit 0xa5
        mov eax, dword ptr [esp + 28h]
        lea ecx, [esp + 10h]
        push ecx
        mov dword ptr [esp + 14h], 14h
        lea esi, [eax + 7]
        and esi, 0fffffff8h
        push esi
        ; Exact mapped bytes E8 53 17 00 00: call 0x435860
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 18h]
        add esp, 8
        cmp ebx, 1
        ; Exact mapped bytes 74 30: je 0x434149
        __asm _emit 0x74
        __asm _emit 0x30
        lea edx, [esi - 1]
        lea ecx, [eax + esi]
        shr edx, 3
        mov dword ptr [edx*4 + 685054h], ecx
        mov edx, ecx
        add ecx, esi
        mov edi, 1
        dec ebx
        cmp ebx, edi
        ; Exact mapped bytes 74 10: je 0x434147
        __asm _emit 0x74
        __asm _emit 0x10
        mov dword ptr [edx], ecx
        mov ebx, dword ptr [esp + 10h]
        mov edx, ecx
        inc edi
        add ecx, esi
        dec ebx
        cmp ebx, edi
        ; Exact mapped bytes 75 F0: jne 0x434137
        __asm _emit 0x75
        __asm _emit 0xf0
        mov dword ptr [edx], ebp
        ; Exact mapped bytes 89 2D 94 50 68 00: mov dword ptr [0x685094], ebp
        __asm _emit 0x89
        __asm _emit 0x2d
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
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
        ret
    }
}
