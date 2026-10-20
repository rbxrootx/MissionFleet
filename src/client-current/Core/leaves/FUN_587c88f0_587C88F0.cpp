// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C88F0 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_587c88f0_587C88F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B0 37 CC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x37
        __asm _emit 0xcc
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D6 35 CC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x35
        __asm _emit 0xcc
        __asm _emit 0xff
        imul eax, dword ptr [ebp + 0ch]
        add esi, eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 4D 10: mov cx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 0C 46: mov word ptr [esi + eax*2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x46
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
