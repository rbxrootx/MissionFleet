// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EECD0 .. +0x13E bytes.
extern "C" __declspec(naked) void FUN_584eecd0_584EECD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 120h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10ch], ecx
        mov dword ptr [ebp - 108h], 0
        ; Exact mapped bytes EB 0F: jmp 0x584eed04
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 108h]
        add eax, 1
        mov dword ptr [ebp - 108h], eax
        mov ecx, dword ptr [ebp - 10ch]
        add ecx, 30h
        ; Exact mapped bytes E8 DE 26 00 00: call 0x584f13f0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 108h], eax
        ; Exact mapped bytes 0F 83 E2 00 00 00: jae 0x584eee00
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        add ecx, 30h
        mov dword ptr [ebp - 110h], ecx
        mov edx, dword ptr [ebp - 108h]
        push edx
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 61 FD FF FF: call 0x584eeaa0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 D5 1F 00 00: call 0x584f0d20
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 10ch]
        add eax, 30h
        mov dword ptr [ebp - 114h], eax
        mov ecx, dword ptr [ebp - 108h]
        push ecx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 33 FD FF FF: call 0x584eeaa0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 104h], 2
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x584eedfb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        push 0
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes E8 83 E0 35 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 10ch]
        add eax, 30h
        mov dword ptr [ebp - 118h], eax
        mov ecx, dword ptr [ebp - 108h]
        push ecx
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 EF FC FF FF: call 0x584eeaa0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        push 0
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 3C 0B 00 00: call 0x584ef900
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 120h], eax
        mov edx, dword ptr [ebp - 11ch]
        push edx
        mov eax, dword ptr [ebp - 120h]
        push eax
        push 588a253ch
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 04 43 89 58: call dword ptr [0x58894304]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 F5 FE FF FF: jmp 0x584eecf5
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 46 22 34 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x22
        __asm _emit 0x34
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
