// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58875B52 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_58875b52_58875B52() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 14h]
        test esi, esi
        ; Exact mapped bytes 7E 14: jle 0x58875b73
        __asm _emit 0x7e
        __asm _emit 0x14
        push esi
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 58 38 FE FF: call 0x588593c0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        cmp eax, esi
        pop ecx
        lea esi, [eax + 1]
        ; Exact mapped bytes 7C 02: jl 0x58875b73
        __asm _emit 0x7c
        __asm _emit 0x02
        mov esi, eax
        xor eax, eax
        push eax
        push eax
        push eax
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push esi
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 29 9D FF FF: call 0x5886f8b6
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        pop ebp
        ret
    }
}
