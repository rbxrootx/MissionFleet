// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004898C4 .. +0x133 bytes.
extern "C" __declspec(naked) void FUN_004898c4_004898C4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x4899e4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10ch], -1
        ; Exact mapped bytes 74 18: je 0x489901
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 110h]
        cmp eax, dword ptr [edx + 10ch]
        ; Exact mapped bytes 0F 8D E3 00 00 00: jge 0x4899e4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 74 30: je 0x48993a
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4ch]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 07: jne 0x48991c
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x4899e6
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 4ch]
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 4ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        cmp esi, esp
        ; Exact mapped bytes E8 A6 EE 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 118h], 0
        ; Exact mapped bytes 74 20: je 0x489966
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 118h]
        mov dword ptr [edx + 54h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 118h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 58h], ecx
        ; Exact mapped bytes EB 16: jmp 0x48997c
        __asm _emit 0xeb
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 114h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 54h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 118h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4ch], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 58h], 0
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 36 EE 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AD A1 FE FF: call 0x473b60
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 110h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 110h], edx
        push 0
        push 46bh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0c90h
        ; Exact mapped bytes E8 33 9F F7 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x9f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4899e6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 EF ED 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
