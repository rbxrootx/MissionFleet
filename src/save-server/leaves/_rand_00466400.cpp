// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00466400 .. +0x36 bytes.
extern "C" __declspec(naked) void _rand_00466400() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes E8 F7 8E 00 00: call 0x46f300
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        imul ecx, ecx, 343fdh
        add ecx, 269ec3h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 14h], ecx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 14h]
        shr eax, 10h
        and eax, 7fffh
        mov esp, ebp
        pop ebp
        ret
    }
}
