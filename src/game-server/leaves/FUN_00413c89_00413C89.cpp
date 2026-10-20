// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413C89 .. +0x12F bytes.
extern "C" __declspec(naked) void FUN_00413c89_00413C89() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b8h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0b8h]
        mov ecx, 2eh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0b8h], ecx
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 3
        push 80000000h
        mov eax, dword ptr [ebp - 0b8h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 07 4B 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x4b
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x413da0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DF 4A 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x4a
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 8]
        push eax
        push 5ch
        lea ecx, [ebp - 0b4h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BD 4A 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x4a
        __asm _emit 0x09
        __asm _emit 0x00
        cmp dword ptr [ebp - 68h], -1
        ; Exact mapped bytes 74 5F: je 0x413d88
        __asm _emit 0x74
        __asm _emit 0x5f
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9C 4A 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x4a
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 8]
        push edx
        push 50h
        lea eax, [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7D 4A 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x4a
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 58h]
        push eax
        ; Exact mapped bytes FF 15 64 24 5E 00: call dword ptr [0x5e2464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 66 4A 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x4a
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x413d80
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 08: jmp 0x413d88
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 68h], ecx
        ; Exact mapped bytes EB 9B: jmp 0x413d23
        __asm _emit 0xeb
        __asm _emit 0x9b
        mov esi, esp
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 45 4A 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x4a
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 68h]
        ; Exact mapped bytes EB 03: jmp 0x413da3
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        add esp, 0b8h
        cmp ebp, esp
        ; Exact mapped bytes E8 2E 4A 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x4a
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
