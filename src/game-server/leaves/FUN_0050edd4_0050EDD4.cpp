// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050EDD4 .. +0xF1 bytes.
extern "C" __declspec(naked) void FUN_0050edd4_0050EDD4() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d089h
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
        sub esp, 44h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x50ee0c
        __asm _emit 0x75
        __asm _emit 0x14
        push 1fbh
        push 5c68bch
        ; Exact mapped bytes E8 F9 5B 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50ee0c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x50edf2
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 17: jne 0x50ee31
        __asm _emit 0x75
        __asm _emit 0x17
        push 5c6aa8h
        push 5c6ad8h
        ; Exact mapped bytes E8 EC 0D FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x50eeb2
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        lea ecx, [ebp - 2ch]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        lea ecx, [ebp - 4ch]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 A4 20 02 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 4ch]
        push edx
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        lea edx, [ebp - 50h]
        push edx
        ; Exact mapped bytes E8 1A CE 00 00: call 0x51bc99
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        push eax
        push 30h
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 1D 21 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 EE E9 FF FF: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 17 E8 FD FF: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1C F3 FF FF: call 0x50e1bf
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 9A E9 FD FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
