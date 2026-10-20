// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58550F10 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_58550f10_58550F10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58550f2b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 73 29: jae 0x58550f5a
        __asm _emit 0x73
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 8], 0
        ; Exact mapped bytes 74 1A: je 0x58550f58
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D9 11 00 00: call 0x58552130
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C8: jmp 0x58550f22
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
