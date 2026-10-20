// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046EBE0 .. +0x2C bytes.
extern "C" __declspec(naked) void _ArrayUnwindFilter__YAHPAU_EXCEPTION_POINTERS___Z_0046EBE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0e06d7363h
        ; Exact mapped bytes 74 02: je 0x46ec01
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x46ec06
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 CA 08 00 00: call 0x46f4d0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
