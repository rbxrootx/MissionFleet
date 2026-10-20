// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004128E0 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_004128e0_004128E0() {
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
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4E EF FE FF: call 0x401857
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 9B EF FE FF: call 0x4018b6
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 0
        lea edx, [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 1B E7 FE FF: call 0x401050
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 9B EC FE FF: call 0x4015dc
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], 0
        pop edi
        pop esi
        pop ebx
        add esp, 4ch
        cmp ebp, esp
        ; Exact mapped bytes E8 98 24 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
