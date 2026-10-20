// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58784840 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_58784840_58784840() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b5e8ch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 24: je 0x5878487f
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 8], eax
        push 180h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 C2 C7 0A 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xc7
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 74 24: je 0x587848ac
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 0ch], edx
        push 0b8h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 95 C7 0A 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc7
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 74 1F: je 0x587848d4
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 84 C7 0A 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 14h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 74 24: je 0x58784901
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 14h], eax
        push 0e0h
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 40 C7 0A 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xc7
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
