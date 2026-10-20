// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850CD50 .. +0x103 bytes.
extern "C" __declspec(naked) void FUN_5850cd50_5850CD50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9F 64 F9 FF: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x64
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 43 A5 F7 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xa5
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        lea edx, [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8D 4A F9 FF: call 0x584a1810
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x4a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7C 4D F9 FF: call 0x584a1b20
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x4d
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x5850cdc8
        __asm _emit 0x74
        __asm _emit 0x1d
        mov byte ptr [ebp - 1], 0
        lea ecx, [ebp - 1]
        push ecx
        lea edx, [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A1 41 F9 FF: call 0x584a0f60
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x41
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x5850ce4d
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D0 63 F9 FF: call 0x584a31a0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x63
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 D6 A4 F7 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xa4
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 18h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 20 B1 F7 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xb1
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 19 FE FF FF: call 0x5850cc20
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 DE 66 F9 FF: call 0x584a34f0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x66
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 F3 55 F9 FF: call 0x584a2410
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x55
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EE 63 F9 FF: call 0x584a3220
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x63
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 2], 1
        lea eax, [ebp - 2]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 17 41 F9 FF: call 0x584a0f60
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x41
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
