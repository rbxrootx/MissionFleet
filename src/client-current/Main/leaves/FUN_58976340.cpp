// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58976340 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_58976340() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 10h]
        shl ebx, 7
        mov eax, 3b9ac9f0h
        xor edx, edx
        div ebx
        mov ecx, dword ptr [esp + 8]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [ecx + 4]
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 7F 11: jg 0x58976372
        __asm _emit 0x7f
        __asm _emit 0x11
        mov eax, dword ptr [ecx]
        push ecx
        mov dword ptr [eax + 14h], 46h
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        add esp, 4
        mov ebp, dword ptr [esp + 20h]
        cmp esi, ebp
        ; Exact mapped bytes 7C 02: jl 0x5897637c
        __asm _emit 0x7c
        __asm _emit 0x02
        mov esi, ebp
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 14h]
        lea eax, [ebp*4]
        mov dword ptr [edi + 50h], esi
        push eax
        push ecx
        push edx
        ; Exact mapped bytes E8 FA FC FF FF: call 0x58976090
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        xor edi, edi
        test ebp, ebp
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 76 48: jbe 0x589763eb
        __asm _emit 0x76
        __asm _emit 0x48
        mov eax, ebp
        sub eax, edi
        cmp esi, eax
        ; Exact mapped bytes 72 02: jb 0x589763ad
        __asm _emit 0x72
        __asm _emit 0x02
        mov esi, eax
        mov eax, esi
        mov ecx, dword ptr [esp + 18h]
        imul eax, dword ptr [esp + 1ch]
        mov edx, dword ptr [esp + 14h]
        shl eax, 7
        push eax
        push ecx
        push edx
        ; Exact mapped bytes E8 19 FE FF FF: call 0x589761e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test esi, esi
        ; Exact mapped bytes 76 15: jbe 0x589763e3
        __asm _emit 0x76
        __asm _emit 0x15
        mov ecx, dword ptr [esp + 20h]
        mov edx, esi
        lea ecx, [ecx + edi*4]
        add edi, esi
        mov dword ptr [ecx], eax
        add ecx, 4
        add eax, ebx
        dec edx
        ; Exact mapped bytes 75 F6: jne 0x589763d9
        __asm _emit 0x75
        __asm _emit 0xf6
        cmp edi, ebp
        ; Exact mapped bytes 72 BC: jb 0x589763a3
        __asm _emit 0x72
        __asm _emit 0xbc
        mov eax, dword ptr [esp + 20h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
