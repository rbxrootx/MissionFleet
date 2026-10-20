// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437572 .. +0x18E bytes.
extern "C" __declspec(naked) void FUN_00437572_00437572() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a3d3h
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
        sub esp, 18h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax], 5812f0h
        mov dword ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 3588h], 0
        ; Exact mapped bytes 74 25: je 0x4375e8
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 3588h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 31 5E 0B 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x5e
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 3588h], 0
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 358ch], 0
        ; Exact mapped bytes 74 25: je 0x437619
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 358ch]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 00 5E 0B 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x5e
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 358ch], 0
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 3590h], 0
        ; Exact mapped bytes 74 25: je 0x43764a
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 3590h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 CF 5D 0B 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x5d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 3590h], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x43765c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 19h
        ; Exact mapped bytes 7D 3F: jge 0x4376a1
        __asm _emit 0x7d
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + edx*4 + 3594h], 0
        ; Exact mapped bytes 74 2D: je 0x43769f
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + ecx*4 + 3594h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 7E 5D 0B 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x5d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + edx*4 + 3594h], 0
        ; Exact mapped bytes EB B2: jmp 0x437653
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4be8h
        ; Exact mapped bytes E8 AE 29 0B 00: call 0x4ea05d
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x29
        __asm _emit 0x0b
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4bcch
        ; Exact mapped bytes E8 6C 15 0B 00: call 0x4e8c2d
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x15
        __asm _emit 0x0b
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4bb0h
        ; Exact mapped bytes E8 5A 15 0B 00: call 0x4e8c2d
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x15
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4b8ch
        ; Exact mapped bytes E8 58 98 FD FF: call 0x410f40
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        cmp ebp, esp
        ; Exact mapped bytes E8 E4 10 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
