// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58836900 .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_58836900() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 589841f0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ch
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
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
        mov dword ptr [ebp - 10h], esp
        mov esi, ecx
        mov edi, dword ptr [ebp + 8]
        cmp edi, 30c30c3h
        ; Exact mapped bytes 76 05: jbe 0x5883693d
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 23 FD 0B 00: call 0x588f6660
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5883695a
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [esi + 14h]
        sub ecx, eax
        mov eax, 30c30c31h
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp eax, edi
        ; Exact mapped bytes 0F 83 8C 00 00 00: jae 0x588369ee
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push edi
        ; Exact mapped bytes E8 36 D9 FF FF: call 0x588342a0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esi + 10h]
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [esi + 0ch], edi
        ; Exact mapped bytes 76 05: jbe 0x58836984
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 EE 62 14 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x62
        __asm _emit 0x14
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 0ch]
        cmp ebx, dword ptr [esi + 10h]
        ; Exact mapped bytes 76 05: jbe 0x58836991
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 E1 62 14 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x62
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov eax, dword ptr [ebp - 14h]
        push ecx
        lea edx, [esi + 8]
        push edx
        push eax
        push edi
        push ebx
        ; Exact mapped bytes E8 A4 DC FF FF: call 0x58834650
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esi + 0ch]
        mov ecx, dword ptr [esi + 10h]
        sub ecx, ebx
        mov eax, 30c30c31h
        imul ecx
        sar edx, 4
        mov edi, edx
        shr edi, 1fh
        add esp, 18h
        add edi, edx
        test ebx, ebx
        ; Exact mapped bytes 74 09: je 0x588369d5
        __asm _emit 0x74
        __asm _emit 0x09
        push ebx
        ; Exact mapped bytes E8 70 62 14 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x62
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        imul edi, edi, 54h
        mov ecx, dword ptr [ebp - 14h]
        imul eax, eax, 54h
        add eax, ecx
        add edi, ecx
        mov dword ptr [esi + 14h], eax
        mov dword ptr [esi + 10h], edi
        mov dword ptr [esi + 0ch], ecx
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
    }
}
