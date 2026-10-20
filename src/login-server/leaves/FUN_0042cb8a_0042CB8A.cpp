// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CB8A .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_0042cb8a_0042CB8A() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 81 F9 6C 07: cmp cx, 0x76c
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x6c
        __asm _emit 0x07
        ; Exact mapped bytes 73 05: jae 0x42cba2
        __asm _emit 0x73
        __asm _emit 0x05
        and dword ptr [esi], 0
        ; Exact mapped bytes EB 2D: jmp 0x42cbcf
        __asm _emit 0xeb
        __asm _emit 0x2d
        movzx edx, word ptr [eax + 0ch]
        push dword ptr [ebp + 0ch]
        push edx
        movzx edx, word ptr [eax + 0ah]
        push edx
        movzx edx, word ptr [eax + 8]
        push edx
        movzx edx, word ptr [eax + 6]
        movzx eax, word ptr [eax + 2]
        push edx
        push eax
        movzx eax, cx
        push eax
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 74 FF FF FF: call 0x42cb3e
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [esi], eax
        mov eax, esi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
