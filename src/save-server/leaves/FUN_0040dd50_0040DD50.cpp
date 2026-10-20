// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040DD50 .. +0x24E bytes.
extern "C" __declspec(naked) void FUN_0040dd50_0040DD50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 154h
        push ebx
        push esi
        push edi
        lea edi, [ebp - 154h]
        mov ecx, 55h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        push 633524h
        ; Exact mapped bytes E8 5D 3A FF FF: call 0x4017d5
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 B0 3A FF FF: call 0x40183e
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        push 633504h
        ; Exact mapped bytes E8 33 3A FF FF: call 0x4017d5
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 110h]
        push eax
        lea ecx, [ebp - 10ch]
        push ecx
        push 104h
        lea edx, [ebp - 108h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        ; Exact mapped bytes E8 F0 35 FF FF: call 0x4013bb
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        lea edx, [ebp - 108h]
        push edx
        mov eax, dword ptr [ebp - 110h]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        push 6334d8h
        ; Exact mapped bytes E8 E1 39 FF FF: call 0x4017d5
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 114h], edx
        push 6334c8h
        ; Exact mapped bytes E8 C8 39 FF FF: call 0x4017d5
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 9ch]
        push ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 0a8h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 0ach]
        push ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 0b0h]
        push edx
        push 633484h
        ; Exact mapped bytes E8 6D 39 FF FF: call 0x4017d5
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 0b8h]
        push ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 0bch]
        push eax
        push 63346ch
        ; Exact mapped bytes E8 46 39 FF FF: call 0x4017d5
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 0b4h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 0c4h]
        push ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 0c8h]
        push eax
        push 633448h
        ; Exact mapped bytes E8 12 39 FF FF: call 0x4017d5
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 8ch]
        push edx
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 90h]
        push ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 94h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 98h]
        push edx
        push 63341ch
        ; Exact mapped bytes E8 D1 38 FF FF: call 0x4017d5
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 0c0h]
        push ecx
        push 63340ch
        ; Exact mapped bytes E8 B7 38 FF FF: call 0x4017d5
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E8 C6 3A FF FF: call 0x4019ec
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x40df4f
        __asm _emit 0x75
        __asm _emit 0x25
        mov esi, esp
        push 6333d4h
        ; Exact mapped bytes FF 15 00 B8 68 00: call dword ptr [0x68b800]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B2 6E 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        push edx
        ; Exact mapped bytes E8 4C 3B FF FF: call 0x401a96
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB 3B: jmp 0x40df8a
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 114h]
        push eax
        ; Exact mapped bytes E8 7C 36 FF FF: call 0x4015d7
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, esp
        ; Exact mapped bytes FF 15 F0 B7 68 00: call dword ptr [0x68b7f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 83 6E 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push eax
        ; Exact mapped bytes FF 15 A8 4C 68 00: call dword ptr [0x684ca8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x4c
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 73 6E 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        push 6333d0h
        ; Exact mapped bytes E8 4E 38 FF FF: call 0x4017d5
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        pop edi
        pop esi
        pop ebx
        add esp, 154h
        cmp ebp, esp
        ; Exact mapped bytes E8 56 6E 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
