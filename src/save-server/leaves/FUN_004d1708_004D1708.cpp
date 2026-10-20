// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D1708 .. +0x10B bytes.
extern "C" __declspec(naked) void FUN_004d1708_004D1708() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 5F EA 06 00: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xea
        __asm _emit 0x06
        __asm _emit 0x00
        add eax, 58h
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes E8 5C 03 06 00: call 0x531a7d
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 28: jne 0x4d1752
        __asm _emit 0x75
        __asm _emit 0x28
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 22: jne 0x4d1752
        __asm _emit 0x75
        __asm _emit 0x22
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 1C: jne 0x4d1752
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 671d6ch
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 26: jmp 0x4d1778
        __asm _emit 0xeb
        __asm _emit 0x26
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 671d78h
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 1ch
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 E4 BE 68 00: call dword ptr [0x68bee4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x4d17b5
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 2ch]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 14: je 0x4d17aa
        __asm _emit 0x74
        __asm _emit 0x14
        push 556h
        push 671a64h
        ; Exact mapped bytes E8 9B 75 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d17aa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x4d178e
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes EB 55: jmp 0x4d180a
        __asm _emit 0xeb
        __asm _emit 0x55
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes A1 00 BF 68 00: mov eax, dword ptr [0x68bf00]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 2ch]
        push ecx
        ; Exact mapped bytes E8 8F FD FF FF: call 0x4d158d
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4d1807
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 70 7D 01 00: call 0x4e9577
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
