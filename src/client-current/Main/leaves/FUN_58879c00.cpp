// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58879C00 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_58879c00() {
    __asm {
        push -1
        push 58986748h
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
        mov ebx, ecx
        mov dword ptr [esp + 14h], ebx
        mov dword ptr [ebx], 5899f0ech
        xor ebp, ebp
        cmp dword ptr [ebx + 84h], ebp
        mov dword ptr [esp + 20h], ebp
        ; Exact mapped bytes 7E 59: jle 0x58879c98
        __asm _emit 0x7e
        __asm _emit 0x59
        lea edi, [ebx + 0e4h]
        lea esi, [ebx + 108h]
        mov ecx, dword ptr [esi - 4]
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x58879c61
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi - 4], 0
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x58879c75
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], 0
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x58879c89
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi], 0
        inc ebp
        add edi, 4
        add esi, 8
        cmp ebp, dword ptr [ebx + 84h]
        ; Exact mapped bytes 7C B3: jl 0x58879c4b
        __asm _emit 0x7c
        __asm _emit 0xb3
        mov ecx, ebx
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 D9 4B EF FF: call 0x5876e880
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x4b
        __asm _emit 0xef
        __asm _emit 0xff
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
