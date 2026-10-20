// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004514FD .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_004514fd_004514FD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 0cch
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x45152e
        __asm _emit 0x75
        __asm _emit 0x14
        push 797h
        push 67702ch
        ; Exact mapped bytes E8 17 78 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45152e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x451511
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 1ch]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x451554
        __asm _emit 0x75
        __asm _emit 0x14
        push 798h
        push 67702ch
        ; Exact mapped bytes E8 F1 77 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x77
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x451554
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x451534
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp + 18h]
        and eax, 0ffffh
        cmp eax, 1
        ; Exact mapped bytes 74 14: je 0x45157b
        __asm _emit 0x74
        __asm _emit 0x14
        push 799h
        push 67702ch
        ; Exact mapped bytes E8 CA 77 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x77
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45157b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D9: jne 0x45155a
        __asm _emit 0x75
        __asm _emit 0xd9
        mov edx, dword ptr [ebp + 28h]
        push edx
        mov eax, dword ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 55 3D 00 00: call 0x4552f0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 70 E2 FF FF: call 0x44f817
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 0A: je 0x4515b7
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        ; Exact mapped bytes FF 15 08 BB 68 00: call dword ptr [0x68bb08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
