// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00422150 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_00422150_00422150() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push ebx
        push esi
        push edi
        lea edi, [ebp - 40h]
        mov ecx, 10h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax]
        xor eax, eax
        cmp edx, dword ptr [ecx]
        sete al
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
