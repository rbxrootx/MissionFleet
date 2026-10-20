// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58571150 .. +0x126 bytes.
extern "C" __declspec(naked) void FUN_58571150_58571150() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 10000000h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0C BD 2B 00: call 0x5882ce70
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xbd
        __asm _emit 0x2b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588aa810h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 120h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 124h], 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 134h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 144h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 13ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 140h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 130h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 44h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1ech], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1f0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1f4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 204h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1f8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1fch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 200h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 208h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 210h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 214h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 218h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
