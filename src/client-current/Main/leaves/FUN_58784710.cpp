// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58784710 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_58784710() {
    __asm {
        push -1
        push 5897f948h
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
        mov dword ptr [edi], 58996aach
        mov eax, dword ptr [edi + 78h]
        xor ebx, ebx
        mov dword ptr [esp + 20h], ebx
        cmp eax, ebx
        ; Exact mapped bytes 74 0C: je 0x5878475a
        __asm _emit 0x74
        __asm _emit 0x0c
        push eax
        ; Exact mapped bytes E8 D2 86 1F 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x86
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [edi + 78h], ebx
        mov ecx, dword ptr [edi + 70h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5878476c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 70h], ebx
        lea esi, [edi + 54h]
        mov ebp, 2
        mov ecx, dword ptr [esi + 8]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x58784786
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 8], ebx
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x58784796
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
        ; Exact mapped bytes 75 D6: jne 0x58784774
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, edi
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 B3 E5 17 00: call 0x58902d60
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xe5
        __asm _emit 0x17
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
