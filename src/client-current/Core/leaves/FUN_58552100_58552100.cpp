// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58552100 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_58552100_58552100() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3910h], 1
        push 5
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 29 F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x29
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3a54h], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
