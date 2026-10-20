// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425340 .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_00425340_00425340() {
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
        mov ecx, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 24 C7 FD FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push -1
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 D0 C2 FD FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xc2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 24h
        push 0
        lea ecx, [ebp - 54h]
        push ecx
        ; Exact mapped bytes E8 22 05 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 09: jmp 0x4253b3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 58h]
        add edx, 1
        mov dword ptr [ebp - 58h], edx
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x425451
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 8B C2 FD FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xc2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 74 70: je 0x42544c
        __asm _emit 0x74
        __asm _emit 0x70
        push 24h
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 12 C5 FD FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x42544c
        __asm _emit 0x74
        __asm _emit 0x54
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 4E: jne 0x42544c
        __asm _emit 0x75
        __asm _emit 0x4e
        mov eax, dword ptr [ebp + 18h]
        push eax
        lea ecx, [ebp - 54h]
        push ecx
        lea edx, [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov ecx, dword ptr [ecx + 40c78h]
        ; Exact mapped bytes E8 63 C5 FD FF: call 0x40197e
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes 66 8B 4D 14: mov cx, word ptr [ebp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 4D B4: mov word ptr [ebp - 0x4c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xb4
        mov edx, dword ptr [ebp + 18h]
        push edx
        lea eax, [ebp - 54h]
        push eax
        lea ecx, [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 40c78h]
        ; Exact mapped bytes E8 99 C2 FD FF: call 0x4016e5
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xc2
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 59 FF FF FF: jmp 0x4253aa
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 98h
        cmp ebp, esp
        ; Exact mapped bytes E8 8A F9 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
