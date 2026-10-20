// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878B630 .. +0xF8 bytes.
extern "C" __declspec(naked) void FUN_5878b630_5878B630() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 114h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 108h], ecx
        ; Exact mapped bytes E8 A2 BB D4 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xbb
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0B DC D2 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xdc
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 05: jne 0x5878b662
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x5878b718
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 104h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 F4 F3 FF FF: call 0x5878aa70
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 88 F4 FF FF: call 0x5878ab10
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 10ch], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 F4 A9 CF FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xa9
        __asm _emit 0xcf
        __asm _emit 0xff
        lea ecx, [ebp - 104h]
        push ecx
        push 32h
        push 12ch
        mov edx, dword ptr [ebp - 108h]
        push edx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 99 D4 FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x99
        __asm _emit 0xd4
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 09 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x09
        __asm _emit 0xd0
        __asm _emit 0xff
        sub eax, 16h
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 B2 CF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xb2
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        mov eax, dword ptr [ebp - 110h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 9F 02 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 A7 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xa7
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 2E 59 0A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x59
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
