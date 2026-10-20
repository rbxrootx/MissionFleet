// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851D7E0 .. +0x15C bytes.
extern "C" __declspec(naked) void FUN_5851d7e0_5851D7E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588814e4h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 164h
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
        mov dword ptr [ebp - 160h], ecx
        mov eax, dword ptr [ebp - 160h]
        mov dword ptr [ebp - 164h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 F4 C1 F8 FF: call 0x584a9a20
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 160h]
        add ecx, 18h
        ; Exact mapped bytes E8 3F FF FF FF: call 0x5851d780
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        push 104h
        push 0
        lea edx, [ebp - 114h]
        push edx
        ; Exact mapped bytes E8 B8 F5 32 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf5
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 114h]
        push eax
        push 104h
        ; Exact mapped bytes FF 15 A4 42 89 58: call dword ptr [0x588942a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        lea ecx, [ebp - 114h]
        push ecx
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 51 C2 F8 FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 160h]
        push edx
        push 588a40a4h
        lea eax, [ebp - 12ch]
        push eax
        lea ecx, [ebp - 15ch]
        push ecx
        ; Exact mapped bytes E8 6E 97 FA FF: call 0x584c7010
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x97
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 168h], eax
        mov edx, dword ptr [ebp - 168h]
        mov dword ptr [ebp - 16ch], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 16ch]
        push eax
        lea ecx, [ebp - 144h]
        push ecx
        ; Exact mapped bytes E8 62 78 FA FF: call 0x584c5130
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x78
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 170h], eax
        mov edx, dword ptr [ebp - 170h]
        push edx
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 37 7A FA FF: call 0x584c5320
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x7a
        __asm _emit 0xfa
        __asm _emit 0xff
        lea ecx, [ebp - 144h]
        ; Exact mapped bytes E8 3C C4 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xc4
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 15ch]
        ; Exact mapped bytes E8 2D C4 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xc4
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 1D C4 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xc4
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 160h]
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
        ; Exact mapped bytes E8 1A 37 31 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x37
        __asm _emit 0x31
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
