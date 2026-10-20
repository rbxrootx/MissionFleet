// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A02F0 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_584a02f0_584A02F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FC 64 FE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 58895154h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 58h], 5
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ch], 3b9aca00h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 60h], 2
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 68h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 6ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 70h], edx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
