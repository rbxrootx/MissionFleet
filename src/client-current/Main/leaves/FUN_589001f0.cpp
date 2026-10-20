// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589001F0 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_589001f0() {
    __asm {
        ; Exact mapped bytes DB 44 24 04: fild dword ptr [esp + 4]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        push ebx
        ; Exact mapped bytes DD 05 00 24 9A 58: fld qword ptr [0x589a2400]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x24
        __asm _emit 0x9a
        __asm _emit 0x58
        push esi
        push edi
        ; Exact mapped bytes DC C9: fmul st(1), st(0)
        __asm _emit 0xdc
        __asm _emit 0xc9
        mov esi, ecx
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes E8 98 CA 07 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xca
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes DA 4C 24 14: fimul dword ptr [esp + 0x14]
        __asm _emit 0xda
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        mov ebx, eax
        ; Exact mapped bytes E8 8D CA 07 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xca
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        mov eax, 0f4240h
        cmp dword ptr [esp + 10h], eax
        ; Exact mapped bytes 7E 05: jle 0x58900225
        __asm _emit 0x7e
        __asm _emit 0x05
        mov ebx, 7fffffffh
        cmp dword ptr [esp + 14h], eax
        ; Exact mapped bytes 7E 05: jle 0x58900230
        __asm _emit 0x7e
        __asm _emit 0x05
        mov edi, 7fffffffh
        mov ecx, dword ptr [esi + 74h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 24h]
        push ebx
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 78h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 24h]
        push edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
