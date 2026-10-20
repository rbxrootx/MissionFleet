// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587982A0 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_587982a0_587982A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588915a0h
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
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ecx
        mov dword ptr [ebp - 10h], eax
        mov ebx, dword ptr [ebp + 0ch]
        cmp byte ptr [ebx + 0dh], 0
        ; Exact mapped bytes 75 6A: jne 0x5879833e
        __asm _emit 0x75
        __asm _emit 0x6a
        push dword ptr [ebx + 8]
        mov ecx, eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BF FF FF FF: call 0x587982a0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, ebx
        mov ebx, dword ptr [ebx]
        lea ecx, [esi + 18h]
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 EC 25 00 00: call 0x5879a8e0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 24h]
        mov dword ptr [esi + 18h], 0
        mov dword ptr [esi + 1ch], 0
        ; Exact mapped bytes E8 C6 0B 00 00: call 0x58798ed0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10h]
        mov dword ptr [ebp - 4], 0ffffffffh
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x5879832a
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [esi + 14h]
        and al, 3
        cmp al, 1
        ; Exact mapped bytes 75 09: jne 0x5879832a
        __asm _emit 0x75
        __asm _emit 0x09
        push ecx
        ; Exact mapped bytes E8 D9 12 0C 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x12
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        push 30h
        push esi
        ; Exact mapped bytes E8 02 8D 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        add esp, 8
        cmp byte ptr [ebx + 0dh], 0
        ; Exact mapped bytes 74 96: je 0x587982d4
        __asm _emit 0x74
        __asm _emit 0x96
        mov ecx, dword ptr [ebp - 0ch]
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
