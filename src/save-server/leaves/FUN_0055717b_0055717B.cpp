// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055717B .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_0055717b_0055717B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 0deh
        push 67c630h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 C6 30 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x30
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x5571b7
        __asm _emit 0x75
        __asm _emit 0x14
        push 0dfh
        push 67c630h
        ; Exact mapped bytes E8 8E 1B FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x1b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5571b7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55719a
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0e0h
        push 67c630h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 90 30 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x30
        __asm _emit 0xf8
        __asm _emit 0xff
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F8 E2 FF FF: call 0x5554d4
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes 66 A1 34 71 68 00: mov ax, word ptr [0x687134]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A6 14 01 00: call 0x568697
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8E E8 FF FF: call 0x555a93
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 66 8B 15 40 71 68 00: mov dx, word ptr [0x687140]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7C 14 01 00: call 0x568697
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 73 E4 FF FF: call 0x55569a
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 4F: je 0x55727c
        __asm _emit 0x74
        __asm _emit 0x4f
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FF E5 FF FF: call 0x555838
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x55727c
        __asm _emit 0x74
        __asm _emit 0x3f
        push 0
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes 66 A1 3C 71 68 00: mov ax, word ptr [0x68713c]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 45 14 01 00: call 0x568697
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2D E8 FF FF: call 0x555a93
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 66 8B 15 44 71 68 00: mov dx, word ptr [0x687144]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1B 14 01 00: call 0x568697
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
