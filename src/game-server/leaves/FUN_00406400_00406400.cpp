// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00406400 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_00406400_00406400() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        push 0ffffh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 38h
        ; Exact mapped bytes E8 69 AA 00 00: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 581068h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 5ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 464h], 0
        mov eax, dword ptr [ebp - 4]
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 8F 23 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x23
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
