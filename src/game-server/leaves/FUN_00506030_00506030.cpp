// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00506030 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_00506030_00506030() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d432h
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
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 11: je 0x506068
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 CE 9D FC FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x9d
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x506079
        __asm _emit 0x75
        __asm _emit 0x11
        push 2bh
        push 5c7790h
        ; Exact mapped bytes E8 8C E9 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x506079
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x506051
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 11: je 0x506096
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 0f1b0h
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 69 AE 02 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 1ch]
        add eax, 10h
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 C6 73 FE FF: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 CC AE 02 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x5060d1
        __asm _emit 0x74
        __asm _emit 0x0d
        push 0f006h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 AF 4A FF FF: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 D1 AE 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 0ch]
        add edx, 0f1b0h
        push edx
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 8F 5B 01 00: call 0x51bc7f
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 AE AE 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 1
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 32 77 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 23 77 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
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
