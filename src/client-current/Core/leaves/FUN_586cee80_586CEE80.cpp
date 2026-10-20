// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586CEE80 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_586cee80_586CEE80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A1 09 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x09
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2B 6F DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x6f
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
