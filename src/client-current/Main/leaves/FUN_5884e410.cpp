// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884E410 .. +0xC3 bytes.
extern "C" __declspec(naked) void FUN_5884e410() {
    __asm {
        push ecx
        movzx eax, byte ptr [esp + 8]
        push ebx
        push ebp
        push esi
        mov dword ptr [esp + 0ch], ecx
        mov ecx, dword ptr [eax*4 + 58a0b1e4h]
        push edi
        push ecx
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 5C 0A 00: call 0x588f4060
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x5c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, eax
        lea edx, [esi + 0b40h]
        xor ebx, ebx
        mov ebp, 0dah
        mov dword ptr [esp + 18h], edx
        xor edi, edi
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 32 7C EE FF: call 0x58736080
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x7c
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 75 57: jne 0x5884e4ab
        __asm _emit 0x75
        __asm _emit 0x57
        lea eax, [edi + ebp]
        mov ecx, dword ptr [esi + eax*4 + 858h]
        test ecx, ecx
        ; Exact mapped bytes 74 49: je 0x5884e4ab
        __asm _emit 0x74
        __asm _emit 0x49
        test edi, edi
        ; Exact mapped bytes 75 35: jne 0x5884e49b
        __asm _emit 0x75
        __asm _emit 0x35
        mov edx, dword ptr [esi + 0cc0h]
        movzx eax, word ptr [edx + ebp]
        mov edx, dword ptr [esp + 18h]
        mov edx, dword ptr [edx]
        movzx edx, word ptr [edx + 1eh]
        sub eax, edx
        test eax, eax
        ; Exact mapped bytes 7E 2B: jle 0x5884e4ab
        __asm _emit 0x7e
        __asm _emit 0x2b
        movzx ecx, word ptr [ecx + 1eh]
        lea eax, [eax + eax*4]
        add eax, eax
        cdq
        idiv ecx
        push 1
        xor al, 0aah
        ; Exact mapped bytes 66 0F B6 D0: movzx dx, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd0
        movzx eax, dx
        push eax
        push edi
        ; Exact mapped bytes EB 08: jmp 0x5884e4a3
        __asm _emit 0xeb
        __asm _emit 0x08
        push 1
        push 0aah
        push edi
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 E5 B0 09 00: call 0x588e9590
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xb0
        __asm _emit 0x09
        __asm _emit 0x00
        inc edi
        cmp edi, 2
        ; Exact mapped bytes 7C 95: jl 0x5884e446
        __asm _emit 0x7c
        __asm _emit 0x95
        add dword ptr [esp + 18h], 4
        add ebp, 2
        inc ebx
        cmp ebp, 11ah
        ; Exact mapped bytes 7C 82: jl 0x5884e444
        __asm _emit 0x7c
        __asm _emit 0x82
        mov ecx, dword ptr [esp + 10h]
        ; Exact mapped bytes E8 45 FD FF FF: call 0x5884e210
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
