// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E8643 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_004e8643_004E8643() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58cb24h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 636bdch
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4e868f
        __asm _emit 0x75
        __asm _emit 0x14
        push 3ddh
        push 6733e0h
        ; Exact mapped bytes E8 B6 06 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e868f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4e8672
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 60 D8 FF FF: call 0x4e5efd
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes FF 15 04 BE 68 00: call dword ptr [0x68be04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BD D8 FF FF: call 0x4e5f77
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
