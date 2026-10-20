// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056295B .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_0056295b_0056295B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 25: je 0x562992
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 14h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 DC D4 F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xd4
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x562992
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f6h
        push 5ce898h
        ; Exact mapped bytes E8 73 20 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x20
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x562992
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x562967
        __asm _emit 0x75
        __asm _emit 0xcf
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1F: jne 0x5629bd
        __asm _emit 0x75
        __asm _emit 0x1f
        lea edx, [ebp - 18h]
        push edx
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 CE B1 FE FF: call 0x54db7e
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp + 0ch], eax
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 10h], 1
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x5629d3
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 11: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 75 FB FF FF: call 0x562556
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 0ch
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14h
        push ecx
        ; Exact mapped bytes E8 7C 69 F4 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x69
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
