// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049FA76 .. +0x1AD bytes.
extern "C" __declspec(naked) void FUN_0049fa76_0049FA76() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57eef6h
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
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 2ch], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 45 14 09 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 60 CD 0A 00: call 0x54c831
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xcd
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 29: jne 0x49faff
        __asm _emit 0x75
        __asm _emit 0x29
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 98 D9 04 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        or ecx, 1
        mov dword ptr [ebp - 34h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 55 DD 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 0E 01 00 00: jmp 0x49fc0d
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 2A CD 0A 00: call 0x54c831
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xcd
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 54: jne 0x49fb60
        __asm _emit 0x75
        __asm _emit 0x54
        push 0f098h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 67 B0 05 00: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x49fb31
        __asm _emit 0x75
        __asm _emit 0x14
        push 5f8h
        push 5cbe8ch
        ; Exact mapped bytes E8 D4 4E 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49fb31
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x49fb0c
        __asm _emit 0x75
        __asm _emit 0xd5
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 37 D9 04 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        or ecx, 1
        mov dword ptr [ebp - 34h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 F4 DC 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x49fc0d
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 2B CA 0A 00: call 0x54c593
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xca
        __asm _emit 0x0a
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea edx, [ebp - 20h]
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
        ; Exact mapped bytes FF 15 B0 24 5E 00: call dword ptr [0x5e24b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 D2 CC FF FF: call 0x49c860
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 C7 45 D8 08 00: mov word ptr [ebp - 0x28], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xd8
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x49fba9
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 35: jmp 0x49fbde
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
        ; Exact mapped bytes E8 F9 9B 00 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], esp
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 D5 CB FF FF: call 0x49c7b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EE DC 04 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        or al, 1
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 AC C9 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc9
        __asm _emit 0x0a
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 42 DC 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xdc
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
