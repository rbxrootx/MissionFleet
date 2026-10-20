// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DA6DC .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_004da6dc_004DA6DC() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58cfa2h
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
        ; Exact mapped bytes 74 11: je 0x4da714
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 32 8D FC FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4da725
        __asm _emit 0x75
        __asm _emit 0x11
        push 43h
        push 674304h
        ; Exact mapped bytes E8 20 E6 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe6
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4da725
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x4da6fd
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 11: je 0x4da742
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 0f1a0h
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 BD A5 04 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xa5
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 1ch]
        add eax, 14h
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BA 1D FF FF: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 20 A6 04 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x4da77d
        __asm _emit 0x74
        __asm _emit 0x0d
        push 0f006h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 03 F5 FF FF: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 25 A6 04 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 0ch]
        add edx, 0f1a0h
        push edx
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 F3 A6 02 00: call 0x504e8f
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 02 A6 04 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 1
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 26 21 FF FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 17 21 FF FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x21
        __asm _emit 0xff
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
