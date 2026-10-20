// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004121C0 .. +0x154 bytes.
extern "C" __declspec(naked) void FUN_004121c0_004121C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 5ch]
        mov ecx, 17h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        push ecx
        ; Exact mapped bytes E8 87 F8 11 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf8
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 7C: call dword ptr [eax + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 F0 2B 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E3 EF FE FF: call 0x4011ea
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        ; Exact mapped bytes E8 5D F8 11 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf8
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 C6 2B 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        add ecx, 114h
        ; Exact mapped bytes E8 DF 34 0A 00: call 0x4b5716
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c28h]
        mov edx, dword ptr [ecx + 0ca0h]
        push edx
        ; Exact mapped bytes E8 24 F8 11 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf8
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 8D 2B 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 78 F7 FE FF: call 0x4019e2
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c28h]
        mov edx, dword ptr [ecx + 0ca0h]
        push edx
        ; Exact mapped bytes E8 F1 F7 11 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf7
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 5A 2B 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        add ecx, 9ch
        ; Exact mapped bytes E8 73 34 0A 00: call 0x4b5716
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40cbch]
        push ecx
        ; Exact mapped bytes E8 BE F7 11 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xf7
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 50 7C: call dword ptr [eax + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 27 2B 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EF F1 FE FF: call 0x4014bf
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 40cbch]
        push edx
        ; Exact mapped bytes E8 91 F7 11 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xf7
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 FA 2A 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x2a
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        add ecx, 0d8h
        ; Exact mapped bytes E8 13 34 0A 00: call 0x4b5716
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 5ch
        cmp ebp, esp
        ; Exact mapped bytes E8 E0 2A 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x2a
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
