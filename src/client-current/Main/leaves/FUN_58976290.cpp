// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58976290 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_58976290() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 10h]
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
        ; Exact mapped bytes 7F 11: jg 0x589762bf
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
        ; Exact mapped bytes 7C 02: jl 0x589762c9
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
        ; Exact mapped bytes E8 AD FD FF FF: call 0x58976090
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        xor edi, edi
        test ebp, ebp
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 76 43: jbe 0x58976333
        __asm _emit 0x76
        __asm _emit 0x43
        mov eax, ebp
        sub eax, edi
        cmp esi, eax
        ; Exact mapped bytes 72 02: jb 0x589762fa
        __asm _emit 0x72
        __asm _emit 0x02
        mov esi, eax
        mov eax, esi
        mov ecx, dword ptr [esp + 18h]
        imul eax, ebx
        mov edx, dword ptr [esp + 14h]
        push eax
        push ecx
        push edx
        ; Exact mapped bytes E8 D1 FE FF FF: call 0x589761e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test esi, esi
        ; Exact mapped bytes 76 15: jbe 0x5897632b
        __asm _emit 0x76
        __asm _emit 0x15
        mov ecx, dword ptr [esp + 1ch]
        mov edx, esi
        lea ecx, [ecx + edi*4]
        add edi, esi
        mov dword ptr [ecx], eax
        add ecx, 4
        add eax, ebx
        dec edx
        ; Exact mapped bytes 75 F6: jne 0x58976321
        __asm _emit 0x75
        __asm _emit 0xf6
        cmp edi, ebp
        ; Exact mapped bytes 72 C1: jb 0x589762f0
        __asm _emit 0x72
        __asm _emit 0xc1
        mov eax, dword ptr [esp + 1ch]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
