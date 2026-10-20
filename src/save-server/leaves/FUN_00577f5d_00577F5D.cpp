// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00577F5D .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_00577f5d_00577F5D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        sub eax, 0e0h
        mov dword ptr [ebp - 8], eax
        push 6412a8h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 29 2B FD FF: call 0x54aaa4
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x2b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
