// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588621C0 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_588621c0_588621C0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 8], eax
        and ecx, 80000000h
        mov eax, dword ptr [ebp + 0ch]
        and eax, 7fffffffh
        or ecx, eax
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        mov esp, ebp
        pop ebp
        ret
    }
}
