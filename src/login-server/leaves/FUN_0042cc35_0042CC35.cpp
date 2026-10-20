// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CC35 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_0042cc35_0042CC35() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        test ebx, ebx
        push ecx
        ; Exact mapped bytes 74 1B: je 0x42cc5a
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes E8 3F 36 FF FF: call 0x420283
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        pop ecx
        ; Exact mapped bytes 74 17: je 0x42cc60
        __asm _emit 0x74
        __asm _emit 0x17
        push esi
        push edi
        push 9
        mov esi, eax
        pop ecx
        mov edi, ebx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        pop edi
        mov eax, ebx
        pop esi
        ; Exact mapped bytes EB 06: jmp 0x42cc60
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes E8 24 36 FF FF: call 0x420283
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
