// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00442D44 .. +0x139 bytes.
extern "C" __declspec(naked) void FUN_00442d44_00442D44() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57aeffh
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
        sub esp, 78h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 84h]
        mov ecx, 1eh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 84h], ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 30 91 0F 00: call 0x53beb6
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x91
        __asm _emit 0x0f
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 C7 00 00 00: je 0x442e55
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 84h]
        push eax
        lea ecx, [ebp - 7ch]
        ; Exact mapped bytes E8 22 0C 0C 00: call 0x5039bf
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x0c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 0
        lea ecx, [ebp - 7ch]
        ; Exact mapped bytes E8 27 4B 0F 00: call 0x5378d5
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x4b
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        push 27h
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 1D 8E 0F 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x8e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        push 0bh
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 13 5A 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x5a
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 80h], eax
        mov esi, esp
        push 0ch
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FF 59 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x59
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 65 2F 0F 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x2f
        __asm _emit 0x0f
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 00 93 0F 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x0f
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 37 30 0F 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x30
        __asm _emit 0x0f
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 80h]
        add eax, 1
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 37 30 0F 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x30
        __asm _emit 0x0f
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 20h]
        add eax, 1
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [edx + 428h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        lea ecx, [ebp - 7ch]
        ; Exact mapped bytes E8 B8 5B 0F 00: call 0x5389fc
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x5b
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 7ch]
        ; Exact mapped bytes E8 30 0C 0C 00: call 0x503a83
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x0c
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x442e60
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 E5 A9 0F 00: call 0x53d845
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xa9
        __asm _emit 0x0f
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
        add esp, 84h
        cmp ebp, esp
        ; Exact mapped bytes E8 67 59 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x59
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
