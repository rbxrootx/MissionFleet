// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5864A970 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_5864a970_5864A970() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 309h], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 310h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30ch]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [ecx + eax*8 + 5ch]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 49 24 F3 FF: call 0x5857cdf0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
