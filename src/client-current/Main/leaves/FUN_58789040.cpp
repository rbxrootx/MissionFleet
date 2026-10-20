// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58789040 .. +0xB4 bytes.
extern "C" __declspec(naked) void FUN_58789040() {
    __asm {
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 0ch]
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        push eax
        mov eax, dword ptr [esp + 10h]
        mov esi, ecx
        mov ecx, dword ptr [esp + 1ch]
        push ecx
        push edx
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 CC B9 FA FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xb9
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [esi], 58996b40h
        mov dword ptr [esi + 50h], 0
        mov dword ptr [esi + 54h], edi
        test edi, edi
        ; Exact mapped bytes 74 2A: je 0x587890a2
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [edi + 18h]
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [edi + 1ch]
        mov dword ptr [esi + 10h], edx
        mov eax, dword ptr [edi + 20h]
        mov dword ptr [esi + 14h], eax
        mov ecx, dword ptr [edi + 24h]
        mov dword ptr [esi + 18h], ecx
        mov edx, dword ptr [edi + 28h]
        mov dword ptr [esi + 1ch], edx
        mov eax, dword ptr [edi + 2ch]
        mov dword ptr [esi + 20h], eax
        movzx ecx, word ptr [edi + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x587890a4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, 80h
        cdq
        idiv ecx
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 82 3B 1F 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x3b
        __asm _emit 0x1f
        __asm _emit 0x00
        cdq
        mov ecx, 6
        idiv ecx
        mov dword ptr [esi + 60h], 0fffffffdh
        mov dword ptr [esi + 5ch], 1
        mov dword ptr [esi + 58h], 0
        mov dword ptr [esi + 2ch], 0fffffeffh
        mov eax, 0dfffh
        pop edi
        add dword ptr [esi + 64h], edx
        mov edx, 0bfffh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
