// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004609C4 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_004609c4_004609C4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 4B 0D 0D 00: call 0x531728
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x0d
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 24 0D 0D 00: call 0x53170d
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x0d
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 FB 0C 0D 00: call 0x5316f0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x0c
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        push 5ba9e4h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 58 DF 06 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xdf
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 14h
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 CA 7D 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x7d
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
