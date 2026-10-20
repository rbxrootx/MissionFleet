// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A3DC .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_5883a3dc_5883A3DC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        ; Exact mapped bytes E8 59 1E 00 00: call 0x5883c240
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes E8 59 C6 FF FF: call 0x58836a4c
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 1], al
        movzx eax, byte ptr [ebp - 1]
        test eax, eax
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x5883a49e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588f0158h
        ; Exact mapped bytes E8 47 1F 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push 588f0170h
        ; Exact mapped bytes E8 C1 22 00 00: call 0x5883c6d9
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes FF 15 E0 42 89 58: call dword ptr [0x588942e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF 15 DC 42 89 58: call dword ptr [0x588942dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 6E: je 0x5883a49e
        __asm _emit 0x74
        __asm _emit 0x6e
        lea eax, [ebp - 2]
        push eax
        push 0
        push 0
        push 14h
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        test eax, eax
        ; Exact mapped bytes 7C 34: jl 0x5883a475
        __asm _emit 0x7c
        __asm _emit 0x34
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1C: je 0x5883a466
        __asm _emit 0x74
        __asm _emit 0x1c
        push 588f0180h
        ; Exact mapped bytes E8 FF 1E 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 26 FC FF FF: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        lea eax, [ebp - 2]
        push eax
        push 0
        push 1
        push 14h
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes EB 29: jmp 0x5883a49e
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1C: je 0x5883a49a
        __asm _emit 0x74
        __asm _emit 0x1c
        push 588f0194h
        ; Exact mapped bytes E8 CB 1E 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 F2 FB FF FF: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        and dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes E8 B7 1D 00 00: call 0x5883c25a
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
