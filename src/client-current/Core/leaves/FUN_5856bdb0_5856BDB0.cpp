// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856BDB0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_5856bdb0_5856BDB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 68h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 60h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 1
        ; Exact mapped bytes 75 2A: jne 0x5856bdfc
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax*4 + 589490f0h]
        imul edx, dword ptr [ecx + 60h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 64h], edx
        mov ecx, dword ptr [ebp - 4]
        imul edx, dword ptr [ecx + 8], 3e8h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 58h], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
