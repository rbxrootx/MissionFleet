// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58584DC0 .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_58584dc0_58584DC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 20: je 0x58584def
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 8]
        add eax, 210h
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 FF BD 2C 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xbd
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x58584def
        __asm _emit 0x75
        __asm _emit 0x07
        mov al, 1
        ; Exact mapped bytes E9 FD 00 00 00: jmp 0x58584eec
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 14h], 80h
        mov dword ptr [ebp - 0ch], 0
        lea edx, [ebp - 4]
        push edx
        push 0f003fh
        push 0
        mov eax, dword ptr [ebp - 8]
        add eax, 0ah
        push eax
        push 80000002h
        ; Exact mapped bytes FF 15 20 40 89 58: call dword ptr [0x58894020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x58584e57
        __asm _emit 0x74
        __asm _emit 0x2b
        lea ecx, [ebp - 0ch]
        push ecx
        lea edx, [ebp - 4]
        push edx
        push 0
        push 0f003fh
        push 0
        push 588aaa1bh
        push 0
        mov eax, dword ptr [ebp - 8]
        add eax, 0ah
        push eax
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        push 0
        push 588aaa50h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x58584eb9
        __asm _emit 0x74
        __asm _emit 0x41
        lea edx, [ebp - 0ch]
        push edx
        lea eax, [ebp - 4]
        push eax
        push 0
        push 0f003fh
        push 0
        push 588aaa54h
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 4
        lea edx, [ebp - 10h]
        push edx
        push 4
        push 0
        push 588aaa58h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + 20ch]
        ; Exact mapped bytes 75 04: jne 0x58584ed6
        __asm _emit 0x75
        __asm _emit 0x04
        mov al, 1
        ; Exact mapped bytes EB 16: jmp 0x58584eec
        __asm _emit 0xeb
        __asm _emit 0x16
        push 10h
        push 588aaa5ch
        push 588aaa88h
        push 0
        ; Exact mapped bytes FF 15 6C 44 89 58: call dword ptr [0x5889446c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        xor al, al
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
