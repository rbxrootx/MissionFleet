// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00555DDE .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_00555dde_00555DDE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 792h
        push 67c1e0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 65 44 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x44
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x555e18
        __asm _emit 0x75
        __asm _emit 0x14
        push 793h
        push 67c1e0h
        ; Exact mapped bytes E8 2D 2F FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x2f
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555e18
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x555dfb
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 44: call dword ptr [ecx + 0x44]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x44
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
