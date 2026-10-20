// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AAB2D .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_004aab2d_004AAB2D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4aab5e
        __asm _emit 0x75
        __asm _emit 0x14
        push 2cah
        push 672a58h
        ; Exact mapped bytes E8 E7 E1 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xe1
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4aab5e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4aab39
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 24h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp + 28h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 34h]
        push eax
        push 0
        push 1100h
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
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
