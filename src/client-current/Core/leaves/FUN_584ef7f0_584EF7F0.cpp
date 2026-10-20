// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EF7F0 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_584ef7f0_584EF7F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887fa94h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D C0 BF 90 58 00: cmp dword ptr [0x5890bfc0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 44: jne 0x584ef862
        __asm _emit 0x75
        __asm _emit 0x44
        push 48h
        ; Exact mapped bytes E8 DF 17 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x17
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0D: je 0x584ef845
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 60 EF FF FF: call 0x584ee7a0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ef84c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 89 0D C0 BF 90 58: mov dword ptr [0x5890bfc0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes A1 C0 BF 90 58: mov eax, dword ptr [0x5890bfc0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
