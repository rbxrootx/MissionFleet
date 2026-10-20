// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58685060 .. +0xDF bytes.
extern "C" __declspec(naked) void FUN_58685060_58685060() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + eax*4 + 878h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 138h], 1
        imul edx, dword ptr [ebp + 8], 0d4h
        mov eax, dword ptr [ebp - 4]
        lea edi, [eax + edx + 1d8h]
        mov ecx, 35h
        mov esi, dword ptr [ebp + 14h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        imul ecx, dword ptr [ebp + 8], 0d4h
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 288h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 118h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 9e0h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 14h]
        movzx ecx, word ptr [eax + 98h]
        add ecx, 37h
        push ecx
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 F9 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf9
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 62 1B E0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x1b
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 9c0h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 14h]
        movzx ecx, word ptr [eax + 98h]
        add ecx, 3bh
        push ecx
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A9 F9 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf9
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2A 1B E0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x1b
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
