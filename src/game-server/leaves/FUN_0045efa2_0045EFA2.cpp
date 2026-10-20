// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045EFA2 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_0045efa2_0045EFA2() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 6D 27 0D 00: call 0x531728
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x27
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 46 27 0D 00: call 0x53170d
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x27
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 1D 27 0D 00: call 0x5316f0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x27
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        push 5ba584h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 7A F9 06 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf9
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 14h
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 EC 97 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x97
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
