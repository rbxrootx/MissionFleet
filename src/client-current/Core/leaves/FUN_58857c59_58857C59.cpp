// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58857C59 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_58857c59_58857C59() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 2ch
        lea ecx, [ebp - 2ch]
        push esi
        push 0
        ; Exact mapped bytes E8 33 90 FF FF: call 0x58850c9f
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push 1
        push 0ah
        push ecx
        push ecx
        mov ecx, esp
        and dword ptr [ecx + 4], 0
        mov dword ptr [ecx], eax
        lea eax, [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 C2 F0 FF FF: call 0x58856d48
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        lea ecx, [ebp - 2ch]
        mov esi, eax
        ; Exact mapped bytes E8 54 90 FF FF: call 0x58850ce7
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        pop esi
        leave
        ret
    }
}
