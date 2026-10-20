// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AB7DE .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_004ab7de_004AB7DE() {
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
        ; Exact mapped bytes 75 14: jne 0x4ab80f
        __asm _emit 0x75
        __asm _emit 0x14
        push 405h
        push 672a58h
        ; Exact mapped bytes E8 36 D5 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xd5
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ab80f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4ab7ea
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 1307h
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
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
