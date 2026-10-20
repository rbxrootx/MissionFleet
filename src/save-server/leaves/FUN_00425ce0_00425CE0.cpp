// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425CE0 .. +0x15C bytes.
extern "C" __declspec(naked) void FUN_00425ce0_00425CE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 9ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 9ch]
        mov ecx, 27h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        push 24h
        push 0
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 B0 FB 03 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xfb
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 24h
        push 0
        lea ecx, [ebp - 4ch]
        push ecx
        ; Exact mapped bytes E8 A0 FB 03 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xfb
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 46 BA FD FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], -1
        ; Exact mapped bytes 75 07: jne 0x425d45
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E1 00 00 00: jmp 0x425e26
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 42 BD FD FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], -1
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x425e21
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 E4 B8 FD FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes EB 09: jmp 0x425d8f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 5ch]
        add edx, 1
        mov dword ptr [ebp - 5ch], edx
        cmp dword ptr [ebp - 58h], -1
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x425e21
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 AF B8 FD FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], -1
        ; Exact mapped bytes 74 64: je 0x425e1c
        __asm _emit 0x74
        __asm _emit 0x64
        push 24h
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 36 BB FD FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xbb
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x425e18
        __asm _emit 0x74
        __asm _emit 0x44
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 3C: jne 0x425e16
        __asm _emit 0x75
        __asm _emit 0x3c
        mov dword ptr [ebp - 28h], 1
        push 24h
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 B8 BA FD FF: call 0x4018b1
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 4ch]
        push ecx
        lea edx, [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov ecx, dword ptr [ecx + 40c78h]
        ; Exact mapped bytes E8 CF B8 FD FF: call 0x4016e5
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 04: jmp 0x425e1c
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0A: jmp 0x425e26
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes E9 65 FF FF FF: jmp 0x425d86
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 9ch
        cmp ebp, esp
        ; Exact mapped bytes E8 BA EF 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
