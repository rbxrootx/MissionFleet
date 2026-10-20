// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051AB6F .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_0051ab6f_0051AB6F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes E8 E9 5A 02 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 EE 6E 01 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 39: je 0x51abc4
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 75 30: jne 0x51abc4
        __asm _emit 0x75
        __asm _emit 0x30
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 18: je 0x51abb2
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 0F: je 0x51abb2
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 9D 15 01 00: call 0x52c14b
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x51abc4
        __asm _emit 0x75
        __asm _emit 0x12
        push 6768e0h
        push 67692ch
        ; Exact mapped bytes E8 54 5A F8 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x5a
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 30h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
