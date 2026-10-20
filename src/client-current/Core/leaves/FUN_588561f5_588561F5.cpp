// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588561F5 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_588561f5_588561F5() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 0ch]
        lea eax, [ecx + 1]
        cmp eax, 100h
        ; Exact mapped bytes 77 0C: ja 0x58856213
        __asm _emit 0x77
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        movzx eax, word ptr [eax + ecx*2]
        and eax, dword ptr [ebp + 10h]
        pop ebp
        ret
        xor eax, eax
        pop ebp
        ret
    }
}
