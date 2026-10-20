// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588501C8 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_588501c8_588501C8() {
    __asm {
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx - 4], eax
        push dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 38 D0 FF FF: call 0x5884d211
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes E8 47 F4 FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [eax + 10h], ecx
        ; Exact mapped bytes E8 3C F4 FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [eax + 14h], ecx
        cmp dword ptr [esi], 0e06d7363h
        ; Exact mapped bytes 75 4A: jne 0x58850242
        __asm _emit 0x75
        __asm _emit 0x4a
        cmp dword ptr [esi + 10h], 3
        ; Exact mapped bytes 75 44: jne 0x58850242
        __asm _emit 0x75
        __asm _emit 0x44
        cmp dword ptr [esi + 14h], 19930520h
        ; Exact mapped bytes 74 12: je 0x58850219
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [esi + 14h], 19930521h
        ; Exact mapped bytes 74 09: je 0x58850219
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [esi + 14h], 19930522h
        ; Exact mapped bytes 75 29: jne 0x58850242
        __asm _emit 0x75
        __asm _emit 0x29
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 75 23: jne 0x58850242
        __asm _emit 0x75
        __asm _emit 0x23
        test ebx, ebx
        ; Exact mapped bytes 74 1F: je 0x58850242
        __asm _emit 0x74
        __asm _emit 0x1f
        push dword ptr [esi + 18h]
        ; Exact mapped bytes E8 D0 ED FF FF: call 0x5884effb
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x58850242
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 44h], edi
        setne al
        movzx eax, al
        push eax
        push esi
        ; Exact mapped bytes E8 AE EC FF FF: call 0x5884eeee
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        ret
    }
}
