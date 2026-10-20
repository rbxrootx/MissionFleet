// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002A350 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_1002a350_1002A350() {
    __asm {
        mov eax, dword ptr [esp + 4]
        xor edx, edx
        test eax, eax
        setl dl
        push esi
        mov esi, dword ptr [ecx + 70h]
        dec edx
        and edx, eax
        mov dword ptr [esi + 58h], edx
        mov esi, dword ptr [ecx + 70h]
        mov dword ptr [esi + 5ch], edx
        mov edx, dword ptr [esp + 0ch]
        cmp edx, eax
        mov dword ptr [esi + 60h], 40000000h
        ; Exact mapped bytes 7C 02: jl 0x1002a37c
        __asm _emit 0x7c
        __asm _emit 0x02
        mov eax, edx
        cmp eax, 1
        mov dword ptr [ecx + 54h], eax
        mov esi, 1
        ; Exact mapped bytes 7C 02: jl 0x1002a38b
        __asm _emit 0x7c
        __asm _emit 0x02
        mov esi, eax
        mov eax, dword ptr [ecx + 70h]
        mov dword ptr [ecx + 54h], esi
        mov eax, dword ptr [eax + 58h]
        imul eax, dword ptr [ecx + 68h]
        cdq
        idiv esi
        pop esi
        mov dword ptr [ecx + 60h], eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
