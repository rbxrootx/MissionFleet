// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047E2AC .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_0047e2ac_0047E2AC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 13: je 0x47e2d6
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 8e8h]
        mov dword ptr [eax + 8], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 30h], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0ch
        ; Exact mapped bytes E8 CB 33 00 00: call 0x4816c0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0E 00 00 00: call 0x47e30b
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 D9 A4 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
