// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00404903 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_00404903_00404903() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 581060h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 140h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 D1 8A 0E 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x8a
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 9B 3E 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x3e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
