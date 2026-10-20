// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884D138 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_5884d138_5884D138() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0ch
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 64 8B 1D 00 00 00 00: mov ebx, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ebx, dword ptr [ebp + 0ch]
        mov ebp, dword ptr [ebp - 4]
        mov esp, dword ptr [ebx - 4]
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
