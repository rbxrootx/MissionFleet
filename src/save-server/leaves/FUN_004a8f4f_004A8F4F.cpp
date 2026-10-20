// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A8F4F .. +0x145 bytes.
extern "C" __declspec(naked) void FUN_004a8f4f_004A8F4F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c7fch
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
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 16 D3 02 00: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        and eax, 30h
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x4a8f9f
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 07 D3 02 00: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4a8f9f
        __asm _emit 0x75
        __asm _emit 0x11
        push 46h
        push 672a58h
        ; Exact mapped bytes E8 A6 FD 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a8f9f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CB: jne 0x4a8f70
        __asm _emit 0x75
        __asm _emit 0xcb
        push -1
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 21 31 00 00: call 0x4ac0e8
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 74 06: je 0x4a8fd6
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 75 05: jne 0x4a8fdb
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x4a9081
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 0B: je 0x4a8fee
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        cmp dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 75 05: jne 0x4a8ff3
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x4a9081
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0C BD 07 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xbd
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B0 80 06 00: call 0x5110c2
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D6 55 08 00: call 0x52e5f4
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 51 5C 08 00: call 0x52ec7e
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x5c
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 7D 09: jge 0x4a903e
        __asm _emit 0x7d
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        sub eax, 1
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 64 BD 07 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xbd
        __asm _emit 0x07
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 81 5C 08 00: call 0x52ecd4
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x5c
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E4 55 08 00: call 0x52e64a
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 32 53 08 00: call 0x52e3a4
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6B 38 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x38
        __asm _emit 0x02
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
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
