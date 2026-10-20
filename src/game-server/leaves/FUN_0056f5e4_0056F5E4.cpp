// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056F5E4 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_0056f5e4_0056F5E4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        sub eax, 0e0h
        mov dword ptr [ebp - 8], eax
        push 58eab8h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 32 CA FD FF: call 0x54c034
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xca
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
