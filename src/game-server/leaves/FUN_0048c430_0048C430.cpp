// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048C430 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_0048c430_0048C430() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8A C3 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 7F C3 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
