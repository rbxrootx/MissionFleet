// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58834714 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_58834714_58834714() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, ecx
        cmp dword ptr [esi], -1
        ; Exact mapped bytes 75 07: jne 0x58834727
        __asm _emit 0x75
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 EF 00 00 00: jmp 0x58834816
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push edi
        lea ebx, [esi + 1020h]
        push ebx
        ; Exact mapped bytes FF 15 48 42 89 58: call dword ptr [0x58894248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [esi + 1440h]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x5883474d
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [esi + 1444h], eax
        mov eax, 588f00bch
        ; Exact mapped bytes 77 05: ja 0x58834752
        __asm _emit 0x77
        __asm _emit 0x05
        mov eax, 588f00bfh
        push eax
        movzx eax, word ptr [esi + 102eh]
        lea edi, [esi + 20h]
        push eax
        movzx eax, word ptr [esi + 102ch]
        push eax
        movzx eax, word ptr [esi + 102ah]
        push eax
        movzx eax, word ptr [esi + 1028h]
        push eax
        movzx eax, word ptr [esi + 1026h]
        push eax
        movzx eax, word ptr [esi + 1022h]
        push eax
        movzx eax, word ptr [ebx]
        push eax
        push 588f00c0h
        ; Exact mapped bytes E8 45 7F 00 00: call 0x5883c6d9
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push edi
        ; Exact mapped bytes E8 C4 83 CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x83
        __asm _emit 0xcd
        __asm _emit 0xff
        push edi
        ; Exact mapped bytes E8 DE C9 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 2ch
        mov ebx, eax
        cmp dword ptr [esi + 143ch], 0
        ; Exact mapped bytes 74 21: je 0x588347d1
        __asm _emit 0x74
        __asm _emit 0x21
        test ebx, ebx
        ; Exact mapped bytes 7E 2F: jle 0x588347e3
        __asm _emit 0x7e
        __asm _emit 0x2f
        mov ecx, edi
        mov edx, ebx
        add dword ptr [esi + 143ch], 2
        mov eax, dword ptr [esi + 143ch]
        add al, 43h
        xor byte ptr [ecx], al
        inc ecx
        sub edx, 1
        ; Exact mapped bytes 75 E9: jne 0x588347b8
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes EB 12: jmp 0x588347e3
        __asm _emit 0xeb
        __asm _emit 0x12
        push edi
        push edi
        lea eax, [esi + 1034h]
        push ebx
        push eax
        ; Exact mapped bytes E8 9D A1 00 00: call 0x5883e97d
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        cmp dword ptr [esi + 1440h], 3e7h
        ; Exact mapped bytes 74 10: je 0x588347ff
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        lea eax, [ebp - 4]
        push eax
        push ebx
        push edi
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 30 41 89 58: call dword ptr [0x58894130]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        or dword ptr [esi], 0ffffffffh
        mov al, 1
        pop edi
        pop ebx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
