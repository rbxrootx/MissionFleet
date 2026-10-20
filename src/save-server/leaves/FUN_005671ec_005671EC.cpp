// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005671EC .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_005671ec_005671EC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 54h
        push 678f7ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 5D 30 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x30
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 28h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
