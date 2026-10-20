// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58488F20 .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_58488f20_58488F20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58894d4ch
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58488f44
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 02: jge 0x58488f4c
        __asm _emit 0x7d
        __asm _emit 0x02
        ; Exact mapped bytes EB EF: jmp 0x58488f3b
        __asm _emit 0xeb
        __asm _emit 0xef
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 74 1F: je 0x58488f74
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 E4 80 3A 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x80
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0e8h], 0
        ; Exact mapped bytes 74 25: je 0x58488fa5
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 B6 80 3A 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x80
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e8h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0e0h], 0
        ; Exact mapped bytes 74 25: je 0x58488fd6
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e0h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 85 80 3A 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0e0h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0e4h], 0
        ; Exact mapped bytes 74 25: je 0x58489007
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e4h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 54 80 3A 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x80
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0e4h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
