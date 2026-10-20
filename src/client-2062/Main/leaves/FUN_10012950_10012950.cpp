// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10012950 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_10012950_10012950() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push esi
        push edi
        test ebx, ebx
        mov edi, ecx
        ; Exact mapped bytes 74 33: je 0x10012990
        __asm _emit 0x74
        __asm _emit 0x33
        mov esi, dword ptr [edi + 8]
        mov eax, dword ptr [edi + 0ch]
        cmp esi, eax
        ; Exact mapped bytes 74 29: je 0x10012990
        __asm _emit 0x74
        __asm _emit 0x29
        push ebp
        mov ebp, dword ptr [esp + 14h]
        lea eax, [esi + 0ch]
        push ebp
        push eax
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x10012985
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [esi]
        mov dword ptr [ebx], ecx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [ebx + 4], edx
        mov eax, dword ptr [edi + 0ch]
        add esi, 48h
        cmp esi, eax
        ; Exact mapped bytes 75 DD: jne 0x1001296c
        __asm _emit 0x75
        __asm _emit 0xdd
        pop ebp
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
