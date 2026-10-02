// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B6530 .. +0x1CE bytes.
extern "C" __declspec(naked) void FUN_587b6530() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 84 A1 01 00 00: je 0x587b66ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6B 04 CD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 44h]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        test eax, eax
        ; Exact mapped bytes 0F 85 7C 01 00 00: jne 0x587b66ee
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 A8 40 89 58: call dword ptr [0x588940a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 12: je 0x587b659c
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 84 40 89 58: call dword ptr [0x58894084]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 C4 40 89 58: call dword ptr [0x588940c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 20h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 7D 09: jge 0x587b65d8
        __asm _emit 0x7d
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 1ch]
        add eax, dword ptr [ecx + 8]
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7E 0F: jle 0x587b65f8
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 1ch]
        add eax, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 41: je 0x587b663f
        __asm _emit 0x74
        __asm _emit 0x41
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 A0 40 89 58: call dword ptr [0x588940a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 14h]
        push eax
        push 6
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 97 D9 FF FF: call 0x587b3fd0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x587b66d0
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 A4 40 89 58: call dword ptr [0x588940a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 42: je 0x587b6694
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 A0 40 89 58: call dword ptr [0x588940a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        push 4
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 3D D9 FF FF: call 0x587b3fd0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 A0 40 89 58: call dword ptr [0x588940a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 14h]
        push eax
        push 4
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 01 D9 FF FF: call 0x587b3fd0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E8 02 CD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xcd
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 58 A9 07 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xa9
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
