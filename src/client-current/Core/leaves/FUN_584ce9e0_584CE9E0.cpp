// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CE9E0 .. +0x149 bytes.
extern "C" __declspec(naked) void FUN_584ce9e0_584CE9E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f1fdh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 20h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7F 05: jg 0x584cea20
        __asm _emit 0x7f
        __asm _emit 0x05
        ; Exact mapped bytes E9 F8 00 00 00: jmp 0x584ceb18
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58898848h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 5F 90 2C 00: call 0x58797a90
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x2c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 10 FF FF FF: call 0x584ce950
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1ch], eax
        push 800h
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 20h
        push eax
        ; Exact mapped bytes E8 B7 E3 37 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xe3
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 7C 94 2C 00: call 0x58797ee0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x2c
        __asm _emit 0x00
        push eax
        mov ecx, 100h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 20h]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 5889884ch
        mov edx, 100h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 20h]
        push edx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x584ceaa5
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 18h], 0
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 09: jmp 0x584ceab7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 7D 46: jge 0x584ceb08
        __asm _emit 0x7d
        __asm _emit 0x46
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 66 94 2C 00: call 0x58797f30
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x94
        __asm _emit 0x2c
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 8
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 20h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 58898850h
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 8
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 20h]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x584ceb06
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 18h], edx
        ; Exact mapped bytes EB A6: jmp 0x584ceaae
        __asm _emit 0xeb
        __asm _emit 0xa6
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 D9 90 2C 00: call 0x58797bf0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x90
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
