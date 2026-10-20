// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E73D0 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_585e73d0_585E73D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, byte ptr [ebp + 8]
        and al, 1
        shl al, 1
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + 50h]
        and dl, 0fdh
        or dl, al
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 50h], dl
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
