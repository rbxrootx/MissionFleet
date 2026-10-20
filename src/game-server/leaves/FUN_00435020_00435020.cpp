// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435020 .. +0x17C bytes.
extern "C" __declspec(naked) void FUN_00435020_00435020() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a2f8h
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
        sub esp, 28h
        push edi
        push ecx
        lea edi, [ebp - 34h]
        mov ecx, 0ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 28h], ecx
        push 0ffffh
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 28h
        ; Exact mapped bytes E8 30 BE FD FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax], 5812a8h
        push 16h
        push 5b5918h
        push 10h
        ; Exact mapped bytes E8 B5 7F 0B 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x7f
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 19: je 0x4350a7
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4E 99 02 00: call 0x45e9f0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4350ae
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 10h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1ch], eax
        push 17h
        push 5b5918h
        push 10h
        ; Exact mapped bytes E8 64 7F 0B 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x7f
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 19: je 0x4350f8
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AD CD 02 00: call 0x461ea0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x4350ff
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 18h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 20h], eax
        push 18h
        push 5b5918h
        push 10h
        ; Exact mapped bytes E8 13 7F 0B 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x7f
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 19: je 0x435149
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 BC BE FC FF: call 0x401000
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x435150
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 20h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [edx + 24h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 6D 01 00 00: call 0x4352e4
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 28h]
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
        add esp, 34h
        cmp ebp, esp
        ; Exact mapped bytes E8 4A 36 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x36
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
