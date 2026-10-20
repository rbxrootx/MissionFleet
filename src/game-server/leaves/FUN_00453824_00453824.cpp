// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00453824 .. +0x1DE bytes.
extern "C" __declspec(naked) void FUN_00453824_00453824() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b51ah
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
        sub esp, 24h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        lea eax, [ebp + 14h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 5d7d0ch
        ; Exact mapped bytes E8 B8 61 05 00: call 0x4a9a30
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x61
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1ch], 0
        push 0
        ; Exact mapped bytes E8 27 64 05 00: call 0x4a9cb0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 08 89 05 00: call 0x4ac1a0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x89
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        push 2ch
        ; Exact mapped bytes E8 1B 9B 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x9b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 0D: je 0x4538c5
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D0 90 00 00: call 0x45c990
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x4538cc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 14h]
        add ecx, 76ch
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 14h], edx
        push 5b8140h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18h
        ; Exact mapped bytes E8 D2 9D 00 00: call 0x45d710
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        push 5b8144h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18h
        ; Exact mapped bytes E8 F2 9D 00 00: call 0x45d740
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18h
        ; Exact mapped bytes E8 E3 9D 00 00: call 0x45d740
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5d7d0ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6F 4E 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 46 9A 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x9a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 28h], edx
        mov esi, esp
        push 5d7d0ch
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 28h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3C 4E 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x4e
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5dcb60h
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 28 4E 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x4e
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 2ch], edx
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8
        ; Exact mapped bytes E8 53 9E 00 00: call 0x45d820
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5dcb60h
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FF 4D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x4d
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 77 8D 00 00: call 0x45c760
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 30h
        cmp ebp, esp
        ; Exact mapped bytes E8 E2 4D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x4d
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
