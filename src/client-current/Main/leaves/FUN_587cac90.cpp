// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CAC90 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_587cac90() {
    __asm {
        push -1
        push 58981808h
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
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], 5899b230h
        mov ecx, dword ptr [esi + 2b8h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        mov dword ptr [esp + 14h], 0
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 2b8h]
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x587cacef
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 2b8h], 0
        mov ecx, dword ptr [esi + 2bch]
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x587cad0b
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 2bch], 0
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 B6 04 00 00: call 0x587cb1d0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        add esp, 10h
        ret
    }
}
