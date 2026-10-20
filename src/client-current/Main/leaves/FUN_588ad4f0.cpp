// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588AD4F0 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_588ad4f0() {
    __asm {
        push -1
        push 5897e8d8h
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
        lea eax, [esp + 14h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ecx
        mov dword ptr [esp + 10h], edi
        mov dword ptr [edi], 589a080ch
        mov ecx, dword ptr [edi + 7ch]
        mov dword ptr [esp + 1ch], 0
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x588ad53e
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 7ch], 0
        lea esi, [edi + 5ch]
        mov ebx, 8
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x588ad55a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], 0
        add esi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 E4: jne 0x588ad546
        __asm _emit 0x75
        __asm _emit 0xe4
        mov ecx, edi
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 EF 57 05 00: call 0x58902d60
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
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
        pop ebx
        add esp, 10h
        ret
    }
}
