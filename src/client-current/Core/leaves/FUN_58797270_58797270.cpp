// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58797270 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_58797270_58797270() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 7C 04: jl 0x58797281
        __asm _emit 0x7c
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0B: jmp 0x5879728c
        __asm _emit 0xeb
        __asm _emit 0x0b
        imul eax, dword ptr [ebp + 8], 47h
        mov ecx, dword ptr [ebp - 4]
        lea eax, [ecx + eax + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
