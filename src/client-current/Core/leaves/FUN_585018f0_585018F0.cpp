// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585018F0 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_585018f0_585018F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E7 7B FA FF: call 0x584a94f0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x7b
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 96 7D FA FF: call 0x584a96b0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x7d
        __asm _emit 0xfa
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x5850193e
        __asm _emit 0x74
        __asm _emit 0x1d
        mov byte ptr [ebp - 1], 0
        lea edx, [ebp - 1]
        push edx
        lea eax, [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2B F6 F9 FF: call 0x584a0f60
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xf6
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x585019f2
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3A 11 00 00: call 0x58502a80
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B2 18 FA FF: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x18
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 3]
        push ecx
        ; Exact mapped bytes E8 56 59 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x59
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 47 59 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x59
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 7A 06 FA FF: call 0x584a1ff0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x06
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 18h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 84 65 F8 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        push 5889517ch
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 E4 F4 FF FF: call 0x58500e90
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 39 1B FA FF: call 0x584a34f0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x1b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 EE 04 00 00: call 0x58501eb0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 49 18 FA FF: call 0x584a3220
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x18
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 2], 1
        lea ecx, [ebp - 2]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 F5 F9 FF: call 0x584a0f60
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf5
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
