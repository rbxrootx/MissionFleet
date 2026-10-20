// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58867D73 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_58867d73_58867D73() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 28h
        lea ecx, [ebp - 28h]
        push esi
        push edi
        push 0
        ; Exact mapped bytes E8 18 8F FE FF: call 0x58850c9f
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0xff
        lea eax, [ebp - 28h]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B2 F9 FF FF: call 0x58867745
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        lea ecx, [ebp - 28h]
        mov esi, eax
        mov edi, edx
        ; Exact mapped bytes E8 46 8F FE FF: call 0x58850ce7
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, edi
        mov eax, esi
        pop edi
        pop esi
        leave
        ret
    }
}
