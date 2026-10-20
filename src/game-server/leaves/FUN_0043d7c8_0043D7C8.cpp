// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043D7C8 .. +0x133 bytes.
extern "C" __declspec(naked) void FUN_0043d7c8_0043D7C8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push esi
        push edi
        lea edi, [ebp - 4ch]
        mov ecx, 13h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 8
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 48h], 5d3278h
        mov dword ptr [ebp - 44h], 5d36f8h
        mov dword ptr [ebp - 40h], 5d3b48h
        mov dword ptr [ebp - 3ch], 5d3fb0h
        mov dword ptr [ebp - 38h], 5d43f0h
        mov dword ptr [ebp - 34h], 5d4830h
        mov dword ptr [ebp - 30h], 5d4c70h
        mov dword ptr [ebp - 2ch], 5d51a0h
        mov dword ptr [ebp - 28h], 5d55e0h
        mov dword ptr [ebp - 24h], 5d5a20h
        mov dword ptr [ebp - 20h], 5d5e60h
        mov dword ptr [ebp - 1ch], 5d62a0h
        mov dword ptr [ebp - 18h], 5d66e0h
        mov dword ptr [ebp - 14h], 5d6b20h
        mov dword ptr [ebp - 10h], 5d6f60h
        mov dword ptr [ebp - 0ch], 5d73b0h
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        mov al, byte ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 6D: je 0x43d8d6
        __asm _emit 0x74
        __asm _emit 0x6d
        mov esi, esp
        push 3e8h
        push 0
        ; Exact mapped bytes E8 89 44 00 00: call 0x441d00
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 10h
        ; Exact mapped bytes FF 15 1C 24 5E 00: call dword ptr [0x5e241c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 59 AF 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xaf
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 10h
        ; Exact mapped bytes 73 44: jae 0x43d8d4
        __asm _emit 0x73
        __asm _emit 0x44
        mov esi, esp
        push 5dcb60h
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3C AF 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xaf
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ebp + ecx*4 - 48h]
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [ebp + edx*4 - 48h]
        mov edx, dword ptr [eax]
        mov esi, esp
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        cmp esi, esp
        ; Exact mapped bytes E8 20 AF 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xaf
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 5dcb60h
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0C AF 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xaf
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 88: jmp 0x43d85e
        __asm _emit 0xeb
        __asm _emit 0x88
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax + 9], 1
        push 0
        ; Exact mapped bytes E8 DC C8 06 00: call 0x4aa1c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xc8
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        pop edi
        pop esi
        add esp, 4ch
        cmp ebp, esp
        ; Exact mapped bytes E8 EB AE 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xae
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
