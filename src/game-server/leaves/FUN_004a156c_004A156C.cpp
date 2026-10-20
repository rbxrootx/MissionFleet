// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A156C .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_004a156c_004A156C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 12 B7 0A 00: call 0x54cc8f
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xb7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AE B7 0A 00: call 0x54cd33
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xb7
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 0D: je 0x4a1597
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 A1 B7 0A 00: call 0x54cd33
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xb7
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 1B: jne 0x4a15b2
        __asm _emit 0x75
        __asm _emit 0x1b
        push 2
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 A3 B7 0A 00: call 0x54cd44
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xb7
        __asm _emit 0x0a
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 32 B7 0A 00: call 0x54ccdf
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xb7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 59: jmp 0x4a160b
        __asm _emit 0xeb
        __asm _emit 0x59
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 79 B7 0A 00: call 0x54cd33
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb7
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 0D: je 0x4a15cc
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 6C B7 0A 00: call 0x54cd33
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xb7
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 1B: jne 0x4a15e7
        __asm _emit 0x75
        __asm _emit 0x1b
        push 1
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 6E B7 0A 00: call 0x54cd44
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb7
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FD B6 0A 00: call 0x54ccdf
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xb6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 24: jmp 0x4a160b
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes DD 02: fld qword ptr [edx]
        __asm _emit 0xdd
        __asm _emit 0x02
        ; Exact mapped bytes DC 00: fadd qword ptr [eax]
        __asm _emit 0xdc
        __asm _emit 0x00
        ; Exact mapped bytes DD 5D F4: fstp qword ptr [ebp - 0xc]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf4
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 25 04 00 00: call 0x4a1a21
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D7 B6 0A 00: call 0x54ccdf
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xb6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
