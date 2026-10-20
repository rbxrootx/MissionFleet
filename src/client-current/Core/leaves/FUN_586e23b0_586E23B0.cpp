// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E23B0 .. +0xEE bytes.
extern "C" __declspec(naked) void FUN_586e23b0_586E23B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 28h]
        imul ecx, dword ptr [eax + 5f8h], 18h
        mov edx, dword ptr [ebp - 28h]
        lea eax, [edx + ecx + 57ch]
        mov ecx, 1
        imul edx, ecx, 0
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x586e2490
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1eh
        push 0
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 18 AA 16 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xaa
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 28h]
        imul eax, dword ptr [edx + 5f8h], 18h
        mov ecx, dword ptr [ebp - 28h]
        lea edx, [ecx + eax + 57ch]
        push edx
        push 588b25ach
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ecx + 150h]
        ; Exact mapped bytes E8 D0 E0 DE FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 150h]
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 38 A3 E0 FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C F1 DE FF: call 0x584d15f0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xf1
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 05 25 DA FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x25
        __asm _emit 0xda
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 2D: jne 0x586e2490
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 F1 DE FF: call 0x584d15f0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf1
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8B E0 DE FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe0
        __asm _emit 0xde
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 F1 DE FF: call 0x584d15f0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf1
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F1 A2 E0 FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xa2
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 B6 EB 14 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xeb
        __asm _emit 0x14
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
