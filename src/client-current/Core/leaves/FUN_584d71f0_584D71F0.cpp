// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D71F0 .. +0xD7 bytes.
extern "C" __declspec(naked) void FUN_584d71f0_584D71F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f537h
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
        ; Exact mapped bytes 83 3D 84 BF 90 58 00: cmp dword ptr [0x5890bf84], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 91 00 00 00: jne 0x584d72b3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0b8h
        ; Exact mapped bytes E8 D8 9D 35 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x9d
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 1F: je 0x584d725e
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40h
        push 0
        push 0
        push 11ch
        push 11fh
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 07 DF FF FF: call 0x584d5160
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x584d7265
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 89 0D 84 BF 90 58: mov dword ptr [0x5890bf84], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes 8B 0D 84 BF 90 58: mov ecx, dword ptr [0x5890bf84]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 ED FA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xed
        __asm _emit 0xfa
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 84 BF 90 58: mov ecx, dword ptr [0x5890bf84]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B EB FA FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xeb
        __asm _emit 0xfa
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 84 BF 90 58: mov ecx, dword ptr [0x5890bf84]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E EB FA FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xeb
        __asm _emit 0xfa
        __asm _emit 0xff
        push 7fffh
        ; Exact mapped bytes 8B 0D 84 BF 90 58: mov ecx, dword ptr [0x5890bf84]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE EB FA FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xeb
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes A1 84 BF 90 58: mov eax, dword ptr [0x5890bf84]
        __asm _emit 0xa1
        __asm _emit 0x84
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
