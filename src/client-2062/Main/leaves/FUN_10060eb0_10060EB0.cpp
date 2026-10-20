// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10060EB0 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_10060eb0_10060EB0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        mov dword ptr [ebx + 0a0h], 0
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        xor edi, edi
        ; Exact mapped bytes E8 E0 39 FF FF: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        mov cl, ah
        ; Exact mapped bytes A1 C0 58 1C 10: mov eax, dword ptr [0x101c58c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + 4]
        test eax, eax
        ; Exact mapped bytes 74 5B: je 0x10060f3b
        __asm _emit 0x74
        __asm _emit 0x5b
        ; Exact mapped bytes 66 0F B6 C9: movzx cx, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc9
        mov edx, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B 92 48 03 00 00: mov dx, word ptr [edx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 0D: shr dx, 0xd
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0d
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 75 0B: jne 0x10060f05
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [eax + 0a0h]
        test edx, edx
        ; Exact mapped bytes 75 01: jne 0x10060f05
        __asm _emit 0x75
        __asm _emit 0x01
        inc edi
        mov eax, dword ptr [eax + 0b70h]
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x10060ee4
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp edi, 1
        ; Exact mapped bytes 75 27: jne 0x10060f3b
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [esi + 9ch]
        push eax
        ; Exact mapped bytes E8 00 E2 09 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xe2
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push 0
        ; Exact mapped bytes E8 F3 E1 09 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xe1
        __asm _emit 0x09
        __asm _emit 0x00
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 EB D4 FF FF: call 0x1005e420
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d0ch]
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 D7 D4 FF FF: call 0x1005e420
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
