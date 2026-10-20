// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58750F30 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_58750f30() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 14h]
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 58h]
        mov ebx, dword ptr [eax + 50h]
        push edi
        mov edi, dword ptr [ebx]
        lea ecx, [esp + 10h]
        push ecx
        push ebp
        add edi, 4
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov edx, dword ptr [edi]
        push eax
        push ebp
        mov ecx, ebx
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 14h]
        mov edi, dword ptr [esi + 50h]
        lea edx, [ecx + eax + 0eh]
        mov ecx, dword ptr [esi + 18h]
        mov dword ptr [esi + 1ch], edx
        mov edx, dword ptr [esp + 14h]
        lea ecx, [ecx + edx + 6]
        mov dword ptr [esi + 20h], ecx
        ; Exact mapped bytes 8B 15 20 85 A2 58: mov edx, dword ptr [0x58a28520]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, edi
        sub ecx, eax
        mov eax, dword ptr [edx + 60h]
        cdq
        sub eax, edx
        sar eax, 1
        cmp ecx, eax
        ; Exact mapped bytes 7D 02: jge 0x58750f93
        __asm _emit 0x7d
        __asm _emit 0x02
        mov ecx, edi
        mov eax, dword ptr [esi + 54h]
        sub eax, 5
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 EE 22 1B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x22
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 58h]
        push ebp
        ; Exact mapped bytes E8 35 0D FE FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x0d
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
