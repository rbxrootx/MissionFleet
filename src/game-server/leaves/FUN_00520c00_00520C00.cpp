// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00520C00 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_00520c00_00520C00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 64h]
        and ah, 0f0h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 64h], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7C 55 FF FF: call 0x5161a9
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 64h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
