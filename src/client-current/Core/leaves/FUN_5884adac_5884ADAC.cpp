// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884ADAC .. +0x1B2 bytes.
extern "C" __declspec(naked) void FUN_5884adac_5884ADAC() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 1af34h]
        mov al, byte ptr [esi + 1af38h]
        mov byte ptr [ecx + esi + 19f2ch], al
        mov ecx, 0ffffh
        mov eax, dword ptr [esi + 1af50h]
        ; Exact mapped bytes 66 39 08: cmp word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x08
        ; Exact mapped bytes 75 07: jne 0x5884addd
        __asm _emit 0x75
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes E8 87 19 00 00: call 0x5884c763
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push ebx
        push edi
        lea eax, [esi + 0f90h]
        push eax
        push esi
        ; Exact mapped bytes E8 07 EF FF FF: call 0x58849cf3
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 0fach]
        push eax
        push esi
        ; Exact mapped bytes E8 FA EE FF FF: call 0x58849cf3
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        ; Exact mapped bytes E8 8E EE FF FF: call 0x58849c8d
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 1af3ch]
        add esp, 14h
        mov edx, dword ptr [esi + 1af40h]
        add ecx, 0ah
        mov ebx, dword ptr [ebp + 10h]
        add edx, 0ah
        add dword ptr [esi + 1af4ch], ebx
        shr ecx, 3
        shr edx, 3
        cmp edx, ecx
        mov dword ptr [ebp + 8], eax
        mov edi, edx
        lea eax, [ebx + 4]
        cmova edi, ecx
        cmp eax, edi
        ; Exact mapped bytes 77 44: ja 0x5884ae78
        __asm _emit 0x77
        __asm _emit 0x44
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 3E: je 0x5884ae78
        __asm _emit 0x74
        __asm _emit 0x3e
        mov edi, dword ptr [ebp + 14h]
        push 3
        push edi
        push esi
        ; Exact mapped bytes E8 E6 16 00 00: call 0x5884c52c
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1af48h]
        and dword ptr [esi + 1af48h], 0
        add eax, 0ah
        push 1
        shr eax, 3
        push ebx
        push dword ptr [ebp + 0ch]
        add eax, 4
        add eax, ebx
        add dword ptr [esi + 1af44h], eax
        push esi
        ; Exact mapped bytes E8 F7 F1 FF FF: call 0x5884a067
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x5884af08
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, edi
        mov edi, dword ptr [ebp + 14h]
        push 3
        ; Exact mapped bytes 75 29: jne 0x5884aeaa
        __asm _emit 0x75
        __asm _emit 0x29
        lea eax, [edi + 2]
        push eax
        push esi
        ; Exact mapped bytes E8 A1 16 00 00: call 0x5884c52c
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 0e7ch]
        push eax
        lea eax, [esi + 9fch]
        push eax
        push esi
        ; Exact mapped bytes E8 5B F0 FF FF: call 0x58849efa
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 1af40h]
        add esp, 18h
        ; Exact mapped bytes EB 3F: jmp 0x5884aee9
        __asm _emit 0xeb
        __asm _emit 0x3f
        lea eax, [edi + 4]
        push eax
        push esi
        ; Exact mapped bytes E8 78 16 00 00: call 0x5884c52c
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        inc eax
        push eax
        mov eax, dword ptr [esi + 0fc4h]
        inc eax
        push eax
        mov eax, dword ptr [esi + 0fa8h]
        inc eax
        push eax
        push esi
        ; Exact mapped bytes E8 89 15 00 00: call 0x5884c458
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 908h]
        push eax
        lea eax, [esi + 14h]
        push eax
        push esi
        ; Exact mapped bytes E8 1A F0 FF FF: call 0x58849efa
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 1af3ch]
        add esp, 28h
        mov ecx, dword ptr [esi + 1af48h]
        add eax, 3
        add ecx, eax
        mov eax, ecx
        shr eax, 3
        add dword ptr [esi + 1af44h], eax
        and ecx, 7
        mov dword ptr [esi + 1af48h], ecx
        mov ecx, dword ptr [esi + 1af44h]
        mov eax, dword ptr [esi + 1af48h]
        push 588c2448h
        lea eax, [eax + ecx*8]
        cmp eax, dword ptr [esi + 1af6ch]
        sete al
        movzx eax, al
        push eax
        push esi
        ; Exact mapped bytes E8 61 E6 FF FF: call 0x58849590
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        ; Exact mapped bytes E8 F2 03 00 00: call 0x5884b327
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        test edi, edi
        pop edi
        pop ebx
        ; Exact mapped bytes 74 0E: je 0x5884af4c
        __asm _emit 0x74
        __asm _emit 0x0e
        push esi
        ; Exact mapped bytes E8 7C EC FF FF: call 0x58849bc0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        add dword ptr [esi + 1af48h], 7
        pop ecx
        mov eax, dword ptr [esi + 1af48h]
        shr eax, 3
        add eax, dword ptr [esi + 1af44h]
        pop esi
        pop ebp
        ret
    }
}
