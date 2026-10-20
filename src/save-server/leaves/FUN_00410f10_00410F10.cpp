// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00410F10 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_00410f10_00410F10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 4ch]
        mov ecx, 13h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x410f3f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18ch
        ; Exact mapped bytes E8 8A C2 09 00: call 0x4ad1d7
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc2
        __asm _emit 0x09
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7D 3B: jge 0x410f8d
        __asm _emit 0x7d
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18ch
        ; Exact mapped bytes E8 6C 94 09 00: call 0x4aa3d0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x94
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1E: je 0x410f8b
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 97 91 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB A9: jmp 0x410f36
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 4ch
        cmp ebp, esp
        ; Exact mapped bytes E8 51 3E 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x3e
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
