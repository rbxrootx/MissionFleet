// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875BD60 .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_5875bd60() {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 15ch]
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        push edi
        push eax
        lea edi, [esi + 4]
        push ecx
        push edx
        push ebx
        ; Exact mapped bytes E8 4E 0B 01 00: call 0x5876c8d0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [esp + 0ch], eax
        cmp eax, -1
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x5875be53
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DB 44 24 0C: fild dword ptr [esp + 0xc]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        push ebp
        ; Exact mapped bytes E8 F4 0E 22 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x22
        __asm _emit 0x00
        ; Exact mapped bytes E8 FF 0E 22 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x0e
        __asm _emit 0x22
        __asm _emit 0x00
        movzx ecx, word ptr [esi + 11ah]
        mov ebp, eax
        mov eax, dword ptr [esi + 15ch]
        push ebp
        push eax
        xor ecx, 0aah
        push ecx
        ; Exact mapped bytes E8 C2 01 01 00: call 0x5876bf80
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esp + 1ch], eax
        add esp, 0ch
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 4C 24 1C: fmul dword ptr [esp + 0x1c]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes E8 CE 0E 22 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x0e
        __asm _emit 0x22
        __asm _emit 0x00
        movzx edx, word ptr [ebx + 350h]
        mov ecx, dword ptr [esi + 198h]
        mov dword ptr [esi + 14ch], edx
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, dword ptr [eax + 10490h]
        add ebx, dword ptr [eax + 10488h]
        mov eax, dword ptr [esi + 184h]
        push eax
        push edi
        ; Exact mapped bytes E8 69 A8 17 00: call 0x588d6670
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xa8
        __asm _emit 0x17
        __asm _emit 0x00
        movzx ecx, word ptr [esi + 11ch]
        mov edx, dword ptr [esp + 20h]
        push eax
        mov eax, dword ptr [esi + 14ch]
        push ebp
        push 0
        push 320h
        push ecx
        mov ecx, dword ptr [esi + 148h]
        push -1
        push 2
        push edx
        mov edx, dword ptr [esp + 3ch]
        push 0
        push 0ch
        push eax
        mov eax, dword ptr [esi + 198h]
        push ecx
        mov ecx, dword ptr [edi + 4]
        push edx
        mov edx, dword ptr [edi]
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        push ebx
        ; Exact mapped bytes E8 0E 3F 09 00: call 0x587efd60
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x3f
        __asm _emit 0x09
        __asm _emit 0x00
        pop ebp
        pop edi
        pop esi
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
