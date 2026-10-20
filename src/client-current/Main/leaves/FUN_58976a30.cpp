// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58976A30 .. +0xFC bytes.
extern "C" __declspec(naked) void FUN_58976a30() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        mov ebp, dword ptr [esp + 10h]
        push esi
        mov esi, dword ptr [ebx + 4]
        test ebp, ebp
        push edi
        ; Exact mapped bytes 7C 05: jl 0x58976a48
        __asm _emit 0x7c
        __asm _emit 0x05
        cmp ebp, 2
        ; Exact mapped bytes 7C 16: jl 0x58976a5e
        __asm _emit 0x7c
        __asm _emit 0x16
        mov eax, dword ptr [ebx]
        push ebx
        mov dword ptr [eax + 14h], 0eh
        mov ecx, dword ptr [ebx]
        mov dword ptr [ecx + 18h], ebp
        mov edx, dword ptr [ebx]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        add esp, 4
        cmp ebp, 1
        ; Exact mapped bytes 75 56: jne 0x58976ab9
        __asm _emit 0x75
        __asm _emit 0x56
        mov edi, dword ptr [esi + 44h]
        test edi, edi
        ; Exact mapped bytes 74 1D: je 0x58976a87
        __asm _emit 0x74
        __asm _emit 0x1d
        mov al, byte ptr [edi + 22h]
        test al, al
        ; Exact mapped bytes 74 0F: je 0x58976a80
        __asm _emit 0x74
        __asm _emit 0x0f
        lea eax, [edi + 28h]
        mov byte ptr [edi + 22h], 0
        push eax
        push ebx
        ; Exact mapped bytes FF 57 30: call dword ptr [edi + 0x30]
        __asm _emit 0xff
        __asm _emit 0x57
        __asm _emit 0x30
        add esp, 8
        mov edi, dword ptr [edi + 24h]
        test edi, edi
        ; Exact mapped bytes 75 E3: jne 0x58976a6a
        __asm _emit 0x75
        __asm _emit 0xe3
        mov edi, dword ptr [esi + 48h]
        mov dword ptr [esi + 44h], 0
        test edi, edi
        ; Exact mapped bytes 74 1D: je 0x58976ab2
        __asm _emit 0x74
        __asm _emit 0x1d
        mov al, byte ptr [edi + 22h]
        test al, al
        ; Exact mapped bytes 74 0F: je 0x58976aab
        __asm _emit 0x74
        __asm _emit 0x0f
        lea ecx, [edi + 28h]
        mov byte ptr [edi + 22h], 0
        push ecx
        push ebx
        ; Exact mapped bytes FF 57 30: call dword ptr [edi + 0x30]
        __asm _emit 0xff
        __asm _emit 0x57
        __asm _emit 0x30
        add esp, 8
        mov edi, dword ptr [edi + 24h]
        test edi, edi
        ; Exact mapped bytes 75 E3: jne 0x58976a95
        __asm _emit 0x75
        __asm _emit 0xe3
        mov dword ptr [esi + 48h], 0
        mov eax, dword ptr [esi + ebp*4 + 3ch]
        mov dword ptr [esi + ebp*4 + 3ch], 0
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x58976af2
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [eax + 8]
        mov ecx, dword ptr [eax + 4]
        mov edi, dword ptr [eax]
        lea ebp, [edx + ecx + 10h]
        push ebp
        push eax
        push ebx
        ; Exact mapped bytes E8 83 0B 00 00: call 0x58977660
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4ch]
        add esp, 0ch
        sub edx, ebp
        mov eax, edi
        test edi, edi
        mov dword ptr [esi + 4ch], edx
        ; Exact mapped bytes 75 DB: jne 0x58976ac9
        __asm _emit 0x75
        __asm _emit 0xdb
        mov ebp, dword ptr [esp + 18h]
        mov eax, dword ptr [esi + ebp*4 + 34h]
        mov dword ptr [esi + ebp*4 + 34h], 0
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x58976b27
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [eax + 8]
        mov ecx, dword ptr [eax + 4]
        mov edi, dword ptr [eax]
        lea ebp, [edx + ecx + 10h]
        push ebp
        push eax
        push ebx
        ; Exact mapped bytes E8 4A 0B 00 00: call 0x58977660
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4ch]
        add esp, 0ch
        sub edx, ebp
        mov eax, edi
        test edi, edi
        mov dword ptr [esi + 4ch], edx
        ; Exact mapped bytes 75 DB: jne 0x58976b02
        __asm _emit 0x75
        __asm _emit 0xdb
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
