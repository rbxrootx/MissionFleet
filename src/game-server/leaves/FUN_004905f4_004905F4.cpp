// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004905F4 .. +0xF9 bytes.
extern "C" __declspec(naked) void FUN_004905f4_004905F4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10ch
        mov dword ptr [ebp - 10ch], ecx
        push 100h
        lea eax, [ebp - 108h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes FF 90 80 00 00 00: call dword ptr [eax + 0x80]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x490641
        __asm _emit 0x75
        __asm _emit 0x16
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 09: je 0x49063a
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 0
        xor eax, eax
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x4906e7
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 108h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        push ecx
        ; Exact mapped bytes E8 5A D4 01 00: call 0x4adab0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x49066c
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 30 25 5E 00: call dword ptr [0x5e2530]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB DE: jmp 0x49064a
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 2bh
        ; Exact mapped bytes 74 0B: je 0x490682
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 2dh
        ; Exact mapped bytes 75 0D: jne 0x49068f
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 30 25 5E 00: call dword ptr [0x5e2530]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        push eax
        ; Exact mapped bytes E8 15 D1 01 00: call 0x4ad7b0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 08: je 0x4906af
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x4906b9
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2E: jmp 0x4906e7
        __asm _emit 0xeb
        __asm _emit 0x2e
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 15: je 0x4906d4
        __asm _emit 0x74
        __asm _emit 0x15
        push 0ah
        push 0
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 A1 FF 01 00: call 0x4b0670
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 13: jmp 0x4906e7
        __asm _emit 0xeb
        __asm _emit 0x13
        push 0ah
        push 0
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes E8 EC 02 02 00: call 0x4b09d0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
