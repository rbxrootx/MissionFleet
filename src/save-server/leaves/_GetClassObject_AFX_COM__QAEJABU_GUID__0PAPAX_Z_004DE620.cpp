// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DE620 .. +0x14C bytes.
extern "C" __declspec(naked) void _GetClassObject_AFX_COM__QAEJABU_GUID__0PAPAX_Z_004DE620() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e3fah
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
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 11 01 00 00: call 0x4de76c
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 9D 66 04 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 30 67 04 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 9C 01 00 00: call 0x4de81c
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x4de6ae
        __asm _emit 0x75
        __asm _emit 0x2a
        mov dword ptr [ebp - 20h], 80040154h
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 55 E2 FE FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 46 E2 FE FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x4de75c
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 F4 66 04 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 18 B8 68 00: call dword ptr [0x68b818]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 27: jne 0x4de6ed
        __asm _emit 0x75
        __asm _emit 0x27
        mov dword ptr [ebp - 24h], 80040154h
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 13 E2 FE FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 04 E2 FE FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes EB 6F: jmp 0x4de75c
        __asm _emit 0xeb
        __asm _emit 0x6f
        push 677f40h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 14 B8 68 00: call dword ptr [0x68b814]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 32: je 0x4de737
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 C9 E1 FE FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 BA E1 FE FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes EB 25: jmp 0x4de75c
        __asm _emit 0xeb
        __asm _emit 0x25
        mov dword ptr [ebp - 2ch], 800401f9h
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 A2 E1 FE FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 93 E1 FE FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
