// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C0DE0 .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_584c0de0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887ea44h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 24h
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
        cmp dword ptr [eax + 5f4h], 0
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x584c0ea8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 E5 01 37 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 3C: je 0x584c0e6e
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5f0h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D8 3C FC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes A1 00 06 96 58: mov eax, dword ptr [0x58960600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 24h], eax
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B7 14 FC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x14
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x584c0e75
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 5f4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5f4h]
        mov dword ptr [ebp - 2ch], ecx
        push 7ff8h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D9 4F FC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x4f
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5f4h]
        mov dword ptr [ebp - 30h], eax
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 1F 50 FC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
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
        ret 4
    }
}
