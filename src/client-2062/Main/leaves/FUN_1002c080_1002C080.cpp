// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002C080 .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_1002c080_1002C080() {
    __asm {
        push -1
        push 1016dc76h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        mov esi, ecx
        push 5f8ch
        mov eax, dword ptr [esi + 10h]
        test eax, eax
        ; Exact mapped bytes 75 5A: jne 0x1002c0ff
        __asm _emit 0x75
        __asm _emit 0x5a
        ; Exact mapped bytes E8 F6 06 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x06
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 10h], 0
        ; Exact mapped bytes 74 32: je 0x1002c0ef
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 1ch]
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push ecx
        mov ecx, dword ptr [esp + 38h]
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 BF B7 0B 00: call 0x100e78a0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xb7
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [esi + 10h], eax
        mov dword ptr [esi + 14h], eax
        mov dword ptr [esi + 0ch], eax
        mov dword ptr [esi + 18h], eax
        ; Exact mapped bytes EB 68: jmp 0x1002c157
        __asm _emit 0xeb
        __asm _emit 0x68
        xor eax, eax
        mov dword ptr [esi + 10h], eax
        mov dword ptr [esi + 14h], eax
        mov dword ptr [esi + 0ch], eax
        mov dword ptr [esi + 18h], eax
        ; Exact mapped bytes EB 58: jmp 0x1002c157
        __asm _emit 0xeb
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 06 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 10h], 1
        ; Exact mapped bytes 74 26: je 0x1002c13d
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 1ch]
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push edx
        mov edx, dword ptr [esp + 38h]
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 65 B7 0B 00: call 0x100e78a0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xb7
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1002c13f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 10h]
        mov dword ptr [ecx + 78h], eax
        mov eax, dword ptr [esi + 10h]
        mov edx, dword ptr [eax + 78h]
        mov dword ptr [edx + 74h], eax
        mov eax, dword ptr [esi + 10h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [esi + 10h], ecx
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esp + 8]
        inc eax
        mov dword ptr [esi + 8], eax
        mov eax, dword ptr [esi + 10h]
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
