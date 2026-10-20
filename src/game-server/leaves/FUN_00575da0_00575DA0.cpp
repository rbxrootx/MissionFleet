// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00575DA0 .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_00575da0_00575DA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 7bh
        ; Exact mapped bytes 75 5E: jne 0x575e2b
        __asm _emit 0x75
        __asm _emit 0x5e
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x575de2
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 36: jmp 0x575e18
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 BF 39 F3 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x39
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], esp
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 AB B1 F1 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xb1
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 9C 2A 5E 00: call dword ptr [0x5e2a9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 5C: jmp 0x575e87
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x575e40
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 36: jmp 0x575e76
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 61 39 F3 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x39
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], esp
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 4D B1 F1 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xb1
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 15 A0 2A 5E 00: call dword ptr [0x5e2aa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        lea esp, [ebp - 24h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
