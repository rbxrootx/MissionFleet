// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044CC24 .. +0xF9 bytes.
extern "C" __declspec(naked) void FUN_0044cc24_0044CC24() {
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
        ; Exact mapped bytes 75 16: jne 0x44cc71
        __asm _emit 0x75
        __asm _emit 0x16
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 09: je 0x44cc6a
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 0
        xor eax, eax
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x44cd17
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
        ; Exact mapped bytes E8 6A D1 01 00: call 0x469df0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x44cc9c
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 38 BC 68 00: call dword ptr [0x68bc38]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB DE: jmp 0x44cc7a
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 2bh
        ; Exact mapped bytes 74 0B: je 0x44ccb2
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 2dh
        ; Exact mapped bytes 75 0D: jne 0x44ccbf
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 38 BC 68 00: call dword ptr [0x68bc38]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        push eax
        ; Exact mapped bytes E8 75 CD 01 00: call 0x469a40
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 08: je 0x44ccdf
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x44cce9
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2E: jmp 0x44cd17
        __asm _emit 0xeb
        __asm _emit 0x2e
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 15: je 0x44cd04
        __asm _emit 0x74
        __asm _emit 0x15
        push 0ah
        push 0
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 B1 D6 01 00: call 0x46a3b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 13: jmp 0x44cd17
        __asm _emit 0xeb
        __asm _emit 0x13
        push 0ah
        push 0
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes E8 FC D9 01 00: call 0x46a710
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xd9
        __asm _emit 0x01
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
