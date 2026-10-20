// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BC630 .. +0x146 bytes.
extern "C" __declspec(naked) void FUN_100bc630_100BC630() {
    __asm {
        mov eax, dword ptr [esp + 0ch]
        sub esp, 80h
        test al, al
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes 74 40: je 0x100bc682
        __asm _emit 0x74
        __asm _emit 0x40
        cmp al, 0ah
        ; Exact mapped bytes 73 2E: jae 0x100bc674
        __asm _emit 0x73
        __asm _emit 0x2e
        mov ecx, dword ptr [esp + 90h]
        cmp cl, 0ah
        ; Exact mapped bytes 76 04: jbe 0x100bc656
        __asm _emit 0x76
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 06: jmp 0x100bc65c
        __asm _emit 0xeb
        __asm _emit 0x06
        and ecx, 0ffh
        and eax, 0ffh
        push 0eeeeeeh
        push ecx
        lea eax, [eax + eax*2]
        lea ecx, [eax*8 + 10199610h]
        push ecx
        ; Exact mapped bytes EB 1A: jmp 0x100bc68e
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0eeeeeeh
        push 0
        push 101abff4h
        ; Exact mapped bytes EB 0C: jmp 0x100bc68e
        __asm _emit 0xeb
        __asm _emit 0x0c
        push 0eeeeeeh
        push -1
        push 101a858ch
        mov ecx, dword ptr [esi + 1a0h]
        ; Exact mapped bytes E8 17 76 04 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1a0h]
        ; Exact mapped bytes E8 EC 80 04 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, dword ptr [esp + 8ch]
        mov ecx, dword ptr [esi + 19ch]
        push 0eeeeeeh
        push -1
        push edi
        ; Exact mapped bytes E8 F2 75 04 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 19ch]
        ; Exact mapped bytes E8 C7 80 04 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        push edi
        lea edx, [esp + 0ch]
        push 101abfdch
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 0d8h]
        add esp, 0ch
        lea ecx, [esp + 8]
        push eax
        push -1
        push ecx
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes E8 BA 75 04 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes E8 8F 80 04 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 10 57 1C 10: mov eax, dword ptr [0x101c5710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D DC 56 1C 10: mov ecx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, eax
        ; Exact mapped bytes 75 3C: jne 0x100bc74c
        __asm _emit 0x75
        __asm _emit 0x3c
        test byte ptr [eax + 1b8h], 1
        ; Exact mapped bytes 74 24: je 0x100bc73d
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [esi + 19ch]
        ; Exact mapped bytes 8B 0D F0 58 1C 10: mov ecx, dword ptr [0x101c58f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0f4241h
        mov edi, dword ptr [edx + 88h]
        ; Exact mapped bytes E8 7B 59 F8 FF: call 0x100420b0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x59
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [eax + 44h]
        add eax, edi
        push eax
        ; Exact mapped bytes EB 1C: jmp 0x100bc759
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [esi + 19ch]
        mov edx, dword ptr [ecx + 88h]
        push edx
        ; Exact mapped bytes EB 0D: jmp 0x100bc759
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [esi + 19ch]
        mov ecx, dword ptr [eax + 88h]
        push ecx
        mov ecx, dword ptr [esi + 16ch]
        ; Exact mapped bytes E8 BC 2F 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 85 FD FF FF: call 0x100bc4f0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 80h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
