// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004095A6 .. +0x16C bytes.
extern "C" __declspec(naked) void FUN_004095a6_004095A6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 108h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 108h]
        mov ecx, 42h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 108h], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 908h], 1
        ; Exact mapped bytes 75 7F: jne 0x409656
        __asm _emit 0x75
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 11 0E 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 6E: je 0x409651
        __asm _emit 0x74
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 05 0E 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DE A9 FF FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 75 58: jne 0x409651
        __asm _emit 0x75
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EF 0D 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0d78h]
        cmp dword ptr [ecx + 0fch], 4
        ; Exact mapped bytes 75 41: jne 0x409651
        __asm _emit 0x75
        __asm _emit 0x41
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D8 0D 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E1 7C FF FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x40962f
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B4 7C FF FF: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1C: je 0x409651
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF 0D 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0d7ch]
        mov ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes E8 3A 8B 05 00: call 0x462189
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x8b
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB D3: jmp 0x409624
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x4096fd
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5a09f8h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 6C F1 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf1
        __asm _emit 0x09
        __asm _emit 0x00
        push 30h
        mov edx, dword ptr [ebp - 108h]
        add edx, 8
        push edx
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 38h
        ; Exact mapped bytes E8 38 79 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes E8 36 FD 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xfd
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 38h
        ; Exact mapped bytes E8 10 79 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 38h
        ; Exact mapped bytes E8 CA 0D 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 38h
        ; Exact mapped bytes E8 9B 0D 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 460h]
        push eax
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 45ch]
        push edx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 35 DB 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xdb
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 108h
        cmp ebp, esp
        ; Exact mapped bytes E8 D4 F0 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
