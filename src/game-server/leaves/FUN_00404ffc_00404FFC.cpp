// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00404FFC .. +0xFB bytes.
extern "C" __declspec(naked) void FUN_00404ffc_00404FFC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 68h]
        mov ecx, 1ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 68h], ecx
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 1
        push 80000000h
        mov eax, dword ptr [ebp - 68h]
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
        ; Exact mapped bytes E8 A0 37 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x4050e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
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
        ; Exact mapped bytes E8 78 37 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 8]
        push eax
        push 5ch
        lea ecx, [ebp - 64h]
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
        ; Exact mapped bytes E8 59 37 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 75 36: jne 0x4050c5
        __asm _emit 0x75
        __asm _emit 0x36
        mov esi, esp
        push 0
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
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
        ; Exact mapped bytes E8 30 37 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
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
        ; Exact mapped bytes E8 1D 37 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x4050dc
        __asm _emit 0xeb
        __asm _emit 0x17
        mov esi, esp
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 08 37 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 09: jmp 0x4050e5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4050e5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        add esp, 68h
        cmp ebp, esp
        ; Exact mapped bytes E8 EF 36 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x36
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
