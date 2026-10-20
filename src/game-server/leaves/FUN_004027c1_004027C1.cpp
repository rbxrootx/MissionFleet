// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004027C1 .. +0x135 bytes.
extern "C" __declspec(naked) void FUN_004027c1_004027C1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1b8h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 1b8h]
        mov ecx, 6eh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 1b4h], ecx
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 10h], 194h
        ; Exact mapped bytes 0F 85 B1 00 00 00: jne 0x4028a7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes 8B 0D 00 78 5D 00: mov ecx, dword ptr [0x5d7800]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 BF 02 01 00: call 0x412acd
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        push 194h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        lea edx, [ebp - 1b0h]
        push edx
        ; Exact mapped bytes E8 FD 67 0A 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x67
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        mov esi, esp
        push eax
        push 5a02f4h
        lea ecx, [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 96 5F 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x5f
        __asm _emit 0x0a
        __asm _emit 0x00
        lea edx, [ebp - 1b0h]
        push edx
        mov eax, dword ptr [ebp - 1b4h]
        mov ecx, dword ptr [eax + 0d70h]
        ; Exact mapped bytes E8 7E 0B 06 00: call 0x4633e0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x0b
        __asm _emit 0x06
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 18h]
        push eax
        push 80025000h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A3 49 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x49
        __asm _emit 0x08
        __asm _emit 0x00
        push 0
        push 46ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B2 10 00 00: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6B 10 00 00: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 35: jmp 0x4028dc
        __asm _emit 0xeb
        __asm _emit 0x35
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 1b4h]
        mov ecx, dword ptr [edx + 0c7ch]
        ; Exact mapped bytes E8 62 EA FF FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1b8h], eax
        mov eax, dword ptr [ebp - 1b8h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 04 5F 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x5f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        add esp, 1b8h
        cmp ebp, esp
        ; Exact mapped bytes E8 F0 5E 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x5e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
