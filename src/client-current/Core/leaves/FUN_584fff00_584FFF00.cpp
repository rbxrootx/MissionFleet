// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FFF00 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_584fff00_584FFF00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 4D: je 0x584fff5f
        __asm _emit 0x74
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 64h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        imul edx, dword ptr [ecx + 74h]
        mov eax, dword ptr [ebp - 4]
        imul edx, dword ptr [eax + 78h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 58h], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        imul eax, dword ptr [edx + 74h]
        mov ecx, dword ptr [ebp - 4]
        imul eax, dword ptr [ecx + 78h]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 74h]
        lea edx, [eax + ecx - 1]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ch], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        mov dword ptr [ecx + 50h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
