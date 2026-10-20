// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876DD80 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_5876dd80_5876DD80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7E 21: jle 0x5876ddb0
        __asm _emit 0x7e
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2f4h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E9 D3 04 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 1D: jmp 0x5876ddcd
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2f4h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CA D3 04 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
