// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00467A5A .. +0x1D2 bytes.
extern "C" __declspec(naked) void FUN_00467a5a_00467A5A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bbdch
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
        sub esp, 1ch
        mov eax, 0cccccccch
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 124h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        xor edx, 0f3a91cd0h
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 0B 00 00: call 0x4685e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, eax
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 148h]
        xor eax, 9a2fc507h
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 148h], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + 1a0h]
        ; Exact mapped bytes 0F 84 26 01 00 00: je 0x467c10
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 15 94 0C 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 140h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 144h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 138h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 13ch]
        push edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 120h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 134h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 128h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 124h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 EC 00 00 00: mov dx, word ptr [ecx + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 148h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6F 0A 00 00: call 0x4685e0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 1a0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        push 5baf40h
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 C4 6D 06 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 40h
        push ecx
        mov ecx, esp
        mov dword ptr [ebp - 18h], esp
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 D0 58 08 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        push 9
        mov ecx, 5d4c70h
        ; Exact mapped bytes E8 AF CE FE FF: call 0x454a68
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xce
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1F 0A 00 00: call 0x4685e0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        cmp eax, dword ptr [ecx + 148h]
        ; Exact mapped bytes 74 1B: je 0x467be7
        __asm _emit 0x74
        __asm _emit 0x1b
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 6A 5C 08 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x5c
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes EB 2B: jmp 0x467c12
        __asm _emit 0xeb
        __asm _emit 0x2b
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 08: je 0x467bf5
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 89 FA FD FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 41 5C 08 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x5c
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes EB 02: jmp 0x467c12
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 BA 0B 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x0b
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
