// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A08A .. +0x14B bytes.
extern "C" __declspec(naked) void FUN_5883a08a_5883A08A() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 100ch
        ; Exact mapped bytes E8 59 7A FF FF: call 0x58831af0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov esi, dword ptr [ebp + 8]
        cmp dword ptr [esi], -1
        ; Exact mapped bytes 75 07: jne 0x5883a0b1
        __asm _emit 0x75
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 15 01 00 00: jmp 0x5883a1c6
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1440h]
        mov ecx, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x5883a0d6
        __asm _emit 0x74
        __asm _emit 0x18
        cmp byte ptr [ecx], 21h
        ; Exact mapped bytes 74 13: je 0x5883a0d6
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [esi + 1444h]
        cmp edx, eax
        ; Exact mapped bytes 77 DD: ja 0x5883a0aa
        __asm _emit 0x77
        __asm _emit 0xdd
        lea eax, [edx + 1]
        mov dword ptr [esi + 1444h], eax
        push edi
        lea edi, [esi + 4]
        cmp dword ptr [edi + 18h], 0
        ; Exact mapped bytes 74 0A: je 0x5883a0ea
        __asm _emit 0x74
        __asm _emit 0x0a
        push edi
        ; Exact mapped bytes FF 15 20 42 89 58: call dword ptr [0x58894220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 0ch]
        push ebx
        lea eax, [ebp + 10h]
        push eax
        push 0
        push ecx
        lea eax, [ebp - 1004h]
        push -1
        push eax
        ; Exact mapped bytes E8 60 74 C7 FF: call 0x584b1560
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x74
        __asm _emit 0xc7
        __asm _emit 0xff
        add esp, 14h
        lea eax, [esi + 1020h]
        push eax
        ; Exact mapped bytes FF 15 48 42 89 58: call dword ptr [0x58894248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 1004h]
        push eax
        movzx eax, word ptr [esi + 102eh]
        lea ebx, [esi + 20h]
        push eax
        movzx eax, word ptr [esi + 102ch]
        push eax
        movzx eax, word ptr [esi + 102ah]
        push eax
        movzx eax, word ptr [esi + 1028h]
        push eax
        push 588f0118h
        ; Exact mapped bytes E8 95 25 00 00: call 0x5883c6d9
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push ebx
        ; Exact mapped bytes E8 14 2A CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x2a
        __asm _emit 0xcd
        __asm _emit 0xff
        push ebx
        ; Exact mapped bytes E8 2E 70 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 20h
        mov ecx, eax
        cmp dword ptr [esi + 143ch], 0
        mov dword ptr [ebp - 1008h], ecx
        ; Exact mapped bytes 74 24: je 0x5883a18a
        __asm _emit 0x74
        __asm _emit 0x24
        test ecx, ecx
        ; Exact mapped bytes 7E 38: jle 0x5883a1a2
        __asm _emit 0x7e
        __asm _emit 0x38
        mov edx, ebx
        mov edi, ecx
        add dword ptr [esi + 143ch], 2
        mov eax, dword ptr [esi + 143ch]
        add al, 43h
        xor byte ptr [edx], al
        inc edx
        sub edi, 1
        ; Exact mapped bytes 75 E9: jne 0x5883a16e
        __asm _emit 0x75
        __asm _emit 0xe9
        lea edi, [esi + 4]
        ; Exact mapped bytes EB 18: jmp 0x5883a1a2
        __asm _emit 0xeb
        __asm _emit 0x18
        push ebx
        push ebx
        push ecx
        lea eax, [esi + 1034h]
        push eax
        ; Exact mapped bytes E8 E4 47 00 00: call 0x5883e97d
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1008h]
        add esp, 10h
        push 0
        lea eax, [ebp - 100ch]
        push eax
        push ecx
        push ebx
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [edi + 18h], 0
        pop ebx
        ; Exact mapped bytes 74 07: je 0x5883a1c3
        __asm _emit 0x74
        __asm _emit 0x07
        push edi
        ; Exact mapped bytes FF 15 1C 42 89 58: call dword ptr [0x5889421c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov al, 1
        pop edi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 7F 6E FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
