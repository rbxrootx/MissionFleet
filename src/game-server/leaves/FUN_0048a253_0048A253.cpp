// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048A253 .. +0x15A bytes.
extern "C" __declspec(naked) void FUN_0048a253_0048A253() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        push edi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5C E5 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], 50h
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 0F 84 00 01 00 00: je 0x48a39b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E2 12 00 00: call 0x48b585
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2E E5 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        sub edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 82 C1 00 00 00: jb 0x48a385
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 02 13 00 00: call 0x48b5d7
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x48a383
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F4 E4 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 3ch], eax
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DC E4 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 76 20: jbe 0x48a32c
        __asm _emit 0x76
        __asm _emit 0x20
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C5 E4 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 10h]
        push eax
        push 5c48b4h
        ; Exact mapped bytes E8 EC 58 04 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 8
        mov esi, dword ptr [ebp - 10h]
        add esi, dword ptr [ebp - 8]
        mov edi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp edi, esp
        ; Exact mapped bytes E8 9F E4 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        sub esi, eax
        sub esi, 1
        mov dword ptr [ebp - 14h], esi
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7E 1D: jle 0x48a36c
        __asm _emit 0x7e
        __asm _emit 0x1d
        mov esi, esp
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 D4 00 00 00: call dword ptr [edx + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 76 E4 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x48a383
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5D E4 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x48a396
        __asm _emit 0xeb
        __asm _emit 0x11
        mov esi, esp
        push 1
        ; Exact mapped bytes FF 15 F0 23 5E 00: call dword ptr [0x5e23f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4A E4 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 F3 FE FF FF: jmp 0x48a28e
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 39 E4 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
