// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446610 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_00446610_00446610() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
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
        mov esp, ebp
        pop ebp
        ret
    }
}
