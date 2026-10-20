// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055796F .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_0055796f_0055796F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x5579a6
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 42h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 D8 BA F4 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xba
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5579a6
        __asm _emit 0x75
        __asm _emit 0x14
        push 1d8h
        push 67c630h
        ; Exact mapped bytes E8 9F 13 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5579a6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x55797b
        __asm _emit 0x75
        __asm _emit 0xcf
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0C: je 0x5579c5
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 D8 5F FF FF: call 0x54d99a
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 88 FD FF FF: call 0x557759
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
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
