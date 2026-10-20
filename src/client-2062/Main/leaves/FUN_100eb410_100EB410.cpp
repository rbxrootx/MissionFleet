// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EB410 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_100eb410_100EB410() {
    __asm {
        mov eax, dword ptr [ecx + 5c44h]
        cmp eax, 0e10h
        ; Exact mapped bytes 7C 05: jl 0x100eb422
        __asm _emit 0x7c
        __asm _emit 0x05
        add eax, 0fffff1f0h
        test eax, eax
        mov dword ptr [ecx + 5c44h], eax
        ; Exact mapped bytes 7D 05: jge 0x100eb431
        __asm _emit 0x7d
        __asm _emit 0x05
        add eax, 0e10h
        mov dword ptr [ecx + 5c44h], eax
        lea edx, [eax + 32h]
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, edx
        cmp eax, 24h
        mov dword ptr [ecx + 5c40h], eax
        ; Exact mapped bytes 7C 03: jl 0x100eb45b
        __asm _emit 0x7c
        __asm _emit 0x03
        add eax, -24h
        mov dword ptr [ecx + 5c40h], eax
        ret
    }
}
