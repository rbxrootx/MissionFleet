// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412F83 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_00412f83_00412F83() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 5810b8h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 140h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 51 A4 0D 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xa4
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 1B 58 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
