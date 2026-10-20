// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831858 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_58831858_58831858() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 80 3D ED 66 96 58 00: cmp byte ptr [0x589666ed], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0xed
        __asm _emit 0x66
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 04: je 0x58831868
        __asm _emit 0x74
        __asm _emit 0x04
        mov al, 1
        pop ebp
        ret
        push esi
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 74 05: je 0x58831875
        __asm _emit 0x74
        __asm _emit 0x05
        cmp esi, 1
        ; Exact mapped bytes 75 62: jne 0x588318d7
        __asm _emit 0x75
        __asm _emit 0x62
        ; Exact mapped bytes E8 B3 0D 00 00: call 0x5883262d
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x588318a4
        __asm _emit 0x74
        __asm _emit 0x26
        test esi, esi
        ; Exact mapped bytes 75 22: jne 0x588318a4
        __asm _emit 0x75
        __asm _emit 0x22
        push 589666f0h
        ; Exact mapped bytes E8 DD 43 03 00: call 0x58865c69
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x588318a0
        __asm _emit 0x75
        __asm _emit 0x0f
        push 589666fch
        ; Exact mapped bytes E8 CE 43 03 00: call 0x58865c69
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x588318cb
        __asm _emit 0x74
        __asm _emit 0x2b
        xor al, al
        ; Exact mapped bytes EB 30: jmp 0x588318d4
        __asm _emit 0xeb
        __asm _emit 0x30
        or ecx, 0ffffffffh
        ; Exact mapped bytes 89 0D F0 66 96 58: mov dword ptr [0x589666f0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x66
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 0D F4 66 96 58: mov dword ptr [0x589666f4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x66
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 0D F8 66 96 58: mov dword ptr [0x589666f8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x66
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 0D FC 66 96 58: mov dword ptr [0x589666fc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x66
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 0D 00 67 96 58: mov dword ptr [0x58966700], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 0D 04 67 96 58: mov dword ptr [0x58966704], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes C6 05 ED 66 96 58 01: mov byte ptr [0x589666ed], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0xed
        __asm _emit 0x66
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        mov al, 1
        pop esi
        pop ebp
        ret
        push 5
        ; Exact mapped bytes E8 5B 0D 00 00: call 0x58832639
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
