// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004097A0 .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_004097a0_004097A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 4ch]
        mov ecx, 13h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 19 B6 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 80h
        push 2
        push 0
        push 0
        push 40000000h
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        push edx
        ; Exact mapped bytes FF 15 D0 B7 68 00: call dword ptr [0x68b7d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F1 B5 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xb5
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 74 6B: je 0x409873
        __asm _emit 0x74
        __asm _emit 0x6b
        mov esi, esp
        push 0
        lea eax, [ebp - 8]
        push eax
        push 4
        mov ecx, dword ptr [ebp - 4]
        add ecx, 104h
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C3 B5 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xb5
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 2
        push 0
        push 0
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AA B5 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xb5
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 104h], eax
        mov esi, esp
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8E B5 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xb5
        __asm _emit 0x05
        __asm _emit 0x00
        push 633118h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 E5 7C FF FF: call 0x401555
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 4ch
        cmp ebp, esp
        ; Exact mapped bytes E8 6E B5 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb5
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
