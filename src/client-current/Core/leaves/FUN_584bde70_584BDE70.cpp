// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BDE70 .. +0x1EC bytes.
extern "C" __declspec(naked) void FUN_584bde70_584BDE70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 75 27: jne 0x584bdec0
        __asm _emit 0x75
        __asm _emit 0x27
        mov eax, dword ptr [ebp + 8]
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 91 31 37 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x31
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 10h], ecx
        mov eax, dword ptr [ebp + 8]
        mov edx, 10h
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 6A 31 37 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x31
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp + 8]
        shl ecx, 4
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        ; Exact mapped bytes E8 92 E9 38 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 80000000h
        push 58895998h
        ; Exact mapped bytes E8 E3 53 2F 00: call 0x587b3300
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x53
        __asm _emit 0x2f
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 75 2A: jne 0x584bdf50
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 18h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], 0
        ; Exact mapped bytes EB 64: jmp 0x584bdfb4
        __asm _emit 0xeb
        __asm _emit 0x64
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 00 43 89 58: call dword ptr [0x58894300]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes E8 D4 30 37 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x30
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 18h], edx
        push 0
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 5ch]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 74 1F: je 0x584bdfdc
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 7C 30 37 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x30
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0ch]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 76 0B: jbe 0x584bdff5
        __asm _emit 0x76
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 09: jmp 0x584bdffe
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 24h], eax
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 24h]
        mov edx, 4
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 20 30 37 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x30
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [edx + 20h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        shl edx, 2
        push edx
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 C7 ED 38 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xed
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 28h], 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
