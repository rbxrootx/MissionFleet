// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58814750 .. +0x2B7 bytes.
extern "C" __declspec(naked) void FUN_58814750() {
    __asm {
        sub esp, 0ch
        push ebx
        push ebp
        push esi
        push edi
        push 5899d748h
        mov esi, ecx
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 68h]
        add esp, 4
        mov ebx, eax
        push ebx
        ; Exact mapped bytes E8 6E D5 F1 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xd5
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [esi + 68h]
        mov eax, dword ptr [eax + 50h]
        mov ebp, dword ptr [eax]
        ; Exact mapped bytes 8B 3D A8 C1 98 58: mov edi, dword ptr [0x5898c1a8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        lea ecx, [esp + 14h]
        push ecx
        push ebx
        mov dword ptr [esp + 18h], eax
        add ebp, 4
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [ebp]
        push eax
        push ebx
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 109h
        push ecx
        mov ecx, dword ptr [esi + 68h]
        ; Exact mapped bytes E8 29 EB 0E 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xeb
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        push 5898c922h
        ; Exact mapped bytes E8 1C D5 F1 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xd5
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [esi + 6ch]
        mov ebp, dword ptr [edx + 50h]
        mov ebx, dword ptr [ebp]
        lea eax, [esp + 14h]
        push eax
        push 5898c922h
        add ebx, 4
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, dword ptr [ebx]
        push eax
        push 5898c922h
        mov ecx, ebp
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 109h
        push ecx
        mov ecx, dword ptr [esi + 6ch]
        ; Exact mapped bytes E8 DB EA 0E 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xea
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        push 5898c922h
        ; Exact mapped bytes E8 CE D4 F1 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd4
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [esi + 70h]
        mov ebp, dword ptr [edx + 50h]
        mov ebx, dword ptr [ebp]
        lea eax, [esp + 14h]
        push eax
        push 5898c922h
        add ebx, 4
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, dword ptr [ebx]
        push eax
        push 5898c922h
        mov ecx, ebp
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esp + 14h]
        cdq
        mov ecx, dword ptr [esi + 4]
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 109h
        push ecx
        mov ecx, dword ptr [esi + 70h]
        ; Exact mapped bytes E8 8D EA 0E 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xea
        __asm _emit 0x0e
        __asm _emit 0x00
        push 5899d72ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 74h]
        add esp, 4
        mov ebx, eax
        push ebx
        ; Exact mapped bytes E8 74 D4 F1 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd4
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [esi + 74h]
        mov eax, dword ptr [edx + 50h]
        mov ebp, dword ptr [eax]
        mov dword ptr [esp + 10h], eax
        lea eax, [esp + 14h]
        push eax
        push ebx
        add ebp, 4
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [ebp]
        push eax
        push ebx
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 109h
        push ecx
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes E8 35 EA 0E 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xea
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        push 5898c922h
        ; Exact mapped bytes E8 28 D4 F1 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xd4
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [esi + 78h]
        mov ebp, dword ptr [edx + 50h]
        mov ebx, dword ptr [ebp]
        lea eax, [esp + 14h]
        push eax
        push 5898c922h
        add ebx, 4
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, dword ptr [ebx]
        push eax
        push 5898c922h
        mov ecx, ebp
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 109h
        push ecx
        mov ecx, dword ptr [esi + 78h]
        ; Exact mapped bytes E8 E7 E9 0E 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        push 5898c922h
        ; Exact mapped bytes E8 DA D3 F1 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xd3
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [esi + 7ch]
        mov ebp, dword ptr [edx + 50h]
        mov ebx, dword ptr [ebp]
        lea eax, [esp + 14h]
        push eax
        push 5898c922h
        add ebx, 4
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, dword ptr [ebx]
        push eax
        push 5898c922h
        mov ecx, ebp
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 109h
        push ecx
        mov ecx, dword ptr [esi + 7ch]
        ; Exact mapped bytes E8 99 E9 0E 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x00
        push 5899d710h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 80h]
        add esp, 4
        mov ebx, eax
        push ebx
        ; Exact mapped bytes E8 7D D3 F1 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd3
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [esi + 80h]
        mov eax, dword ptr [edx + 50h]
        mov ebp, dword ptr [eax]
        mov dword ptr [esp + 10h], eax
        lea eax, [esp + 14h]
        push eax
        push ebx
        add ebp, 4
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [ebp]
        push eax
        push ebx
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 109h
        push ecx
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes E8 38 E9 0E 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        push 5898c922h
        ; Exact mapped bytes E8 28 D3 F1 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xd3
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [esi + 84h]
        mov ebp, dword ptr [edx + 50h]
        mov ebx, dword ptr [ebp]
        lea eax, [esp + 14h]
        push eax
        push 5898c922h
        add ebx, 4
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, dword ptr [ebx]
        push eax
        push 5898c922h
        mov ecx, ebp
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 109h
        push ecx
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes E8 E1 E8 0E 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0ch
        ret
    }
}
