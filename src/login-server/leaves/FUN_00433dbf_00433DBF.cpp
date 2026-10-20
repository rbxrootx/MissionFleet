// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433DBF .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_00433dbf_00433DBF() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        xor eax, eax
        push edi
        mov ecx, dword ptr [esi + 4]
        ; Exact mapped bytes 8B 3D 70 C0 43 00: mov edi, dword ptr [0x43c070]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        cmp ecx, dword ptr [esi + 8]
        ; Exact mapped bytes 74 0B: je 0x433de3
        __asm _emit 0x74
        __asm _emit 0x0b
        test ebx, ebx
        ; Exact mapped bytes 74 03: je 0x433ddf
        __asm _emit 0x74
        __asm _emit 0x03
        mov eax, dword ptr [ebx + 4]
        push eax
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov esi, dword ptr [esi + 8]
        test esi, esi
        ; Exact mapped bytes 74 0F: je 0x433df9
        __asm _emit 0x74
        __asm _emit 0x0f
        test ebx, ebx
        ; Exact mapped bytes 75 04: jne 0x433df2
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x433df5
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebx + 4]
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push eax
        ; Exact mapped bytes E8 E7 05 00 00: call 0x4343e6
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
