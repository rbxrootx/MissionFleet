// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10077250 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_10077250_10077250() {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        mov ebx, ecx
        push edi
        mov edi, dword ptr [esp + 14h]
        mov eax, dword ptr [ebp*4 + 101ace60h]
        mov ecx, dword ptr [ebx + 68h]
        sub ecx, edi
        mov eax, dword ptr [eax + 24h]
        mov dword ptr [ebx + 68h], ecx
        ; Exact mapped bytes 78 4F: js 0x100772c0
        __asm _emit 0x78
        __asm _emit 0x4f
        test eax, eax
        ; Exact mapped bytes 7E 52: jle 0x100772c7
        __asm _emit 0x7e
        __asm _emit 0x52
        push esi
        lea esi, [ebx + 0c8h]
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [ebx + 68h]
        test eax, eax
        ; Exact mapped bytes 7C 24: jl 0x100772ab
        __asm _emit 0x7c
        __asm _emit 0x24
        lea ecx, [eax + 0ah]
        push ecx
        mov ecx, dword ptr [esi]
        push eax
        push ebp
        ; Exact mapped bytes E8 FC BF 06 00: call 0x100e3290
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xbf
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        lea edx, [edi*8]
        sub edx, edi
        mov eax, dword ptr [ecx + 8]
        lea edx, [eax + edx*2]
        push edx
        ; Exact mapped bytes E8 15 7B 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x7b
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        add esi, 4
        dec eax
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 75 C7: jne 0x10077280
        __asm _emit 0x75
        __asm _emit 0xc7
        pop esi
        pop edi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebx + 68h], 0
        pop edi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
