// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E04DA .. +0xE7 bytes.
extern "C" __declspec(naked) void FUN_004e04da_004E04DA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e6d4h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 16: je 0x4e0518
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [ebp + 10h], -1
        ; Exact mapped bytes 75 06: jne 0x4e050e
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7C 0A: jl 0x4e0518
        __asm _emit 0x7c
        __asm _emit 0x0a
        mov eax, 80004001h
        ; Exact mapped bytes E9 DE 00 00 00: jmp 0x4e05f6
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 41 14 05 00: call 0x531964
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 0A: jne 0x4e0536
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 80004001h
        ; Exact mapped bytes E9 C0 00 00 00: jmp 0x4e05f6
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 DE 51 02 00: call 0x50571f
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 01: je 0x4e0548
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x4e0541
        __asm _emit 0x75
        __asm _emit 0xf3
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x4e0555
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x4e054e
        __asm _emit 0x75
        __asm _emit 0xf3
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e0562
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 F3: jne 0x4e055b
        __asm _emit 0x75
        __asm _emit 0xf3
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 30: call dword ptr [eax + 0x30]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x30
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 48: jmp 0x4e05d5
        __asm _emit 0xeb
        __asm _emit 0x48
        push 584850h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F6 AA 01 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4e05af
        __asm _emit 0x75
        __asm _emit 0x11
        push 78h
        push 5cb14ch
        ; Exact mapped bytes E8 56 44 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e05af
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4e058d
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 DB A8 01 00: call 0x4fae98
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        test eax, eax
    }
}
