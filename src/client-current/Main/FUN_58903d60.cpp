// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 178 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903D60 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_58903d60_segment_00() {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 8]
        mov eax, dword ptr [edx + 4]
        sub dword ptr [esp + 0ch], eax
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 1ch]
        mov dword ptr [esp + 8], ecx
        mov ecx, dword ptr [edx + 14h]
        push esi
        mov esi, dword ptr [edx + 8]
        sub dword ptr [esp + 1ch], esi
        add ecx, eax
        cmp ebp, ecx
        push edi
        ; Exact mapped bytes 7D 02: jge 0x58903d8a
        __asm _emit 0x7d
        __asm _emit 0x02
        mov ebp, ecx
        mov ecx, dword ptr [edx + 18h]
        add ecx, esi
        cmp dword ptr [esp + 28h], ecx
        ; Exact mapped bytes 7D 04: jge 0x58903d99
        __asm _emit 0x7d
        __asm _emit 0x04
        mov dword ptr [esp + 28h], ecx
        mov ecx, dword ptr [edx + 1ch]
        mov ebx, dword ptr [esp + 2ch]
        add ecx, eax
        cmp ebx, ecx
        ; Exact mapped bytes 7E 02: jle 0x58903da8
        __asm _emit 0x7e
        __asm _emit 0x02
        mov ebx, ecx
        mov ecx, dword ptr [edx + 20h]
        mov edi, dword ptr [esp + 30h]
        add ecx, esi
        cmp edi, ecx
        ; Exact mapped bytes 7E 02: jle 0x58903db7
        __asm _emit 0x7e
        __asm _emit 0x02
        mov edi, ecx
        mov ecx, dword ptr [esp + 28h]
        sub ebp, eax
        sub ebx, eax
        mov eax, dword ptr [esp + 10h]
        sub ecx, esi
        sub edi, esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 38h]
        push eax
        mov eax, dword ptr [esp + 38h]
        push eax
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], ebp
        mov dword ptr [eax + 4], ecx
        mov dword ptr [esp + 40h], ecx
        mov ecx, dword ptr [esp + 38h]
        mov dword ptr [eax + 8], ebx
        push ecx
        mov ecx, dword ptr [edx + 50h]
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 0ch], edi
        mov eax, dword ptr [esp + 38h]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 34h]
        mov dword ptr [esp + 48h], ebp
        mov dword ptr [esp + 50h], ebx
        mov dword ptr [esp + 54h], edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
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
