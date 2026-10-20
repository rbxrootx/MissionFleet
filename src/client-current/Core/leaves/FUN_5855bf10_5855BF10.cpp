// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855BF10 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_5855bf10_5855BF10() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 28h], 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 CF FF FF: call 0x58558f00
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 D0 FF FF: call 0x58558f90
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
