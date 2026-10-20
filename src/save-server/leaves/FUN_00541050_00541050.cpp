// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00541050 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_00541050_00541050() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 18 E2 F8 FF: call 0x4cf277
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xe2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 638254h
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
