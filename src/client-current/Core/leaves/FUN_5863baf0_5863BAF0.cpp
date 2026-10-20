// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5863BAF0 .. +0x11A bytes.
extern "C" __declspec(naked) void FUN_5863baf0_5863BAF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7F F6 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf6
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6A 17 ED FF: call 0x5850d290
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x17
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c8h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c8h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E3 8C 18 00: call 0x587c4830
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x8c
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
        cmp eax, dword ptr [ecx + 0c8h]
        ; Exact mapped bytes 72 5F: jb 0x5863bbc2
        __asm _emit 0x72
        __asm _emit 0x5f
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 02 1E ED FF: call 0x5850d970
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x1e
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 0c8h]
        cmp eax, 0f4240h
        ; Exact mapped bytes 77 44: ja 0x5863bbc2
        __asm _emit 0x77
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov dword ptr [ebp - 18h], eax
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 8F E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x8f
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1A 3C E6 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x3c
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 1ch], eax
        push 0ffffffh
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 21 A5 E4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xa5
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 42: jmp 0x5863bc04
        __asm _emit 0xeb
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 24h], edx
        push 25h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 8E E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D6 3B E6 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x3b
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 28h], edx
        push 0ffh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 DD A4 E4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xa4
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
