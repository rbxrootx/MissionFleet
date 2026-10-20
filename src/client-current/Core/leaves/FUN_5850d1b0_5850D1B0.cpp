// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850D1B0 .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_5850d1b0_5850D1B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx]
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A5 0F 00 00: call 0x5850e180
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        lea edx, [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 7F 65 F9 FF: call 0x584a3770
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 22 54 F9 FF: call 0x584a2620
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x54
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 25: je 0x5850d22a
        __asm _emit 0x74
        __asm _emit 0x25
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 F3 54 F9 FF: call 0x584a2700
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x54
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], edx
        push 3c8h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 6B F6 33 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf6
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 58: jmp 0x5850d282
        __asm _emit 0xeb
        __asm _emit 0x58
        push 3c8h
        ; Exact mapped bytes E8 D0 3D 32 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x3d
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 0ch], edx
        push 3c8h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 3E F6 33 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf6
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 72 F9 FF FF: call 0x5850cbe0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        lea ecx, [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 BF FC FF FF: call 0x5850cf40
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
