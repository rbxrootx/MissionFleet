// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D359F .. +0x145 bytes.
extern "C" __declspec(naked) void FUN_004d359f_004D359F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57cdcch
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
        ; Exact mapped bytes E8 36 B8 01 00: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        and eax, 30h
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x4d35ef
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 27 B8 01 00: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4d35ef
        __asm _emit 0x75
        __asm _emit 0x11
        push 46h
        push 5c64b4h
        ; Exact mapped bytes E8 16 14 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d35ef
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CB: jne 0x4d35c0
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
        ; Exact mapped bytes E8 3B 31 00 00: call 0x4d6752
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 74 06: je 0x4d3626
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 75 05: jne 0x4d362b
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x4d36d1
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 0B: je 0x4d363e
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        cmp dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 75 05: jne 0x4d3643
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x4d36d1
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 BC D8 05 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 40 E8 04 00: call 0x521ea2
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 26 B5 06 00: call 0x53eb94
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xb5
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A1 BB 06 00: call 0x53f21e
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xbb
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 7D 09: jge 0x4d368e
        __asm _emit 0x7d
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        sub eax, 1
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 14 D9 05 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D1 BB 06 00: call 0x53f274
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xbb
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 34 B5 06 00: call 0x53ebea
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb5
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 82 B2 06 00: call 0x53e944
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xb2
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7B A1 01 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xa1
        __asm _emit 0x01
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
