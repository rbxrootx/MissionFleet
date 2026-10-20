// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FF520 .. +0x14C bytes.
extern "C" __declspec(naked) void _GetClassObject_AFX_COM__QAEJABU_GUID__0PAPAX_Z_004FF520() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e91ah
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
        ; Exact mapped bytes E8 11 01 00 00: call 0x4ff66c
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 9D 19 03 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x19
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 30 1A 03 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x1a
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 9C 01 00 00: call 0x4ff71c
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x4ff5ae
        __asm _emit 0x75
        __asm _emit 0x2a
        mov dword ptr [ebp - 20h], 80040154h
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 B5 E2 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 A6 E2 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x4ff65c
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 F4 19 03 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x19
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 28 24 5E 00: call dword ptr [0x5e2428]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 27: jne 0x4ff5ed
        __asm _emit 0x75
        __asm _emit 0x27
        mov dword ptr [ebp - 24h], 80040154h
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 73 E2 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 64 E2 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes EB 6F: jmp 0x4ff65c
        __asm _emit 0xeb
        __asm _emit 0x6f
        push 5cb768h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 32: je 0x4ff637
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
        ; Exact mapped bytes E8 29 E2 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 1A E2 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes EB 25: jmp 0x4ff65c
        __asm _emit 0xeb
        __asm _emit 0x25
        mov dword ptr [ebp - 2ch], 800401f9h
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 02 E2 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 F3 E1 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xf3
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
