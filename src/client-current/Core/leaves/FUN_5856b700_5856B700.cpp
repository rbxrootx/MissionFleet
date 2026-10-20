// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856B700 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_5856b700_5856B700() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A8 6B F1 FF: call 0x584822d0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x6b
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a9760h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 64h], 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 68h], 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 6ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 70h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 54h], edx
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + 8], 3e8h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 58h], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 7ch], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 80h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 74h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 78h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
