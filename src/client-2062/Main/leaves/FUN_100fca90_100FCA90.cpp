// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FCA90 .. +0x13C bytes.
extern "C" __declspec(naked) void FUN_100fca90_100FCA90() {
    __asm {
        push -1
        push 10174653h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 20h]
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 30h]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        mov ecx, dword ptr [esp + 2ch]
        push edx
        mov edx, dword ptr [esp + 2ch]
        push eax
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes E8 3C 17 F1 FF: call 0x1000e210
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x17
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, 3e8h
        xor ebx, ebx
        mov dword ptr [esi + 54h], eax
        mov dword ptr [esi + 50h], eax
        mov eax, 3e7h
        mov ecx, 2ah
        mov dword ptr [esi + 58h], eax
        mov dword ptr [esi + 60h], eax
        xor eax, eax
        lea edi, [esi + 0d0h]
        mov dword ptr [esi], 101766b8h
        mov dword ptr [esi + 5ch], ebx
        mov dword ptr [esi + 64h], ebx
        mov dword ptr [esi + 94h], ebx
        mov dword ptr [esi + 0a4h], ebx
        mov dword ptr [esi + 0b0h], ebx
        mov dword ptr [esi + 0b4h], 2eeh
        mov dword ptr [esi + 68h], 4b0h
        mov dword ptr [esi + 0ach], ebx
        mov dword ptr [esi + 88h], 2
        mov dword ptr [esi + 0cch], ebx
        mov dword ptr [esi + 0c8h], ebx
        mov dword ptr [esi + 0c4h], ebx
        push 20h
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, 2dh
        lea edi, [esi + 178h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov dword ptr [esp + 1ch], ebx
        mov dword ptr [esi + 22ch], 0ffffffffh
        mov dword ptr [esi + 230h], ebx
        ; Exact mapped bytes E8 2C FC 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xfc
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebx
        mov byte ptr [esp + 18h], 1
        ; Exact mapped bytes 74 2C: je 0x100fcbb0
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 0ch
        ; Exact mapped bytes 7E 0D: jle 0x100fcba0
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 03: je 0x100fcba0
        __asm _emit 0x74
        __asm _emit 0x03
        mov ebx, dword ptr [ecx + 30h]
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 58 BD F4 FF: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xbd
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [esi + 234h], eax
        ; Exact mapped bytes EB 06: jmp 0x100fcbb6
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [esi + 234h], ebx
        mov ecx, dword ptr [esp + 10h]
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
