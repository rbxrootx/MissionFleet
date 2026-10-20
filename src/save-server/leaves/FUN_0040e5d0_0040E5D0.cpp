// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040E5D0 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_0040e5d0_0040E5D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push ebx
        push esi
        push edi
        lea edi, [ebp - 40h]
        mov ecx, 10h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 6B 74 05 00: call 0x465a60
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        pop edi
        pop esi
        pop ebx
        add esp, 40h
        cmp ebp, esp
        ; Exact mapped bytes E8 EB 67 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
