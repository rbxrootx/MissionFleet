// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00439230 .. +0x219 bytes.
extern "C" __declspec(naked) void FUN_00439230_00439230() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3a0h
        push esi
        push edi
        lea edi, [ebp - 3a0h]
        mov ecx, 0e8h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        push 5b5f38h
        ; Exact mapped bytes E8 F2 01 00 00: call 0x439449
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 5b5f48h
        ; Exact mapped bytes E8 E5 01 00 00: call 0x439449
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 74h
        push 0
        lea eax, [ebp - 74h]
        push eax
        ; Exact mapped bytes E8 FC 00 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 74h], edx
        mov dword ptr [ebp - 6ch], 3
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 50h], ecx
        mov dword ptr [ebp - 48h], 3
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 5ch], eax
        mov dword ptr [ebp - 54h], 3
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 0F 84 79 01 00 00: je 0x439436
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        ; Exact mapped bytes 8B 15 60 30 5D 00: mov edx, dword ptr [0x5d3060]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes A1 5C 30 5D 00: mov eax, dword ptr [0x5d305c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 74h]
        push edx
        mov edi, esp
        ; Exact mapped bytes FF 15 30 24 5E 00: call dword ptr [0x5e2430]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp edi, esp
        ; Exact mapped bytes E8 F9 F4 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov edi, esp
        ; Exact mapped bytes FF 15 48 24 5E 00: call dword ptr [0x5e2448]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp edi, esp
        ; Exact mapped bytes E8 E9 F4 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 14ch
        ; Exact mapped bytes FF 15 58 30 5D 00: call dword ptr [0x5d3058]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D6 F4 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x439313
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 23 01 00 00: jmp 0x439436
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 75 05: jne 0x43931e
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 18 01 00 00: jmp 0x439436
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        push 5b5f5ch
        ; Exact mapped bytes E8 19 01 00 00: call 0x439449
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 28ch]
        mov dword ptr [ebp - 294h], edx
        mov eax, dword ptr [ebp - 294h]
        mov dword ptr [eax], 218h
        mov ecx, dword ptr [ebp - 294h]
        mov dword ptr [ecx + 10h], 200h
        mov dword ptr [ebp - 290h], 0
        mov esi, esp
        mov edx, dword ptr [ebp - 294h]
        push edx
        lea eax, [ebp - 290h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov edi, esp
        ; Exact mapped bytes FF 15 48 24 5E 00: call dword ptr [0x5e2448]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp edi, esp
        ; Exact mapped bytes E8 5B F4 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 64 30 5D 00: call dword ptr [0x5d3064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4D F4 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x4393b7
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 290h]
        push edx
        mov eax, dword ptr [ebp - 294h]
        add eax, 14h
        push eax
        push 5b5f6ch
        ; Exact mapped bytes E8 97 00 00 00: call 0x439449
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 7A: jmp 0x439431
        __asm _emit 0xeb
        __asm _emit 0x7a
        ; Exact mapped bytes 8A 0D 6C 32 5D 00: mov cl, byte ptr [0x5d326c]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x32
        __asm _emit 0x5d
        __asm _emit 0x00
        mov byte ptr [ebp - 39ch], cl
        mov ecx, 40h
        xor eax, eax
        lea edi, [ebp - 39bh]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        mov dword ptr [ebp - 298h], 0
        mov dword ptr [ebp - 3a0h], 0
        lea edx, [ebp - 3a0h]
        push edx
        lea eax, [ebp - 298h]
        push eax
        push 104h
        lea ecx, [ebp - 39ch]
        push ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        ; Exact mapped bytes E8 BE FB FF FF: call 0x438fca
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        lea eax, [ebp - 39ch]
        push eax
        mov ecx, dword ptr [ebp - 3a0h]
        push ecx
        mov edx, dword ptr [ebp - 298h]
        push edx
        push 5b5f74h
        ; Exact mapped bytes E8 1B 00 00 00: call 0x439449
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E9 7A FE FF FF: jmp 0x4392b0
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 3a0h
        cmp ebp, esp
        ; Exact mapped bytes E8 9B F3 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf3
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
