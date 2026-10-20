// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5868F070 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_5868f070_5868F070() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 5f4h]
        xor edx, 55h
        ; Exact mapped bytes 7D 2D: jge 0x5868f0b6
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 5f4h], 55h
        push 55h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*4 + 5f4h]
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B ED EB FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xed
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + edx*4 + 5f4h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
