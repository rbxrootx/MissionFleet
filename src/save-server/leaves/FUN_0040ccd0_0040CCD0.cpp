// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040CCD0 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_0040ccd0_0040CCD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 48h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 14: je 0x40cd07
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 8]
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 9F 4A FF FF: call 0x40179e
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x40cd0e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 D2 80 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
