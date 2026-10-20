// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C6000 .. +0x1A1 bytes.
extern "C" __declspec(naked) void FUN_587c6000_587C6000() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0f4h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0f8h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 47 F7 CC FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf7
        __asm _emit 0xcc
        __asm _emit 0xff
        cdq
        idiv dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0fch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 12 F7 CC FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf7
        __asm _emit 0xcc
        __asm _emit 0xff
        cdq
        idiv dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 100h], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 104h], 0
        ; Exact mapped bytes 74 27: je 0x587c607e
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 104h]
        mov dword ptr [ebp - 8], edx
        push 4
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 C6 AF 06 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xaf
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 104h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 108h], 0
        ; Exact mapped bytes 74 27: je 0x587c60b1
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 108h]
        mov dword ptr [ebp - 0ch], ecx
        push 4
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 93 AF 06 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xaf
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 108h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0fch]
        imul eax, dword ptr [edx + 100h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10ch], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10ch], 0
        ; Exact mapped bytes 0F 8E A4 00 00 00: jle 0x587c6181
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 10ch]
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 47 AF 06 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xaf
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 104h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10ch]
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 17 AF 06 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xaf
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 108h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10ch]
        shl eax, 2
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 104h]
        push edx
        ; Exact mapped bytes E8 B5 6C 08 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x6c
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10ch]
        shl ecx, 2
        push ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 108h]
        push eax
        ; Exact mapped bytes E8 94 6C 08 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x6c
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 1A: jmp 0x587c619b
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 104h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 108h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
