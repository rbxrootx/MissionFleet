// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E9760 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_587e9760() {
    __asm {
        mov eax, dword ptr [ecx + 10524h]
        push ebx
        mov ebx, dword ptr [eax + 54h]
        push esi
        mov esi, dword ptr [eax + 50h]
        push edi
        mov edi, dword ptr [eax + 114h]
        mov eax, 0fa000h
        cdq
        idiv edi
        mov ecx, eax
        mov eax, 0bb800h
        cdq
        idiv edi
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [edx + 4]
        mov edi, dword ptr [edx + 4]
        mov edx, dword ptr [edx + 8]
        add ecx, esi
        add eax, ebx
        cmp edi, esi
        ; Exact mapped bytes 7C 15: jl 0x587e97b3
        __asm _emit 0x7c
        __asm _emit 0x15
        cmp edi, ecx
        ; Exact mapped bytes 7F 11: jg 0x587e97b3
        __asm _emit 0x7f
        __asm _emit 0x11
        cmp edx, ebx
        ; Exact mapped bytes 7C 0D: jl 0x587e97b3
        __asm _emit 0x7c
        __asm _emit 0x0d
        cmp edx, eax
        ; Exact mapped bytes 7F 09: jg 0x587e97b3
        __asm _emit 0x7f
        __asm _emit 0x09
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
    }
}
