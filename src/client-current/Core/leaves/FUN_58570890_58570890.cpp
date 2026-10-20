// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58570890 .. +0xF2 bytes.
extern "C" __declspec(naked) void FUN_58570890_58570890() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 3ch], ecx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 30h
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 30h
        push ecx
        ; Exact mapped bytes 8B 0D 7C 75 94 58: mov ecx, dword ptr [0x5894757c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 FB FD FF: call 0x58550440
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x585708c7
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x58570972
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], 0
        push 30h
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 B3 BF 2D 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xbf
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x585708f2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 1
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp - 38h], 3
        ; Exact mapped bytes 7D 2A: jge 0x58570922
        __asm _emit 0x7d
        __asm _emit 0x2a
        lea edx, [ebp - 1ch]
        push edx
        imul eax, dword ptr [ebp - 38h], 18h
        mov ecx, dword ptr [ebp - 3ch]
        lea edx, [ecx + eax + 130h]
        push edx
        ; Exact mapped bytes E8 D0 02 2E 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x58570920
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 40h], 1
        ; Exact mapped bytes EB 02: jmp 0x58570922
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C7: jmp 0x585708e9
        __asm _emit 0xeb
        __asm _emit 0xc7
        lea eax, [ebp - 1ch]
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x5857096d
        __asm _emit 0x74
        __asm _emit 0x44
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 3E: je 0x5857096d
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 E5 E0 FF FF: call 0x5856ea20
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x5857096d
        __asm _emit 0x74
        __asm _emit 0x2e
        mov dword ptr [ebp - 48h], 20000h
        mov dword ptr [ebp - 44h], 50000h
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        push 80020a00h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 24 C0 2B 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc0
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        mov eax, 1
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 D4 06 2C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x2c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
