// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00415DC0 .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_00415dc0_00415DC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 80h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 80h]
        mov ecx, 20h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov esi, dword ptr [ebp + 0ch]
        mov ecx, 0bh
        lea edi, [ebp - 30h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 42: jne 0x415e35
        __asm _emit 0x75
        __asm _emit 0x42
        ; Exact mapped bytes 0F BF 05 24 04 67 00: movsx eax, word ptr [0x670424]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x00
        add eax, 4
        push eax
        push 670388h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 C7 62 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x62
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2ch
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 D4 F4 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 158h]
        ; Exact mapped bytes E8 FF B1 FE FF: call 0x401046
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 160h]
        add ecx, 1
        mov edx, dword ptr [eax + 164h]
        adc edx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 160h], ecx
        mov dword ptr [eax + 164h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [edx + 40cbch]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 48h]
        mov dword ptr [edx + 40cbch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        mov edx, dword ptr [ecx + 40cbch]
        push edx
        ; Exact mapped bytes E8 D8 BB 11 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xbb
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 3ch]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 41 EF 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 09 B6 FE FF: call 0x4014bf
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        mov edx, dword ptr [ecx + 40cbch]
        push edx
        ; Exact mapped bytes E8 A8 BB 11 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xbb
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 11 EF 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        add ecx, 0d8h
        ; Exact mapped bytes E8 2A F8 09 00: call 0x4b5716
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf8
        __asm _emit 0x09
        __asm _emit 0x00
        push 0
        push 46ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AB BA FE FF: call 0x4019a6
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 65 B3 FE FF: call 0x401267
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 80h
        cmp ebp, esp
        ; Exact mapped bytes E8 D9 EE 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
