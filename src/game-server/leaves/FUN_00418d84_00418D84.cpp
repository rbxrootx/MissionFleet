// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00418D84 .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_00418d84_00418D84() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 23 FA 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xfa
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 80h
        push 2
        push 0
        push 0
        push 40000000h
        mov edx, dword ptr [ebp - 0ch]
        add edx, 4
        push edx
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FB F9 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf9
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 74 6B: je 0x418e59
        __asm _emit 0x74
        __asm _emit 0x6b
        mov esi, esp
        push 0
        lea eax, [ebp - 4]
        push eax
        push 4
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 104h
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CD F9 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf9
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, esp
        push 2
        push 0
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B4 F9 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf9
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 104h], eax
        mov esi, esp
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 98 F9 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf9
        __asm _emit 0x08
        __asm _emit 0x00
        push 5a1314h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 16 00 00 00: call 0x418e6c
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        xor eax, eax
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 7A F9 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf9
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
