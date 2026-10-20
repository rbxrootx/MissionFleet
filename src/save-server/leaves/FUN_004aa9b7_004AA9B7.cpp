// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AA9B7 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_004aa9b7_004AA9B7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp - 2ch]
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
        ; Exact mapped bytes 75 14: jne 0x4aa9e8
        __asm _emit 0x75
        __asm _emit 0x14
        push 2a4h
        push 672a58h
        ; Exact mapped bytes E8 5D E3 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe3
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4aa9e8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4aa9c3
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 28h], 4
        lea ecx, [ebp - 28h]
        push ecx
        push 0
        push 110ch
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4aaa2b
        __asm _emit 0x75
        __asm _emit 0x14
        push 2a8h
        push 672a58h
        ; Exact mapped bytes E8 1A E3 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xe3
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4aaa2b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CA: jne 0x4aa9fb
        __asm _emit 0x75
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 4]
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
