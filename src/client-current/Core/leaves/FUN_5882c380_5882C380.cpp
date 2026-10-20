// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882C380 .. +0xB4 bytes.
extern "C" __declspec(naked) void FUN_5882c380_5882C380() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], -1
        ; Exact mapped bytes 74 33: je 0x5882c3c5
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 74 13: je 0x5882c3ae
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes E8 C3 12 00 00: call 0x5882d670
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 58 45 89 58: call dword ptr [0x58894558]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 40h], 0
        ; Exact mapped bytes 74 62: je 0x5882c430
        __asm _emit 0x74
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 3C: je 0x5882c41f
        __asm _emit 0x74
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax - 4], 0
        ; Exact mapped bytes 74 13: je 0x5882c3ff
        __asm _emit 0x74
        __asm _emit 0x13
        push 3
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 18: jmp 0x5882c417
        __asm _emit 0xeb
        __asm _emit 0x18
        push 4
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 4
        push ecx
        ; Exact mapped bytes E8 77 57 00 00: call 0x58831b84
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 07: jmp 0x5882c426
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 40h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
