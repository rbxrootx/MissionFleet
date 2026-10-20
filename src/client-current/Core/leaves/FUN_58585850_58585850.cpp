// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58585850 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_58585850_58585850() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        lea eax, [ebp + 10h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 200h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 00 A5 F4 FF: call 0x584cfd70
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xa5
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 10h
        mov esp, ebp
        pop ebp
        ret
    }
}
