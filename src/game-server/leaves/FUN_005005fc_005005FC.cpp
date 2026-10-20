// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005005FC .. +0x15C bytes.
extern "C" __declspec(naked) void FUN_005005fc_005005FC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 150h
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 12h
        push ecx
        ; Exact mapped bytes E8 87 F3 FF FF: call 0x4ff99f
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x50062a
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 0ch]
        mov byte ptr [edx + 12h], 0
        xor eax, eax
        ; Exact mapped bytes E9 25 01 00 00: jmp 0x50074f
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 144h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 54 24 5E 00: call dword ptr [0x5e2454]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 07: jne 0x50064b
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 04 01 00 00: jmp 0x50074f
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 00 23 5E 00: call dword ptr [0x5e2300]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50066d
        __asm _emit 0x75
        __asm _emit 0x14
        push 9fh
        push 5cc904h
        ; Exact mapped bytes E8 98 43 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50066d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x50064b
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 144h]
        and cl, 7fh
        mov edx, dword ptr [ebp + 0ch]
        mov byte ptr [edx + 10h], cl
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 14: je 0x50069f
        __asm _emit 0x74
        __asm _emit 0x14
        push 0a6h
        push 5cc904h
        ; Exact mapped bytes E8 66 43 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50069f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x500682
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 0ch], edx
        push -1
        lea eax, [ebp - 140h]
        push eax
        lea ecx, [ebp - 148h]
        ; Exact mapped bytes E8 6A EC FC FF: call 0x4cf32f
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E0 0F 03 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        push -1
        lea ecx, [ebp - 138h]
        push ecx
        lea ecx, [ebp - 14ch]
        ; Exact mapped bytes E8 4D EC FC FF: call 0x4cf32f
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 8
        ; Exact mapped bytes E8 C0 0F 03 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        push -1
        lea edx, [ebp - 130h]
        push edx
        lea ecx, [ebp - 150h]
        ; Exact mapped bytes E8 2D EC FC FF: call 0x4cf32f
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        ; Exact mapped bytes E8 A0 0F 03 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 CA 0F 03 00: call 0x5316e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x500729
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 0ch]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 85 0F 03 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 8
        ; Exact mapped bytes E8 AC 0F 03 00: call 0x5316e0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x50074a
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 8
        ; Exact mapped bytes E8 64 0F 03 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
