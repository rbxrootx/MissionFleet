// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00545ED0 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_00545ed0_00545ED0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 68 B4 FA FF: call 0x4f1347
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58568ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 58h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 44h], 6
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 40h], 6
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], 2
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4ch], 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 48h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 60h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 6ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 70h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 74h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 64h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 68h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 54h], 7fffh
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
