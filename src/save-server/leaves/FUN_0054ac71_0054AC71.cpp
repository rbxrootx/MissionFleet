// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054AC71 .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_0054ac71_0054AC71() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 52 40: call dword ptr [edx + 0x40]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x40
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x54aca5
        __asm _emit 0x75
        __asm _emit 0x14
        push 13dh
        push 678964h
        ; Exact mapped bytes E8 A0 E0 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54aca5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x54ac8b
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x54acce
        __asm _emit 0x75
        __asm _emit 0x14
        push 144h
        push 678964h
        ; Exact mapped bytes E8 77 E0 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54acce
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x54acb4
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 0B: je 0x54ace7
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 8]
        add edx, 8
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB ED: jmp 0x54acd4
        __asm _emit 0xeb
        __asm _emit 0xed
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], -1
        ; Exact mapped bytes 74 49: je 0x54ad39
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 29: je 0x54ad2e
        __asm _emit 0x74
        __asm _emit 0x29
        mov dword ptr [ebp - 10h], 0
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x54ad2e
        __asm _emit 0x75
        __asm _emit 0x0b
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 05: je 0x54ad2e
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes EB 1F: jmp 0x54ad4d
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 8]
        add ecx, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB AE: jmp 0x54ace7
        __asm _emit 0xeb
        __asm _emit 0xae
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 85 60 FF FF FF: jne 0x54acab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
