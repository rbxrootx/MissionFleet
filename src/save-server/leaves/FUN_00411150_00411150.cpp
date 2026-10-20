// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411150 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_00411150_00411150() {
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
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bc0h]
        add ecx, 1
        mov edx, dword ptr [eax + 0bc4h]
        adc edx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0bc0h], ecx
        mov dword ptr [eax + 0bc4h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0bf8h]
        add edx, 1
        mov eax, dword ptr [ecx + 0bfch]
        adc eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0bf8h], edx
        mov dword ptr [ecx + 0bfch], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
