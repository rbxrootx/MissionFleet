// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AC570 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_586ac570_586AC570() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff8h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        sub esp, 188h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, 60h
        mov esi, dword ptr [ebx + 8]
        lea edi, [ebp - 188h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebx + 8]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 4C 0D 00: call 0x58781220
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x4c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B7 6D E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x6d
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, 60h
        lea esi, [ebp - 188h]
        mov edi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 80 F4 FF FF: call 0x586aba50
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
