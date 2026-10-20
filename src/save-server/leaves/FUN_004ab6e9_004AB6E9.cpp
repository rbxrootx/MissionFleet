// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AB6E9 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_004ab6e9_004AB6E9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
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
        ; Exact mapped bytes 75 14: jne 0x4ab71a
        __asm _emit 0x75
        __asm _emit 0x14
        push 3ebh
        push 672a58h
        ; Exact mapped bytes E8 2B D6 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd6
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ab71a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4ab6f5
        __asm _emit 0x75
        __asm _emit 0xd5
        mov dword ptr [ebp - 1ch], 10h
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 1305h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ab75f
        __asm _emit 0x75
        __asm _emit 0x14
        push 3f0h
        push 672a58h
        ; Exact mapped bytes E8 E6 D5 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xd5
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ab75f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C8: jne 0x4ab72d
        __asm _emit 0x75
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 18h]
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
