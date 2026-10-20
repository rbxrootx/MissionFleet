// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881D910 .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_5881d910() {
    __asm {
        push -1
        push 58983678h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ecx
        mov dword ptr [esp + 14h], edi
        mov dword ptr [edi], 5899da10h
        xor ebx, ebx
        mov dword ptr [esp + 20h], ebx
        lea esi, [edi + 64h]
        lea ebp, [ebx + 3]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5881d962
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 10h], ebx
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x5881d972
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], ebx
        add esi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 D6: jne 0x5881d950
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [edi + 0d8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5881d992
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 0d8h], ebx
        mov ecx, dword ptr [edi + 0dch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5881d9aa
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 0dch], ebx
        mov ecx, dword ptr [edi + 50h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5881d9bc
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 50h], ebx
        mov eax, dword ptr [edi + 12d4h]
        cmp eax, ebx
        ; Exact mapped bytes 74 0F: je 0x5881d9d5
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 5A F4 15 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf4
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [edi + 12d4h], ebx
        mov ecx, edi
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 FC 59 0E 00: call 0x589033e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x59
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
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
        pop ebp
        pop ebx
        add esp, 10h
        ret
    }
}
