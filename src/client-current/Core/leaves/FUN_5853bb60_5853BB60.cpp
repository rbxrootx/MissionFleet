// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5853BB60 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_5853bb60_5853BB60() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 58h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        imul edx, dword ptr [eax*4 + 5894c930h]
        mov eax, edx
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        imul eax, dword ptr [ecx*4 + 589490f0h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
