// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043212D .. +0x10B bytes.
extern "C" __declspec(naked) void FUN_0043212d_0043212D() {
    __asm {
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        cmp dword ptr [esp + 10h], ebp
        push edi
        ; Exact mapped bytes 0F 8F C4 00 00 00: jg 0x432201
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 1ch]
        mov ebx, 363h
        cmp edi, ebp
        ; Exact mapped bytes 74 2E: je 0x432177
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [edi + 1ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 27: je 0x432177
        __asm _emit 0x74
        __asm _emit 0x27
        push eax
        ; Exact mapped bytes FF 15 1C C4 43 00: call dword ptr [0x43c41c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x432177
        __asm _emit 0x74
        __asm _emit 0x1c
        push ebp
        push 1
        pop esi
        push esi
        push ebx
        push dword ptr [edi + 1ch]
        push edi
        ; Exact mapped bytes E8 AD CF FF FF: call 0x42f117
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        push esi
        push ebp
        push esi
        push ebx
        push dword ptr [edi + 1ch]
        ; Exact mapped bytes E8 AB E7 FF FF: call 0x430922
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 37 3B 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 1070h
        push 435d25h
        mov ecx, eax
        ; Exact mapped bytes E8 26 4C 00 00: call 0x436db3
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [eax + 8]
        cmp esi, ebp
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x432228
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 1ch], ebp
        ; Exact mapped bytes 74 5F: je 0x4321fc
        __asm _emit 0x74
        __asm _emit 0x5f
        cmp esi, edi
        ; Exact mapped bytes 74 5B: je 0x4321fc
        __asm _emit 0x74
        __asm _emit 0x5b
        cmp dword ptr [esi + 88h], ebp
        ; Exact mapped bytes 75 08: jne 0x4321b1
        __asm _emit 0x75
        __asm _emit 0x08
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 76 C1 FF FF: call 0x42e327
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 1C C4 43 00: call dword ptr [0x43c41c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x4321c6
        __asm _emit 0x75
        __asm _emit 0x08
        cmp dword ptr [esi + 88h], ebp
        ; Exact mapped bytes 7C 1D: jl 0x4321e3
        __asm _emit 0x7c
        __asm _emit 0x1d
        push ebp
        push 1
        push ebx
        push dword ptr [esi + 1ch]
        push esi
        ; Exact mapped bytes E8 44 CF FF FF: call 0x42f117
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push 1
        push ebp
        push 1
        push ebx
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes E8 3F E7 FF FF: call 0x430922
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 88h]
        cmp eax, ebp
        ; Exact mapped bytes 7E 08: jle 0x4321f5
        __asm _emit 0x7e
        __asm _emit 0x08
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 32 C1 FF FF: call 0x42e327
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        or dword ptr [esi + 88h], 0ffffffffh
        mov esi, dword ptr [esi + 54h]
        ; Exact mapped bytes EB 8F: jmp 0x432190
        __asm _emit 0xeb
        __asm _emit 0x8f
        ; Exact mapped bytes E8 AD 3A 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 1070h
        push 435d25h
        mov ecx, eax
        ; Exact mapped bytes E8 9C 4B 00 00: call 0x436db3
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 10h], ebp
        ; Exact mapped bytes 75 0C: jne 0x432228
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes E8 EE 09 00 00: call 0x432c0f
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 F0 09 00 00: call 0x432c18
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        cmp dword ptr [esp + 14h], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        setl al
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
