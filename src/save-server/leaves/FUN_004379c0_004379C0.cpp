// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004379C0 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_004379c0_004379C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        xor eax, eax
        cmp edx, dword ptr [ecx + 4]
        sete al
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 1F: jne 0x437a01
        __asm _emit 0x75
        __asm _emit 0x1f
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov cl, byte ptr [ebp - 4]
        mov byte ptr [eax], cl
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx + 4], ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
