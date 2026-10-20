// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EF43C .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_004ef43c_004EF43C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x4ef4f7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 9E 6E FE FF: call 0x4d62f5
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 98 BE 68 00: call dword ptr [0x68be98]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 40h], -1
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x4ef4f5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 0ch]
        sub ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 8]
        sub ecx, dword ptr [eax]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 1C 27 04 00: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x27
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4ch
        ; Exact mapped bytes E8 6F 28 04 00: call 0x531d26
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 E3 26 04 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x26
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 34 FA FF FF: call 0x4eeeff
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7E 0F: jle 0x4ef4e0
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7E 0F: jle 0x4ef4f5
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        add eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 21: jmp 0x4ef518
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F6 6D FE FF: call 0x4d62f5
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        and ah, 0fdh
        push eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 81 6D FE FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 98 BE 68 00: call dword ptr [0x68be98]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
