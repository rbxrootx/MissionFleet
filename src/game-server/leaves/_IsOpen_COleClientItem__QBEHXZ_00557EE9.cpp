// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00557EE9 .. +0x2A bytes.
extern "C" __declspec(naked) void _IsOpen_COleClientItem__QBEHXZ_00557EE9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 139h
        push 5cfa14h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 5D 32 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x32
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor eax, eax
        cmp dword ptr [ecx + 4ch], 2
        sete al
        mov esp, ebp
        pop ebp
        ret
    }
}
