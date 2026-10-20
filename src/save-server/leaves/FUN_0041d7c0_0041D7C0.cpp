// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D7C0 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_0041d7c0_0041D7C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 14h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40cc0h]
        ; Exact mapped bytes E8 FE 3C FE FF: call 0x4014ec
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40cc0h]
        ; Exact mapped bytes E8 EA 3C FE FF: call 0x4014ec
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x41d817
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 7D 13: jge 0x41d832
        __asm _emit 0x7d
        __asm _emit 0x13
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0D: je 0x41d832
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 07 40 FE FF: call 0x401834
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB DC: jmp 0x41d80e
        __asm _emit 0xeb
        __asm _emit 0xdc
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0C: je 0x41d844
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EC 3D FE FF: call 0x40162c
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x3d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x41d846
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 9D 75 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
