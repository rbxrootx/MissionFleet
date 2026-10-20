// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FFA10 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_100ffa10_100FFA10() {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 8]
        push ebx
        mov ebx, dword ptr [esp + 14h]
        push ebp
        mov edx, dword ptr [eax + 4]
        mov ebp, dword ptr [esp + 14h]
        mov dword ptr [esp + 8], ecx
        sub ebp, edx
        mov ecx, dword ptr [eax + 14h]
        push esi
        mov esi, dword ptr [eax + 8]
        mov dword ptr [esp + 18h], ebp
        mov ebp, dword ptr [esp + 20h]
        add ecx, edx
        sub ebx, esi
        cmp ebp, ecx
        push edi
        mov dword ptr [esp + 20h], ebx
        ; Exact mapped bytes 7D 02: jge 0x100ffa46
        __asm _emit 0x7d
        __asm _emit 0x02
        mov ebp, ecx
        mov ecx, dword ptr [eax + 18h]
        mov edi, dword ptr [esp + 28h]
        add ecx, esi
        cmp edi, ecx
        ; Exact mapped bytes 7D 04: jge 0x100ffa57
        __asm _emit 0x7d
        __asm _emit 0x04
        mov dword ptr [esp + 28h], ecx
        mov ecx, dword ptr [eax + 1ch]
        mov ebx, dword ptr [esp + 2ch]
        add ecx, edx
        cmp ebx, ecx
        ; Exact mapped bytes 7E 02: jle 0x100ffa66
        __asm _emit 0x7e
        __asm _emit 0x02
        mov ebx, ecx
        mov ecx, dword ptr [eax + 20h]
        mov edi, dword ptr [esp + 30h]
        add ecx, esi
        cmp edi, ecx
        ; Exact mapped bytes 7E 02: jle 0x100ffa75
        __asm _emit 0x7e
        __asm _emit 0x02
        mov edi, ecx
        mov ecx, dword ptr [esp + 28h]
        sub edi, esi
        sub ecx, esi
        mov esi, dword ptr [esp + 38h]
        push esi
        mov esi, dword ptr [esp + 38h]
        push esi
        sub ebp, edx
        sub esp, 10h
        mov eax, dword ptr [eax + 50h]
        mov esi, esp
        sub ebx, edx
        mov edx, dword ptr [esp + 28h]
        mov dword ptr [esi], ebp
        mov edx, dword ptr [edx]
        mov dword ptr [esi + 4], ecx
        mov ecx, dword ptr [esp + 38h]
        push ecx
        mov ecx, dword ptr [esp + 38h]
        mov dword ptr [esi + 8], ebx
        push ecx
        mov ecx, dword ptr [esp + 30h]
        push eax
        mov dword ptr [esi + 0ch], edi
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
