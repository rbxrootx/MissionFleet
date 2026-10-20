// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A0721 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_004a0721_004A0721() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BE 45 08 00: call 0x524cf1
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 4C: je 0x4a0785
        __asm _emit 0x74
        __asm _emit 0x4c
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 1E 2D 00 00: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4a075d
        __asm _emit 0x75
        __asm _emit 0x11
        push 30h
        push 671534h
        ; Exact mapped bytes E8 E8 85 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a075d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x4a0739
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A BE 02 00: call 0x4cc5b9
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 7E 4B FC FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x4b
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
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
