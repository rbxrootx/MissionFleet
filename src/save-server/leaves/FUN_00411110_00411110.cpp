// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411110 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_00411110_00411110() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 44h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0bc0h]
        mov edx, dword ptr [ecx + 0bc4h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
