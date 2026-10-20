// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585076D0 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_585076d0_585076D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E1 F2 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf2
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D6 F2 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf2
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 87 FF FF FF: call 0x58507680
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 1F: je 0x5850771f
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 03 F8 FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0xf8
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 1E 03 F8 FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x03
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 09: jne 0x5850771f
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x58507726
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        movzx eax, byte ptr [ebp - 4]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
