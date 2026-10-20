// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58780D00 .. +0xFB bytes.
extern "C" __declspec(naked) void FUN_58780d00_58780D00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 3B: je 0x58780d53
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x58780d4a
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58780d51
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB BF: jmp 0x58780d12
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 30h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        ; Exact mapped bytes E8 3A 5C D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x5c
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x58780d96
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1D B3 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb3
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 44: je 0x58780de0
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3C B1 D0 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xb1
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 31: je 0x58780dde
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x58780dd0
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 28h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58780dd7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB AB: jmp 0x58780d8b
        __asm _emit 0xeb
        __asm _emit 0xab
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        ; Exact mapped bytes E8 85 0C DE FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 20h
        ; Exact mapped bytes E8 7A 0C DE FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x0c
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
