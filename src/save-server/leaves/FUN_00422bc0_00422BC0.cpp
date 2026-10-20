// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00422BC0 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_00422bc0_00422BC0() {
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
        ; Exact mapped bytes 74 14: je 0x422bf7
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 8]
        imul eax, eax, 0ch
        push eax
        ; Exact mapped bytes E8 AF EB FD FF: call 0x40179e
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x422bfe
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 E2 21 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x21
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
