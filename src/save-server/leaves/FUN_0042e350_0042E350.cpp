// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E350 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_0042e350_0042E350() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 634514h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 18h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 C4 E0 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xe0
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 ED 02 00 00: call 0x42e6a0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 30 6A 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
