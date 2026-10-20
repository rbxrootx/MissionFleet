// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B4410 .. +0x135 bytes.
extern "C" __declspec(naked) void FUN_587b4410_587B4410() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CB B5 D1 FF: call 0x584cf9f0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb5
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 14h]
        sub ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ebp + 10h], ecx
        ; Exact mapped bytes 77 06: ja 0x587b4442
        __asm _emit 0x77
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 1
        ; Exact mapped bytes EB 04: jmp 0x587b4446
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 1], 0
        mov dl, byte ptr [ebp - 1]
        mov byte ptr [ebp - 2], dl
        movzx eax, byte ptr [ebp - 2]
        test eax, eax
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x587b451d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 10h], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 94 E6 D4 FF: call 0x58502b00
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe6
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 18h]
        lea edx, [ecx + eax*2]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax*2]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 76 0E: jbe 0x587b4497
        __asm _emit 0x76
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 18h]
        lea edx, [ecx + eax*2]
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 76 08: jbe 0x587b449f
        __asm _emit 0x76
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 1C: jmp 0x587b44bb
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 77 09: ja 0x587b44b0
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 0B: jmp 0x587b44bb
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp + 0ch]
        sar edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        sub eax, dword ptr [ebp + 8]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*2]
        push ecx
        ; Exact mapped bytes E8 C8 E8 D4 FF: call 0x58502da0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 B4 E8 D4 FF: call 0x58502da0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp + 10h]
        sub edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax*2]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [edx + eax*2]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*2]
        push ecx
        ; Exact mapped bytes E8 8B E8 D4 FF: call 0x58502da0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 22: jmp 0x587b453f
        __asm _emit 0xeb
        __asm _emit 0x22
        xor edx, edx
        mov byte ptr [ebp - 3], dl
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        movzx eax, byte ptr [ebp - 3]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C1 E2 FF FF: call 0x587b2800
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
