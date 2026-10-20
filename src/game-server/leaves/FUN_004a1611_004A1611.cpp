// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A1611 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_004a1611_004A1611() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 6D B6 0A 00: call 0x54cc8f
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 09 B7 0A 00: call 0x54cd33
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xb7
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 0D: je 0x4a163c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 FC B6 0A 00: call 0x54cd33
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xb6
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 1B: jne 0x4a1657
        __asm _emit 0x75
        __asm _emit 0x1b
        push 2
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 FE B6 0A 00: call 0x54cd44
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xb6
        __asm _emit 0x0a
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D B6 0A 00: call 0x54ccdf
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xb6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 59: jmp 0x4a16b0
        __asm _emit 0xeb
        __asm _emit 0x59
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D4 B6 0A 00: call 0x54cd33
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xb6
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 0D: je 0x4a1671
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 C7 B6 0A 00: call 0x54cd33
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xb6
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 1B: jne 0x4a168c
        __asm _emit 0x75
        __asm _emit 0x1b
        push 1
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 C9 B6 0A 00: call 0x54cd44
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb6
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 58 B6 0A 00: call 0x54ccdf
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xb6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 24: jmp 0x4a16b0
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes DD 02: fld qword ptr [edx]
        __asm _emit 0xdd
        __asm _emit 0x02
        ; Exact mapped bytes DC 20: fsub qword ptr [eax]
        __asm _emit 0xdc
        __asm _emit 0x20
        ; Exact mapped bytes DD 5D F4: fstp qword ptr [ebp - 0xc]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf4
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 80 03 00 00: call 0x4a1a21
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 32 B6 0A 00: call 0x54ccdf
        __asm _emit 0xe8
        __asm _emit 0x32
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
