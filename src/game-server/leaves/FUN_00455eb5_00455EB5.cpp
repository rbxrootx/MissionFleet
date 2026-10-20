// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00455EB5 .. +0x219 bytes.
extern "C" __declspec(naked) void FUN_00455eb5_00455EB5() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b7ceh
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
        sub esp, 2ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 38h]
        mov ecx, 0bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 34h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 13 B0 0D 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xb0
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        push 5b86c0h
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 3E 8A 07 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x8a
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 14h
        push 5b86e8h
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 4d0h
        ; Exact mapped bytes E8 DC 77 00 00: call 0x45d710
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6E B0 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb0
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 4d0h
        ; Exact mapped bytes E8 F5 77 00 00: call 0x45d740
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 80h
        push 4
        push 0
        push 1
        push 40000000h
        push 0
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 4d0h
        ; Exact mapped bytes E8 01 78 00 00: call 0x45d770
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 63 28 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 0F 84 12 01 00 00: je 0x45609c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0ah
        push 0dh
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        push 5b8710h
        push 5d7d0ch
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 2ch
        cmp esi, esp
        ; Exact mapped bytes E8 05 28 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 2
        push 0
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 EC 27 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 1ch]
        push edx
        mov edi, esp
        push 5d7d0ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp edi, esp
        ; Exact mapped bytes E8 D0 27 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        push 5d7d0ch
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B9 27 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x456031
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 18: jne 0x456049
        __asm _emit 0x75
        __asm _emit 0x18
        mov byte ptr [ebp - 20h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 08 78 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        mov al, byte ptr [ebp - 20h]
        ; Exact mapped bytes EB 69: jmp 0x4560b2
        __asm _emit 0xeb
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 0F: je 0x45606a
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 0B 6D 00 00: call 0x45cd70
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x456071
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov esi, esp
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5C 27 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        mov byte ptr [ebp - 2ch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B5 77 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x77
        __asm _emit 0x09
        __asm _emit 0x00
        mov al, byte ptr [ebp - 2ch]
        ; Exact mapped bytes EB 16: jmp 0x4560b2
        __asm _emit 0xeb
        __asm _emit 0x16
        mov byte ptr [ebp - 30h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 9D 77 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x77
        __asm _emit 0x09
        __asm _emit 0x00
        mov al, byte ptr [ebp - 30h]
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
        add esp, 38h
        cmp ebp, esp
        ; Exact mapped bytes E8 18 27 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
