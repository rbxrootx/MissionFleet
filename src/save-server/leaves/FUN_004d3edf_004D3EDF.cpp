// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D3EDF .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_004d3edf_004D3EDF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes E8 83 DB 05 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 15: je 0x4d3f0b
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 0A: jne 0x4d3f0b
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, 686db0h
        ; Exact mapped bytes E8 E5 83 00 00: call 0x4dc2f0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 53 C7 06 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [eax + 14h]
        test edx, edx
        ; Exact mapped bytes 75 32: jne 0x4d3f4b
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes E8 3B 49 00 00: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x4d3f4b
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes E8 32 49 00 00: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 1ch]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 1C: jne 0x4d3f4b
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, 686da8h
        ; Exact mapped bytes E8 77 97 06 00: call 0x53d6b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x97
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 06: je 0x4d3f4b
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3B 23 00 00: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x4d3f6e
        __asm _emit 0x75
        __asm _emit 0x12
        push 1
        push 1
        push 0
        push 0
        push 15h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 75 82 05 00: call 0x52c1e3
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2C B8 FF FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
