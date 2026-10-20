// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58565150 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_58565150_58565150() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 14h]
        mov eax, dword ptr [eax*4 + 589490f0h]
        imul eax, dword ptr [ebp + 0ch]
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov eax, dword ptr [ebp + 14h]
        mov eax, dword ptr [eax*4 + 5894c930h]
        imul eax, dword ptr [ebp + 0ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [eax*4 + 5894c930h]
        imul eax, dword ptr [ecx + 0ch]
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [eax*4 + 589490f0h]
        imul eax, dword ptr [ecx + 0ch]
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
