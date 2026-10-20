// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883C6D9 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_5883c6d9_5883C6D9() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push edi
        ; Exact mapped bytes E8 B2 03 00 00: call 0x5883ca95
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        cmp dword ptr [edi + 18h], 0
        ; Exact mapped bytes 74 07: je 0x5883c6f2
        __asm _emit 0x74
        __asm _emit 0x07
        push edi
        ; Exact mapped bytes FF 15 20 42 89 58: call dword ptr [0x58894220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 74 4A: je 0x5883c743
        __asm _emit 0x74
        __asm _emit 0x4a
        cmp byte ptr [esi], 1
        ; Exact mapped bytes 75 45: jne 0x5883c743
        __asm _emit 0x75
        __asm _emit 0x45
        ; Exact mapped bytes 0F BE 46 01: movsx eax, byte ptr [esi + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x46
        __asm _emit 0x01
        imul ecx, eax, 3
        push ebx
        push 0
        pop edx
        lea eax, [ecx + 65h]
        xor byte ptr [esi + 2], al
        lea eax, [ecx + 1]
        movzx ebx, byte ptr [esi + 2]
        imul ecx, eax, 3
        shl ebx, 8
        lea eax, [ecx + 65h]
        xor byte ptr [esi + 3], al
        inc ecx
        movzx eax, byte ptr [esi + 3]
        or ebx, eax
        ; Exact mapped bytes 76 13: jbe 0x5883c73e
        __asm _emit 0x76
        __asm _emit 0x13
        imul ecx, ecx, 3
        lea eax, [ecx + 65h]
        xor al, byte ptr [edx + esi + 4]
        inc ecx
        mov byte ptr [edx + esi], al
        inc edx
        cmp edx, ebx
        ; Exact mapped bytes 7C ED: jl 0x5883c72b
        __asm _emit 0x7c
        __asm _emit 0xed
        mov byte ptr [ebx + esi], 0
        pop ebx
        cmp dword ptr [edi + 18h], 0
        ; Exact mapped bytes 74 07: je 0x5883c750
        __asm _emit 0x74
        __asm _emit 0x07
        push edi
        ; Exact mapped bytes FF 15 1C 42 89 58: call dword ptr [0x5889421c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret
    }
}
