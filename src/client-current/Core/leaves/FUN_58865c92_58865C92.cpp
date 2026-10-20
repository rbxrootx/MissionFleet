// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58865C92 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_58865c92_58865C92() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 14h
        lea eax, [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 1]
        push 2
        lea eax, [ebp + 0ch]
        mov dword ptr [ebp - 10h], eax
        pop eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 0ch], eax
        lea eax, [ebp - 8]
        push eax
        lea eax, [ebp - 14h]
        push eax
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 0A FD FF FF: call 0x588659cd
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        leave
        ret
    }
}
