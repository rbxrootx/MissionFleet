// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B0590 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_587b0590() {
    __asm {
        push -1
        push 58980e18h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
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
        lea eax, [esp + 10h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 0ch], esi
        mov dword ptr [esi], 58999e5ch
        mov ecx, dword ptr [esi + 60h]
        xor edi, edi
        mov dword ptr [esp + 18h], edi
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x587b05d7
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 60h], edi
        mov ecx, dword ptr [esi + 64h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x587b05e9
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 64h], edi
        mov ecx, dword ptr [esi + 168h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x587b0601
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 168h], edi
        mov ecx, esi
        mov dword ptr [esp + 18h], 0ffffffffh
        ; Exact mapped bytes E8 90 32 15 00: call 0x589038a0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x32
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
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
        add esp, 10h
        ret
    }
}
