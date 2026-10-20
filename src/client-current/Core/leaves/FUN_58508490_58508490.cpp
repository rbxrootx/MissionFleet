// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58508490 .. +0x1AE bytes.
extern "C" __declspec(naked) void FUN_58508490_58508490() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588807b8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 78h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 78h], 0
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 06 F0 F7 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf0
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 70h], 0
        lea eax, [ebp - 70h]
        push eax
        push 0
        ; Exact mapped bytes FF 15 08 41 89 58: call dword ptr [0x58894108]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        ; Exact mapped bytes E8 23 11 35 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x11
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        lea edx, [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        ; Exact mapped bytes FF 15 08 41 89 58: call dword ptr [0x58894108]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 E3 00 00 00: jne 0x585085ec
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 6ch], ecx
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 0F 84 D3 00 00 00: je 0x585085ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 40h
        push 0
        lea edx, [ebp - 50h]
        push edx
        ; Exact mapped bytes E8 EA 48 34 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x48
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 0ch
        mov eax, 1
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 6ch]
        movzx eax, byte ptr [edx + ecx + 194h]
        push eax
        mov ecx, 1
        shl ecx, 2
        mov edx, dword ptr [ebp - 6ch]
        movzx eax, byte ptr [edx + ecx + 194h]
        push eax
        mov ecx, 1
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 6ch]
        movzx ecx, byte ptr [eax + edx + 194h]
        push ecx
        mov edx, 1
        shl edx, 1
        mov eax, dword ptr [ebp - 6ch]
        movzx ecx, byte ptr [eax + edx + 194h]
        push ecx
        mov edx, 1
        shl edx, 0
        mov eax, dword ptr [ebp - 6ch]
        movzx ecx, byte ptr [eax + edx + 194h]
        push ecx
        mov edx, 1
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 6ch]
        movzx edx, byte ptr [ecx + eax + 194h]
        push edx
        push 588a3a80h
        push 40h
        lea eax, [ebp - 50h]
        push eax
        ; Exact mapped bytes E8 F0 45 00 00: call 0x5850cba0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        lea ecx, [ebp - 50h]
        push ecx
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 11 15 FA FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x15
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea edx, [ebp - 68h]
        push edx
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 5E 35 00 00: call 0x5850bb30
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 52 17 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 6ch], ecx
        ; Exact mapped bytes E9 23 FF FF FF: jmp 0x5850850f
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 74h]
        push edx
        ; Exact mapped bytes E8 0B 10 35 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x10
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 4
        lea eax, [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E9 F7 F9 FF: call 0x584a7df0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 78h]
        or ecx, 1
        mov dword ptr [ebp - 78h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 BE EA FF FF: call 0x585070e0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 16 8A 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x8a
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
