// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873890 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_58873890_58873890() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 28h
        lea ecx, [ebp - 28h]
        push esi
        push dword ptr [ebp + 1ch]
        ; Exact mapped bytes E8 FB D3 FD FF: call 0x58850c9f
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xd3
        __asm _emit 0xfd
        __asm _emit 0xff
        lea eax, [ebp - 28h]
        push eax
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5D FC FF FF: call 0x58873519
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        lea ecx, [ebp - 28h]
        mov esi, eax
        ; Exact mapped bytes E8 1E D4 FD FF: call 0x58850ce7
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, esi
        pop esi
        leave
        ret
    }
}
