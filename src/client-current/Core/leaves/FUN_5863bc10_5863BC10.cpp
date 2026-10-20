// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5863BC10 .. +0x11A bytes.
extern "C" __declspec(naked) void FUN_5863bc10_5863BC10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5F F5 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf5
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AA 16 ED FF: call 0x5850d2f0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x16
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c4h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c4h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C3 8B 18 00: call 0x587c4830
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x8b
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes A1 F8 04 96 58: mov eax, dword ptr [0x589604f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 0c4h]
        ; Exact mapped bytes 72 5F: jb 0x5863bce2
        __asm _emit 0x72
        __asm _emit 0x5f
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 12 1D ED FF: call 0x5850d9a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x1d
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 0c4h]
        cmp eax, 0f4240h
        ; Exact mapped bytes 77 44: ja 0x5863bce2
        __asm _emit 0x77
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 18h], eax
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 8E E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FA 3A E6 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x3a
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ebp - 1ch], eax
        push 0ffffffh
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 01 A4 E4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xa4
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 42: jmp 0x5863bd24
        __asm _emit 0xeb
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 24h], edx
        push 25h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 8D E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B6 3A E6 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x3a
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 28h], edx
        push 0ffh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 BD A3 E4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xa3
        __asm _emit 0xe4
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
