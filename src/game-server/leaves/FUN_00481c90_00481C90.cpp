// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00481C90 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_00481c90_00481C90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 581cf0h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 00 00 00: call 0x481d40
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 06 6B 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
