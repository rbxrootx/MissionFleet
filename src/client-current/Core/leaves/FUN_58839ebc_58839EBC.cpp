// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58839EBC .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_58839ebc_58839EBC() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, ecx
        push edi
        push 588f0cd0h
        lea edi, [esi + 28h]
        ; Exact mapped bytes E8 83 24 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push edi
        ; Exact mapped bytes E8 B3 01 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 B3 BC FF FF: call 0x58835b91
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes E8 28 BB FF FF: call 0x58835a0d
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        lea ecx, [esi + 22c4h]
        add esp, 14h
        mov dword ptr [esi + 4], eax
        push eax
        push 612h
        push 8b1h
        ; Exact mapped bytes E8 18 39 00 00: call 0x5883d81c
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 8], 0
        ; Exact mapped bytes 74 50: je 0x58839f5a
        __asm _emit 0x74
        __asm _emit 0x50
        push dword ptr [esi + 0ch]
        push dword ptr [esi + 8]
        push 588f0ce8h
        ; Exact mapped bytes E8 39 24 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push edi
        ; Exact mapped bytes E8 68 01 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 60 90 58: mov eax, dword ptr [0x589060d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        add esp, 10h
        push dword ptr [esi + 0ch]
        push dword ptr [esi + 8]
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x58839f40
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, 58967aa8h
        ; Exact mapped bytes E8 B9 03 00 00: call 0x5883a2f7
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x58839f5a
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x58839f5a
        __asm _emit 0x75
        __asm _emit 0x14
        push 588f0d08h
        ; Exact mapped bytes E8 03 24 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push edi
        ; Exact mapped bytes E8 33 01 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 588f0d24h
        ; Exact mapped bytes E8 EF 23 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push edi
        ; Exact mapped bytes E8 1F 01 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
