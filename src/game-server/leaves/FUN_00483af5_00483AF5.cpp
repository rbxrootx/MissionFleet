// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00483AF5 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_00483af5_00483AF5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 04: jne 0x483b0d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 34: jmp 0x483b41
        __asm _emit 0xeb
        __asm _emit 0x34
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 28h], -1
        ; Exact mapped bytes 74 29: je 0x483b3f
        __asm _emit 0x74
        __asm _emit 0x29
        push 78h
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 40h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 28h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 210h]
        ; Exact mapped bytes E8 C3 15 F8 FF: call 0x4050f7
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x483b3f
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x483b41
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 95 4C 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
