// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883DF70 .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_5883df70() {
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
        mov dword ptr [edi], 5899e358h
        xor ebp, ebp
        mov dword ptr [esp + 20h], ebp
        lea esi, [edi + 54h]
        lea ebx, [ebp + 2]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x5883dfc0
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], ebp
        add esi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 E8: jne 0x5883dfb0
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [edi + 5ch]
        mov ebx, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x5883dfe0
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], ebp
        add esi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 E8: jne 0x5883dfd0
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, dword ptr [edi + 64h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x5883dffa
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 64h], ebp
        mov ecx, dword ptr [edi + 68h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x5883e00c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 68h], ebp
        mov ecx, dword ptr [edi + 6ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x5883e01e
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 6ch], ebp
        mov ecx, edi
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 B3 53 0C 00: call 0x589033e0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x53
        __asm _emit 0x0c
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
