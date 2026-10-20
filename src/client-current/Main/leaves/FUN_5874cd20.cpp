// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874CD20 .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_5874cd20() {
    __asm {
        sub esp, 18h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx + 0cc0h]
        mov eax, dword ptr [edx + 74h]
        ; Exact mapped bytes DB 42 74: fild dword ptr [edx + 0x74]
        __asm _emit 0xdb
        __asm _emit 0x42
        __asm _emit 0x74
        push edi
        test eax, eax
        ; Exact mapped bytes 7D 06: jge 0x5874cd50
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B FF 22 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0x22
        __asm _emit 0x00
        movzx ecx, word ptr [esi + 178h]
        ; Exact mapped bytes 8B 15 68 B4 A0 58: mov edx, dword ptr [0x58a0b468]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        mov dword ptr [esp + 8], ecx
        xor edx, 0aaaaaaaah
        ; Exact mapped bytes DB 44 24 08: fild dword ptr [esp + 8]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes D9 7C 24 08: fnstcw word ptr [esp + 8]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x08
        movzx eax, word ptr [esp + 8]
        ; Exact mapped bytes DE C9: fmulp st(1)
        __asm _emit 0xde
        __asm _emit 0xc9
        or eax, 0c00h
        mov dword ptr [esp + 0ch], eax
        ; Exact mapped bytes DC 0D 20 CF 98 58: fmul qword ptr [0x5898cf20]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D9 6C 24 0C: fldcw word ptr [esp + 0xc]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes DF 7C 24 0C: fistp qword ptr [esp + 0xc]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x0c
        mov edi, dword ptr [esp + 0ch]
        ; Exact mapped bytes D9 6C 24 08: fldcw word ptr [esp + 8]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x08
        cmp edx, edi
        ; Exact mapped bytes 73 27: jae 0x5874cdc5
        __asm _emit 0x73
        __asm _emit 0x27
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 45 ED 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7E 7F 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        xor al, al
        pop esi
        mov ecx, dword ptr [esp + 14h]
        xor ecx, esp
        ; Exact mapped bytes E8 19 FE 22 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xfe
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 18h
        ret
        push edi
        lea eax, [esp + 10h]
        push 5898d18ch
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        push 24h
        ; Exact mapped bytes E8 71 FE 22 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0x22
        __asm _emit 0x00
        movzx ecx, word ptr [esi + 16ah]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [esi + 0b0h]
        mov dword ptr [eax + 4], edx
        movzx ecx, byte ptr [esi + 164h]
        add esp, 10h
        push eax
        lea edx, [esp + 10h]
        and ecx, 7fh
        push edx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0ch], edi
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea eax, [esp + 14h]
        push eax
        push 190h
        ; Exact mapped bytes E8 D2 EC 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 4B D7 01 00: call 0x5876a570
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        pop edi
        pop esi
        xor ecx, esp
        mov al, 1
        ; Exact mapped bytes E8 A6 FD 22 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 18h
        ret
    }
}
