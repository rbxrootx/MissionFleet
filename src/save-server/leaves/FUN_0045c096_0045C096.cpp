// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045C096 .. +0x1AD bytes.
extern "C" __declspec(naked) void FUN_0045c096_0045C096() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e9d6h
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
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 38h], ecx
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 2ch], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 25 8C 0C 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 B0 F1 0E 00: call 0x54b2a1
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf1
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 29: jne 0x45c11f
        __asm _emit 0x75
        __asm _emit 0x29
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 04 07 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        or ecx, 1
        mov dword ptr [ebp - 34h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 D5 07 07 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x07
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 0E 01 00 00: jmp 0x45c22d
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 7A F1 0E 00: call 0x54b2a1
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf1
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 54: jne 0x45c180
        __asm _emit 0x75
        __asm _emit 0x54
        push 0f098h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 47 DB 07 00: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xdb
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x45c151
        __asm _emit 0x75
        __asm _emit 0x14
        push 5f8h
        push 678664h
        ; Exact mapped bytes E8 F4 CB 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xcb
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45c151
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x45c12c
        __asm _emit 0x75
        __asm _emit 0xd5
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B7 03 07 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        or ecx, 1
        mov dword ptr [ebp - 34h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 74 07 07 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x45c22d
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 7B EE 0E 00: call 0x54b003
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xee
        __asm _emit 0x0e
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [edx]
        push ecx
        ; Exact mapped bytes FF 15 44 BB 68 00: call dword ptr [0x68bb44]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 D2 CC FF FF: call 0x458e80
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 C7 45 D8 08 00: mov word ptr [ebp - 0x28], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xd8
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x45c1c9
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 35: jmp 0x45c1fe
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 F0 B8 68 00: call dword ptr [0x68b8f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [eax + eax + 2]
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 B9 9D 00 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], esp
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 D5 CB FF FF: call 0x458dd0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6E 07 07 00: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x07
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        or al, 1
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 FC ED 0E 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xed
        __asm _emit 0x0e
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 C2 06 07 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x06
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        lea esp, [ebp - 4ch]
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
