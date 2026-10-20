// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AB4B9 .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_004ab4b9_004AB4B9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
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
        ; Exact mapped bytes 75 14: jne 0x4ab4ea
        __asm _emit 0x75
        __asm _emit 0x14
        push 3b0h
        push 672a58h
        ; Exact mapped bytes E8 5B D8 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ab4ea
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4ab4c5
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        push 0
        push 402h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 66 0F B6 55 FC: movzx dx, byte ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x55
        __asm _emit 0xfc
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffh
        sar ecx, 8
        and ecx, 0ffh
        ; Exact mapped bytes 66 33 D2: xor dx, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xd2
        mov dl, cl
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
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
