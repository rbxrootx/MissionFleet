// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421BEC .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_00421bec_00421BEC() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 18h]
        push edi
        mov edi, 19930520h
        cmp dword ptr [esi], edi
        ; Exact mapped bytes 74 05: je 0x421c02
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 89 09 00 00: call 0x42258b
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        test byte ptr [eax + 4], 66h
        ; Exact mapped bytes 74 1F: je 0x421c2a
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp dword ptr [esi + 4], 0
        ; Exact mapped bytes 74 6F: je 0x421c80
        __asm _emit 0x74
        __asm _emit 0x6f
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 69: jne 0x421c80
        __asm _emit 0x75
        __asm _emit 0x69
        push -1
        push esi
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 1C 03 00 00: call 0x421f41
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 56: jmp 0x421c80
        __asm _emit 0xeb
        __asm _emit 0x56
        cmp dword ptr [esi + 0ch], 0
        ; Exact mapped bytes 74 50: je 0x421c80
        __asm _emit 0x74
        __asm _emit 0x50
        cmp dword ptr [eax], 0e06d7363h
        ; Exact mapped bytes 75 2C: jne 0x421c64
        __asm _emit 0x75
        __asm _emit 0x2c
        cmp dword ptr [eax + 14h], edi
        ; Exact mapped bytes 76 27: jbe 0x421c64
        __asm _emit 0x76
        __asm _emit 0x27
        mov ecx, dword ptr [eax + 1ch]
        mov ecx, dword ptr [ecx + 8]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x421c64
        __asm _emit 0x74
        __asm _emit 0x1d
        movzx edx, byte ptr [ebp + 24h]
        push edx
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 1ch]
        push esi
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        add esp, 20h
        ; Exact mapped bytes EB 1F: jmp 0x421c83
        __asm _emit 0xeb
        __asm _emit 0x1f
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 24h]
        push esi
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 0A 00 00 00: call 0x421c87
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        push 1
        pop eax
        pop edi
        pop esi
        pop ebp
        ret
    }
}
