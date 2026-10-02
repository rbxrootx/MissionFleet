// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5853ADA0 .. +0x1D3 bytes.
extern "C" __declspec(naked) void FUN_5853ada0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 0ch], 80h
        lea eax, [ebp - 4]
        push eax
        push 0f003fh
        push 0
        push 588a71c0h
        push 80000002h
        ; Exact mapped bytes FF 15 20 40 89 58: call dword ptr [0x58894020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x5853adce
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0D: jmp 0x5853addb
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 44 40 89 58: call dword ptr [0x58894044]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 18 01 00 00: jne 0x5853aefd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 0ch]
        push edx
        push 589605c8h
        lea eax, [ebp - 8]
        push eax
        push 0
        push 588a71ech
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
        ; Exact mapped bytes 74 69: je 0x5853ae70
        __asm _emit 0x74
        __asm _emit 0x69
        push 588a71f0h
        push 589605c8h
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea edx, [ebp - 8]
        push edx
        lea eax, [ebp - 4]
        push eax
        push 0
        push 0f003fh
        push 0
        push 588a71fch
        push 0
        push 588a7200h
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 589605c8h
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 589605c8h
        push 1
        push 0
        push 588a722ch
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        lea ecx, [ebp - 0ch]
        push ecx
        push 589605e0h
        lea edx, [ebp - 8]
        push edx
        push 0
        push 588a7230h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 69: je 0x5853aefb
        __asm _emit 0x74
        __asm _emit 0x69
        push 588a7234h
        push 589605e0h
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 4]
        push edx
        push 0
        push 0f003fh
        push 0
        push 588a723ch
        push 0
        push 588a7240h
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 589605e0h
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 589605e0h
        push 1
        push 0
        push 588a726ch
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 67: jmp 0x5853af64
        __asm _emit 0xeb
        __asm _emit 0x67
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 61: jne 0x5853af64
        __asm _emit 0x75
        __asm _emit 0x61
        push 589605c8h
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 589605c8h
        push 1
        push 0
        push 588a7270h
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 589605e0h
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        push 589605e0h
        push 1
        push 0
        push 588a7274h
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
