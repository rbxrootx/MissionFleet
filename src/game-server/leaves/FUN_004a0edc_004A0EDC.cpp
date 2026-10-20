// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A0EDC .. +0x1AD bytes.
extern "C" __declspec(naked) void FUN_004a0edc_004A0EDC() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ef62h
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
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 38h], ecx
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 2ch], 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 DF FF 08 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 F8 BB 0A 00: call 0x54cb2f
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xbb
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 29: jne 0x4a0f65
        __asm _emit 0x75
        __asm _emit 0x29
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 32 C5 04 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        or ecx, 1
        mov dword ptr [ebp - 34h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 EF C8 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 0E 01 00 00: jmp 0x4a1073
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C2 BB 0A 00: call 0x54cb2f
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xbb
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 54: jne 0x4a0fc6
        __asm _emit 0x75
        __asm _emit 0x54
        push 0f099h
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 01 9C 05 00: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x9c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a0f97
        __asm _emit 0x75
        __asm _emit 0x14
        push 87eh
        push 5cbe8ch
        ; Exact mapped bytes E8 6E 3A 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x3a
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a0f97
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4a0f72
        __asm _emit 0x75
        __asm _emit 0xd5
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D1 C4 04 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        or ecx, 1
        mov dword ptr [ebp - 34h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 8E C8 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x4a1073
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 C5 B5 0A 00: call 0x54c593
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xb5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea edx, [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [edx]
        push ecx
        ; Exact mapped bytes FF 15 B8 24 5E 00: call dword ptr [0x5e24b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 6C B8 FF FF: call 0x49c860
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 C7 45 DC 08 00: mov word ptr [ebp - 0x24], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xdc
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x4a100f
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 35: jmp 0x4a1044
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 D8 22 5E 00: call dword ptr [0x5e22d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        lea ecx, [eax + eax + 2]
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 93 87 00 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], esp
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 6F B7 FF FF: call 0x49c7b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 88 C8 04 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        or al, 1
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 46 B5 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 DC C7 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        lea esp, [ebp - 4ch]
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
