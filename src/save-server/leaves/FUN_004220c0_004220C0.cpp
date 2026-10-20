// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004220C0 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_004220c0_004220C0() {
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
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 7F 13: jg 0x4220f7
        __asm _emit 0x7f
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 7C 07: jl 0x4220f7
        __asm _emit 0x7c
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4220f9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
