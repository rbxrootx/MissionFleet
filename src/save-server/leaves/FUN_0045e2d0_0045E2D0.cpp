// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045E2D0 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_0045e2d0_0045E2D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        and ecx, 2000h
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x45e300
        __asm _emit 0x75
        __asm _emit 0x14
        push 9ddh
        push 678664h
        ; Exact mapped bytes E8 45 AA 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xaa
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45e300
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x45e2da
        __asm _emit 0x75
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9D D9 0E 00: call 0x54bcab
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xd9
        __asm _emit 0x0e
        __asm _emit 0x00
        push 10h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 E3 6F 00 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 02 00 00: mov word ptr [edx], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
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
