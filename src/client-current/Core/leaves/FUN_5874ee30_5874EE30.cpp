// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874EE30 .. +0x103 bytes.
extern "C" __declspec(naked) void FUN_5874ee30_5874EE30() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888f8a7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 14h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b4ee4h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D3 3A 00 00: call 0x58752950
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 1a8h
        ; Exact mapped bytes E8 7C 21 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x21
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0D: je 0x5874eea8
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0D 64 FE FF: call 0x587352b0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5874eeaf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 0ch], edx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5874eed7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 7D 13: jge 0x5874eef0
        __asm _emit 0x7d
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4 + 0b50h], 0
        ; Exact mapped bytes EB DE: jmp 0x5874eece
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2c4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0cech], 1
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 62 5F 00 00: call 0x58754e80
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
