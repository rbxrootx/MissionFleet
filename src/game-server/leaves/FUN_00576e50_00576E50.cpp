// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00576E50 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_00576e50_00576E50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov ecx, 5de520h
        ; Exact mapped bytes E8 C0 B5 FC FF: call 0x542420
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xb5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 33: jne 0x576e9f
        __asm _emit 0x75
        __asm _emit 0x33
        push 0
        push 0
        push 0
        push 0
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 84 25 5E 00: call dword ptr [0x5e2584]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x576e9f
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes E8 32 29 F8 FF: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x29
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x576e9d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0E: jmp 0x576eab
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes EB C4: jmp 0x576e63
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov ecx, dword ptr [ebp - 4]
        xor eax, eax
        cmp dword ptr [ecx + 0ch], 0
        sete al
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
