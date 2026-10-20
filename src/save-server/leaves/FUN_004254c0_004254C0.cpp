// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004254C0 .. +0x12A bytes.
extern "C" __declspec(naked) void FUN_004254c0_004254C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 98h]
        mov ecx, 26h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 A4 C5 FD FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push -1
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 50 C1 FD FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xc1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 24h
        push 0
        lea ecx, [ebp - 54h]
        push ecx
        ; Exact mapped bytes E8 A2 03 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 09: jmp 0x425533
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 58h]
        add edx, 1
        mov dword ptr [ebp - 58h], edx
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x4255cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 0B C1 FD FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 74 6E: je 0x4255ca
        __asm _emit 0x74
        __asm _emit 0x6e
        push 24h
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 92 C3 FD FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x4255ca
        __asm _emit 0x74
        __asm _emit 0x52
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 4C: jne 0x4255ca
        __asm _emit 0x75
        __asm _emit 0x4c
        mov eax, dword ptr [ebp + 14h]
        push eax
        lea ecx, [ebp - 54h]
        push ecx
        lea edx, [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov ecx, dword ptr [ecx + 40c78h]
        ; Exact mapped bytes E8 E3 C3 FD FF: call 0x40197e
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes 66 C7 45 B4 01 00: mov word ptr [ebp - 0x4c], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        lea edx, [ebp - 54h]
        push edx
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 40c78h]
        ; Exact mapped bytes E8 1B C1 FD FF: call 0x4016e5
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc1
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 5B FF FF FF: jmp 0x42552a
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 98h
        cmp ebp, esp
        ; Exact mapped bytes E8 0C F8 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xf8
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
