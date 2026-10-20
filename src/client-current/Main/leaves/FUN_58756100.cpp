// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58756100 .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_58756100() {
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
        mov ebx, ecx
        mov dword ptr [esp + 10h], ebx
        mov dword ptr [ebx], 5898d6f8h
        mov dword ptr [esp + 1ch], 0
        lea esi, [ebx + 0b0h]
        mov edi, 20h
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x58756157
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
        sub edi, 1
        ; Exact mapped bytes 75 E4: jne 0x58756143
        __asm _emit 0x75
        __asm _emit 0xe4
        mov ecx, ebx
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 F2 CB 1A 00: call 0x58902d60
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xcb
        __asm _emit 0x1a
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
