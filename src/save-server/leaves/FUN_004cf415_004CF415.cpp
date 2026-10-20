// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CF415 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_004cf415_004CF415() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, dword ptr [ebp + 10h]
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4cf42c
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x4cf4ae
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5A 6E 00 00: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 50000000h
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4cf43f
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 6F: jmp 0x4cf4ae
        __asm _emit 0xeb
        __asm _emit 0x6f
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 80 2D 06 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x2d
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 73 2F 06 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x2f
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B7 C6 05 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 0B: jne 0x4cf46d
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 74 02: je 0x4cf46f
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 3F: jmp 0x4cf4ae
        __asm _emit 0xeb
        __asm _emit 0x3f
        push 4
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 D5 05 00: call 0x52c9a1
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xd5
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x4cf490
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 73 00 00: call 0x4d6831
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4cf490
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 1E: jmp 0x4cf4ae
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 90 B4 00 00 00: call dword ptr [eax + 0xb4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x4cf4a4
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 0A: jmp 0x4cf4ae
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6A 51 00 00: call 0x4d4618
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
