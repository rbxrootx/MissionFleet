// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005376A7 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_005376a7_005376A7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x5376ce
        __asm _emit 0x75
        __asm _emit 0x14
        push 1efh
        push 581fc0h
        ; Exact mapped bytes E8 37 D3 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5376ce
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5376b1
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4E F0 FF FF: call 0x53672a
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 1C 21 5E 00: call dword ptr [0x5e211c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x21
        __asm _emit 0x5e
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
