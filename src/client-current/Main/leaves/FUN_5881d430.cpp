// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881D430 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_5881d430() {
    __asm {
        push -1
        push 58987f48h
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
        mov dword ptr [edi], 5899d9e0h
        mov ecx, dword ptr [edi + 60h]
        xor ebp, ebp
        mov dword ptr [esp + 20h], ebp
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x5881d479
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 60h], ebp
        lea esi, [edi + 64h]
        mov ebx, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x5881d491
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
        ; Exact mapped bytes 75 E8: jne 0x5881d481
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [edi + 6ch]
        mov ebx, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x5881d4b1
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
        ; Exact mapped bytes 75 E8: jne 0x5881d4a1
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, dword ptr [edi + 74h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x5881d4cb
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 74h], ebp
        mov ecx, dword ptr [edi + 78h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x5881d4dd
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 78h], ebp
        mov ecx, edi
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 24 57 0E 00: call 0x58902c10
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x57
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
