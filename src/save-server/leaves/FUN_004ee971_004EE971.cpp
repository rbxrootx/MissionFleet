// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EE971 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_004ee971_004EE971() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 40h], 0
        ; Exact mapped bytes 7F 12: jg 0x4ee993
        __asm _emit 0x7f
        __asm _emit 0x12
        push 677d38h
        push 677d84h
        ; Exact mapped bytes E8 85 1C FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 40h]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [ecx + 50h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov ecx, dword ptr [edx + 58h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], eax
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [eax + 60h]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
