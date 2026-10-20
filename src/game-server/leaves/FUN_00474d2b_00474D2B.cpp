// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00474D2B .. +0x101 bytes.
extern "C" __declspec(naked) void FUN_00474d2b_00474D2B() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57be8ch
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
        sub esp, 28h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 34h]
        mov ecx, 0ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax], 581cb8h
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 4
        ; Exact mapped bytes E8 B5 19 00 00: call 0x476730
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 14h], edx
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 4
        ; Exact mapped bytes E8 E1 19 00 00: call 0x476770
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        lea edx, [ebp - 10h]
        push edx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 00 1D 00 00: call 0x476aa0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 57: je 0x474e00
        __asm _emit 0x74
        __asm _emit 0x57
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 3F 1C 00 00: call 0x4769f0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 33: je 0x474df0
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 1A: je 0x474de9
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 FC 39 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x474df0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        push 0
        lea eax, [ebp - 2ch]
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 22 1C 00 00: call 0x476a20
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 94: jmp 0x474d94
        __asm _emit 0xeb
        __asm _emit 0x94
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 4
        ; Exact mapped bytes E8 AE 18 00 00: call 0x4766c0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x18
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
        pop edi
        pop esi
        add esp, 34h
        cmp ebp, esp
        ; Exact mapped bytes E8 B8 39 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
