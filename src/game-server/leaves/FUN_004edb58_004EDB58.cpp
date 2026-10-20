// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EDB58 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_004edb58_004EDB58() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 11: je 0x4edb78
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 80 F3 FB FF: call 0x4acef0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xf3
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4edb7f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        shl edx, 1
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4E FC FF FF: call 0x4ed7e1
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + eax + 1]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 EB 09 00 00: call 0x4ee595
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push -1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7C 05 00 00: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
