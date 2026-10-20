// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58520755 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_58520755_58520755() {
    __asm {
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes EB 07: jmp 0x58520765
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0ffffffffh
        movzx eax, byte ptr [ebp - 11h]
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x58520788
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 44h], eax
        push 0
        push 3
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 A9 BB FE FF: call 0x5850c330
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xbb
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 D8 AB FE FF: call 0x5850b370
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
    }
}
